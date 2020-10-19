
# www.codewars.com/kata/517abf86da9663f1d2000003/train/python
import re

def to_camel_case(text):
    splitted = []
    result = text.find("-")
    # completedWord = []
    completedWord = ""


    if (len(text) == 0):
        return ''


    splitted = re.split('[- _]', text)
    
    checkList = []   
    # Go over each word and each letter
    for i in range(0, len(splitted)):
        # i is every word, [0] is the
        # Check for Upper Camel Case

        checkList.append(list(splitted[i]))
        if (i == 0):
            if (checkList[i][0].isupper() == True):
                checkList[i][0] = checkList[i][0].upper()

        # Fix it here
        else:
            if (checkList[i][0].isupper() == False):
                checkList[i][0] = checkList[i][0].upper()

        # Convert back to string
        checkList[i] = ''.join(checkList[i])
        
        
        print (checkList)


    print ("YUP: ", completedWord.join(checkList))
    return completedWord.join(checkList)


to_camel_case("the_stealth_warrior")
