def create_phone_number(n):
    phoneNumber = []
    areaCode = create_area_code(n)
    areaCode = eraseWhiteSpace(areaCode)
    phoneNumber.append(areaCode)

    whiteSpace = " "
    phoneNumber.append(whiteSpace)
    
    restOfNumbers = getRest(n)
    restOfNumbers = eraseWhiteSpace(restOfNumbers)
    phoneNumber.append(restOfNumbers)

    phoneNumber = [elem for elem in phoneNumber if elem.strip()]
    phoneNumber = " ".join([str(elem) for elem in phoneNumber])

    return phoneNumber


def create_area_code(n):
    areaCode = []
    finalAreaCode = ""
    areaCode.append("(")
    for i in range(0, 3):
        areaCode.append(n[i])
    areaCode.append(")")
    areaCode = ' '.join([str(elem) for elem in areaCode])
    return areaCode

def getRest(n):
    restNumbers = []
    for i in range(3,6):
        restNumbers.append(n[i])

    restNumbers.append("-")
    for i in range(6, len(n)):
        restNumbers.append(n[i])

    restNumbers = ' '.join([str(elem) for elem in restNumbers])
    return restNumbers

def eraseWhiteSpace(n):
    return n.replace(' ', '')
