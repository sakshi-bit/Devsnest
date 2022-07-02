from collections import deque
def solve(n, arr, x, y):
    # CODE HERE
    return sum(arr[x:y+1])/(y-x+1)


if __name__ == '__main__':
	n = int(input())
	arr = list(map(int, input().split()))
	x = int(input())
	y = int(input())
	res = solve(n, arr, x, y)
	print(res)
