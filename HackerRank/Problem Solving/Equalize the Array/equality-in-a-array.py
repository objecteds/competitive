def equalizeArray(arr):
    return len(arr) - max([arr.count(x) for x in set(arr)])