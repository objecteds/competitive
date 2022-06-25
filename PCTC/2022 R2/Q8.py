kicked = []
worst = 1e6
votes = dict()

for i in range(int(input())):
	s = input().split(":")
	voter = s[0]
	vote, member = s[1].split()
	if voter not in votes:
		votes[voter] = 0
	if member in votes:
		votes[member] += 1 if vote == "UP" else -1
	else:
		votes[member] = 1 if vote == "UP" else -1

for _ in votes:
	worst = min(worst, votes[_])

for _ in votes:
	if votes[_] == worst:
		kicked.append(_)

for _ in sorted(kicked):
	print(_)