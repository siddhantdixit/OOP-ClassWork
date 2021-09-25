import time

class Menu:
    @classmethod
    def printHome(cls):
        print("1. Download File")
        print("2. Play Music")
        print("3. Stop Music")


def download_file():
    print("Downloading ........ ")
    # time.sleep(10)


Menu.printHome()

x = input()

if x == '1':
    print("Download Started")
    download_file()
if x == '2':
    print("Enter File Name: ")
if x == '3':
    print("Stop Playing Music: ")