import argparse
import sys

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--x', type = 'float', default = 1.0,
                        help = 'What is the first number ?')
    parser.add_argument('--y', type = 'float', default=1.0,
                        help = 'What is the second number')
    parser.add_argument('--operation',type= 'string', default ='add'
                        help= 'What operation you want ?')
    args = parser.parse_args()
    sys.stdout 