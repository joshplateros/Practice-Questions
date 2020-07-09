#include <iostream>

struct Node {
	int val;
	Node * left;
	Node * right;
};

class TreeNode {
	public:
		TreeNode(): root(NULL) {};
		~TreeNode() {};
		void insert(int value) {
			if (root != NULL) {
				insert (value, root);
			} else {
				root = new Node;
				root->left = NULL;
				root->right = NULL;
			}
		}
		void insert(int value, Node * leaf) {
			if (value < leaf->val) {
				if (leaf->left != NULL) {
					insert(value, leaf->left);
				} else {
					leaf->left = new Node;
					leaf->left->val = value;
					leaf->left->left = NULL;
					leaf->left->right = NULL;
				}
			} else if (value >= leaf->val) {
				if (leaf->right != NULL) {
					insert(value, leaf->right);
				} else {
					leaf->right = new Node;
					leaf->right->val = value;
					leaf->right->right = NULL;
					leaf->right->left = NULL;
				}
			}
		}
		int maxDepthHelper() {
			maxDepth(root);
		}
		int maxDepth(Node * root) {
			if (root == NULL) 
				return 0;
			else {
				int leftHeight = maxDepth(root->left);
				int rightHeight = maxDepth(root->right);

				if (leftHeight >= rightHeight) {
					return leftHeight + 1;
				} else {
					return rightHeight + 1;
				}
			}
		}

	private:
		Node * root;
};

int main() {
	
	TreeNode * p = new TreeNode();
	p->insert(11);
	p->insert(12);
	p->insert(13);
	p->insert(15);
	int height = p->maxDepthHelper();

	std::cout << height << std::endl;

	delete p;

}
