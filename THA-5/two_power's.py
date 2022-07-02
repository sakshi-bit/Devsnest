from collections import deque
def solve(n):
    # CODE HERE
    if n==0:
        return 0
    while n!=1:
        if n%2 !=0:
            return 0
        n/=2
    return 1

if __name__ == '__main__':
	n = int(input())
	ans = solve(n)
	print(ans)
