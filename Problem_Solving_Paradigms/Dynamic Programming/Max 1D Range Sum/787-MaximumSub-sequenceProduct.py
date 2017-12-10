import sys

for l in sys.stdin:
    arr = list(map(int, l.split()))
    arr = arr[:-1]

    n = len(arr)
    ans = -999999999
    
    for x in range(n):
        temp = 1
        for y in range(x, n):
            temp *= arr[y]
            ans = max(ans, temp)
    print(ans)
