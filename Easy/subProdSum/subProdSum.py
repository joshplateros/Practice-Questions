def substractProductAndSum(n):
    n = str(n)
    length = len(n)

    product = 1
    sumOfNumbers = 0
    numberToConvert = ""
    for i in range (0, length):
        numberToConvert = n[i] 
        numberToConvert = int(numberToConvert)


        product *= numberToConvert
        sumOfNumbers += numberToConvert

    
    print (product - sumOfNumbers)



substractProductAndSum(234)
