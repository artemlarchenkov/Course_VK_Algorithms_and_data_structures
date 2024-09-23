n = int(input())
arr = list(map(int, input().split()))
needle = int(input())

def binarySeatch(arr, needle):
    l = 0
    r = len(arr)
    while (l <= r):
        mid = (l+r)/2
        if(needle == arr[mid]):
           return True
        if(needle < arr[mid]):
           r = mid - 1
        else:
           l = mid + 1
    return -1

print(binarySeatch(arr, needle))
