from collections import deque
def solve(n):
    # CODE HERE
    if n==0 or n==1:
        return n
    solve1=solve(n-1)
    solve2=solve(n-2)
    ans=solve1+solve2
    return ans

if __name__ == '__main__':
	n = int(input())
	out = solve(n)
	print(out)
