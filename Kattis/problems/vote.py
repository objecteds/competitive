for i in range(int(input())):
    total = 0
    candidates = []

    for j in range(int(input())):
        vote = int(input())
        total += vote
        candidates.append(vote)

    winner = max(candidates)

    if candidates.count(winner) > 1:
        print("no winner")
    elif winner > total - winner:
        print(f"majority winner {candidates.index(winner)+1}")
    elif winner <= total - winner:
        print(f"minority winner {candidates.index(winner)+1}")