arr = [-4, 3, -9, 0, 4, 1]


def plusMinus(arr):
    pos = 0
    neg = 0
    zero = 0
    n = len(arr)

    for x in range(0, len(arr)):
        if arr[x] > 0:
            pos = pos + 1
        if arr[x] < 0:
            neg = neg + 1
        if arr[x] == 0:
            zero = zero + 1

    print(pos / n)
    print(neg / n)
    print(zero/ n)

plusMinus(arr)
