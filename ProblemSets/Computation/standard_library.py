'''
standard_library.py
Solution for the 'shut the box game', Standard Library PS, Q5
'''

import numpy as np
import sys
import time
import random
import box
import re


def play(time_limit, name):
    '''
    Function for simulating the game
    Inputs:
        time_limit: max number of seconds the game can go on for
        name: player name
    '''
    curr_nums = np.arange(1, 10)
    start = time.time()
    while 1:
        # Check if time limit is hit and there are numbers remaining
        if check_time(start, time_limit) or curr_nums.size == 0:
            print("Game over!")
            break

        # Simulate rolls
        print("Numbers left: ", curr_nums)
        if sum(curr_nums) > 6:
            roll = random.randint(1, 6) + random.randint(1, 6)
        else:
            roll = random.randint(1, 6)
        print("Roll: ", roll)
        
        # Check roll validity
        if not box.isvalid(roll, curr_nums):
            print("Game over!")
            break

        flag2 = 0
        while 1:
            # Check for time limit
            if check_time(start, time_limit):
                print("Game over!")
                flag2 = 1
                break
            x = input("Numbers to eliminate: ")
            choices = box.parse_input(x, curr_nums)
            if choices and sum(choices) == roll:
                break
        # Time limit break
        if flag2 == 1:
            break
        curr_nums = np.array([x for x in curr_nums if x not in choices])

    print("Score for player ", name, ": ", sum(curr_nums))
    print("Time played: ", time.time() - start)
    if curr_nums.size == 0:
        print("Congratulations!! You shut the box!")
    else:
        print("Better luck next time >:)")


def check_time(start, time_limit):
    '''
    Function to check if time limit was hit
    Inputs:
        start: starting system time for the game
        time_limit: total time limit to play the game
    Output:
        True if time limit has been reached
        False otherwise
    '''
    time_taken = time.time() - start
    print("Seconds left: ", time_taken)
    if time_taken > time_limit:
        return True
    return False


if len(sys.argv) == 3:
    name = sys.argv[1]
    time_limit = int(sys.argv[2])
    play(time_limit, name)
else:
    print("Error! Expected exactly 2 extra command line arguments!")

