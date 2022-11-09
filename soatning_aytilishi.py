c = ["zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty"]
h = int(input())
m = int(input())
str = ""
if m == 0:
    print(c[h], "o' clock")
else :
    ans = False
    if m > 30:
        ans = True
        m = 60 - m
    if m == 30:
        print("half past", c[h])
    else :     
        if 9 < m and m < 20:
            str += c[m] + " "
        if m // 10 == 2:
            str += c[20] + " "
        if m < 10 or 20 < m:
            str += c[m % 10] + " "
        if ans == True:
            if m != 15 and m != 1:
                str += "minutes to " + c[h + 1]
            elif m == 1:
                str += "minute to " + c[h + 1]
            else :
                str += "to " + c[h + 1]
        else :
            if m != 15 and m != 1:
                str += "minutes past " + c[h]
            elif m == 1:
                str += "minute past " + c[h]
            else :
                str += "past " + c[h]
        print(str)