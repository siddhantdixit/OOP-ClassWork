print("\n\n\n")
print("=========== WELCOME TO XYZ BLOOD DONATION BLOOD DONATION CENTER ==========")
print("\n\nThis Is A Login Portal\n\n")
print("Please follow the given instructions in order to log in")

print("\nFOR ADMIN LOGIN: PRESS 1")
print("FOR USER LOGIN : PRESS 2")
myinput = int(input())


# Donor Class contains details of user as data members

class donor:
    x = 0  # for counting no. of donors

    def __init__(self, name, age, sex, blood_group, platelets_count, wbc_count, rbc_count):
        self.name = name
        self.age = age
        self.sex = sex
        self.blood_group = blood_group
        self.platelets_count = platelets_count
        self.wbc_count = wbc_count
        self.rbc_count = rbc_count
        donor.x += 1


donor_1 = donor('ARYA', 25, 'MALE', 'A+', 200234, 34768, 54678)
donor_2 = donor('ROHAN', 40, 'MALE', 'AB-', 203456, 36758, 56780)
donor_3 = donor('AMOL', 32, 'FEMALE', 'O+', 345670, 45678, 36987)
donor_4 = donor('SUMA', 37, 'FEMALE', 'B-', 354678, 67547, 45691)
donor_5 = donor('AMOGH', 41, 'MALE', 'A+', 321432, 56543, 56764)
donor_6 = donor('APPU', 48, 'FEMALE', 'A-', 265439, 45654, 65478)
donor_7 = donor('RAMESH', 69, 'MALE', 'A+', 234188, 45678, 65785)
donor_8 = donor('MILAN', 26, 'MALE', 'A+', 267554, 45694, 56543)
donor_9 = donor('AMIN', 30, 'MALE', 'AB+', 265354, 46614, 52743)
donor_10 = donor('SUDHAKAR', 60, 'MALE', 'A+', 267462, 45204, 56783)


def blood_banks():
    print("\n\nFollowing blood banks are avalable near you: ")
    print("\n1. Diagnostic labrotary ")
    print("\n2. HKES Blood Bank")
    print("\n3. Banglore Blood Bank")
    print("\n4. Akshya Blood Bank")
    print("\n5. Banglore Baptist Hospital and  Blood Bank")
    print("\n6. City Transfusion Ex- servicemen Blood Bank")


def rare_blood_groups():
    print("\nDonors with rare blood groups and their details are listed below: \n")
    print("\nNAME       AGE         SEX           BLOOD_GROUP\n")
    print("BUNTY       25        MALE           AB-\n")
    print("MUNNI       33       FEMALE         O+\n")
    print("SHEETAL       33         FEMALE         B-\n")
    print("ADITI   33         FEMALE           AB+\n")


if myinput == 1:
    print("\n\n================== Welcome Admin ==================\n")
    user_name = input("Please enter your username: ")
    user_name.lower()
    if user_name == 'siddhant':
        password = input("\nUsername found!\n\n Please enter your password: ")
        password.lower()
        if password == 'mypass':
            print("\nSigned In successfully!")
            print("\n\n============== Hello Admin we kindly Welcome you ==============")
            print("\n\nTell me what you want to know")
            # Only admins can know the details of the donors
            print("\n1. Details of the Donors")
            print("\n2. Details of the Blood Banks")
            print("\n3. Details of the donors with rare blood groups")
            choice = int(input("\n\nEnter a choice from the above: "))
            if choice == 1:
                donor_list = [donor_1, donor_2, donor_3, donor_4, donor_5,
                      donor_6, donor_7, donor_8, donor_9, donor_10]
                for user in donor_list:
                    print("\n")
                    print(user.__dict__)
            elif choice == 2:
                blood_banks()
            elif choice == 3:
                rare_blood_groups()
            else:
                print("\nInvalid Choice!")
        else:
            print("\nPassword doesn't match!")

    else:
        print("\nAdmin not found. Please enter the correct Username")

elif myinput == 2:
    print("\n\n=========== Welcome to the Blood Donation Hackathon Application =============\n")
    user_name = input("Please enter your username: ")
    user_name.lower()
    if user_name == 'amar' or 'akhbar' or 'anthony' or 'amitabh' or 'bacchan':
        password = input("\nUsername found!\n\n Please enter your password: ")
        password.lower()
        if password == 'password':
            print("\nSigned In successfully!")
            print("\n\n============= Hello User Welcome ===============")
            print("\n\nTell me what you want to know")
            # Users can only know the number of donors available and not their details
            print("\n1. Number of the Donors available")
            print("\n2. Details of the Blood Banks")
            print("\n3. Details of the donors with rare blood groups")
            choice = int(input("\n\nEnter a choice from the above: "))
            if choice == 1:
                print("\nTotal number of Donors avalable is: ", donor.x)
            elif choice == 2:
                blood_banks()
            elif choice == 3:
                rare_blood_groups()
            else:
                print("\nInvalid Choice!")
        else:
            print("\nPassword doesn't match!")

    else:
        print("\nUser not found. Please enter the correct Username")

else:
    print("\nWrong Choice! Please enter from the above choice only")
