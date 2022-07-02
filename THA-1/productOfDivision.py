from collections import deque
def solve(a, b):
    # CODE HERE
    x=a//b
    y=a/b
    prod= x*y
    return prod

if __name__ == '__main__':
	a = int(input())
	b = int(input())
	res = solve(a, b)
	print(res)
