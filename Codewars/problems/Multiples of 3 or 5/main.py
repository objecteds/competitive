def solution(number):
    arr = []
    total = 0

    for i in range(1, number):
        if i % 3 == 0 or i % 5 == 0:
            arr.append(i)

    for num in arr:
        total += num

    return total