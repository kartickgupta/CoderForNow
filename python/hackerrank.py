
import math
import os
import random
import re
import sys

# Complete the solve function below.
meal_cost = float(input())

tip_percent = int(input())

tax_percent = int(input())

def solve(meal_cost, tip_percent, tax_percent):

    
    final_price=(meal_cost/100*tip_percent)+(meal_cost/100*tax_percent)+meal_cost
    print(round(final_price))

solve(meal_cost, tip_percent, tax_percent)
    