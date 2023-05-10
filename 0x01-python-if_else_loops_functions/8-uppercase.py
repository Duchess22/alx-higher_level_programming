#!/usr/bin/python3

def uppercase(str):
    for char in str:
        if ord(char) >= ('a') and ord(char) <= ('z'):
            char = chr(ord(char) - 32)
        print("{:s}".format(char), end='')

    print('\n', end="")
