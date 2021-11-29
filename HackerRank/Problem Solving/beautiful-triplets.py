def beautifulTriplets(d, arr):
    t = 0
    for i in range(len(arr)):
        if arr[i] + d in arr and arr[i] + 2*d in arr:
            t += 1
    return t