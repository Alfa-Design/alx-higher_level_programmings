#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    retrn = 0
    for i in range(x):
        try:
            print("{}".format(my_list[i]), end="")
            retrn += 1
        except IndexError:
            break
    print("")
    return (retrn)

