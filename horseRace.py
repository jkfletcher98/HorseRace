"""Testing to see if I understand the program"""

import random

TOTAL_HORSES = 5
TRACKLENGTH = 15

def main():
    keepGoing = True
    while keepGoing:
        for horse in TOTAL_HORSES:
            advance(horsePosition, horseNum)
            printLane(horsePosition, horseNum)

def advance(horsePosition, horseNum):
    number = random.randint(0,1)
    horsePosition += number
    return horsePostion

def printLane(horsePosition, horseNum):
    for id in TRACK_LENGTH:
        if horsePosition == id:
            print(horseNum)
        else:
            print(". ")

