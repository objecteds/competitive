alphabet = list("abcdefghijklmnopqrstuvwxyz")
for i in range(int(input())):
    s = input().lower()
    missing = []
    for _ in alphabet:
        if _ not in s:
            missing.append(_)

    if missing == []:
        print("pangram")
    else:
        print("missing", "".join(missing))
        