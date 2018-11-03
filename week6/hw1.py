#-*- coding:utf-8 -*-

def make_divide(num1, num2):

    # if num1 > num2:
    #     quotient = num1 // num2
    #     remainder = num1 % num2
    #     n1 = remainder * pow(10, n)
    #     if n1 > num2:
    #         quotient = n1 // num2
    #         remainder = n1 % num2
    #         n1 = remainder * pow(10, n)
    #         if n1 > num2:
    #             quotient = n1 // num2
    #             remainder = n1 % num2
    #             n1 = remainder * pow(10, n)

    quotient = num1 // num2
    remainder = num1 % num2
    cnt = 0
    result = str(quotient)
    if remainder != 0:
        result += '.'
    while remainder != 0 and cnt < 200:
        cnt += 1
        n = 1
        n1 = remainder * pow(10, n)
        while n1 < num2:
            result += str(0)
            n += 1
            cnt += 1
            n1 = remainder * pow(10, n)
        quotient = n1 // num2
        remainder = n1 % num2
        result += str(quotient)

    print(result)
    print(len(result))



if __name__ == '__main__':
    make_divide(16, 19)