s = input()
print("".join(set([x for x in "CCCIIMW" if s.count(x) != "CCCIIMW".count(x)])))