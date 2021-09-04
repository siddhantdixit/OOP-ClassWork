# first question
def isEligible(age,origin):
    if age>=35 and origin.lower()=="india":
        print("Yes eligible for presidential election")
    else:
        print("No not eligible for presidential election")

age = 50
isEligible(age)



# second question
def check_int_type(val):
    if(val>0):
        print("Positive")
    elif(val<0):
        print("Negative")
    else:
        print("Zero")

check_int_type(1)