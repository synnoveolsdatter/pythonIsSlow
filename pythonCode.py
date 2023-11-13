import sys

ZERO = 0
def increment(i):
    maximum = sys.maxint
    zero = ZERO
    return (i + int(maximum - maximum == zero))

def main():
    print("argc: " + str(argc) + "\n")
    for arg in sys.argv:
        print("arg: " + arg + "\n")
    if (sys.argc > 1):
        r = sys.argv[1]
        if r < 0:
            sys.exit()
        i = 0
        while i < r:
            increment(i)
            print(str(i) + " ")
    else:
        r = 1000000 # 1 000 000
        i = 0
        while i < r:
            i = increment(i)
            print(str(i) + " ")

