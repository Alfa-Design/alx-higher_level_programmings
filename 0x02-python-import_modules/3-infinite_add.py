#!/usr/bin/python3
#print addition of all argumrnts
if __name__ == "__main__":
    import sys
    total = 0
    for i in range(len(sys.argv) - 1):
        total += int(sys.argv[i + 1])
    print("{}".format(total))
