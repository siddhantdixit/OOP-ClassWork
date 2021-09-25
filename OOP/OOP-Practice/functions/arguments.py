def my_function(*args):
    for i in args:
        print(i)


def my_function(**kwargs):
    for i,j in kwargs.items():
        print(i, j)

my_function(name="sid",roll="20bcs123")