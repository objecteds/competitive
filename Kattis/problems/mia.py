line = input()

while line != "0 0 0 0":
    s0, s1, r0, r1 = map(int, line.split())

    s = int(str(s0)+str(s1))
    r = int(str(r0)+str(r1))
    
    if s == r or (s == 12 and r == 21) or (s == 21 and r == 12):
        print("Tie.")
    elif s == 12 or s == 21:
        print("Player 1 wins.")
    elif r == 12 or r == 21:
        print("Player 2 wins.")
    elif s0 == s1 or r0 == r1:
        if s0 == s1 and r0 == r1:
            if s > r:
                print("Player 1 wins.")
            elif r > s:
                print("Player 2 wins.")
        elif s0 == s1:
            print("Player 1 wins.")
        elif r0 == r1:
            print("Player 2 wins.")
    else:
        s = int("".join(sorted([str(s0), str(s1)], reverse=True)))
        r = int("".join(sorted([str(r0), str(r1)], reverse=True)))
        if s > r:
            print("Player 1 wins.")
        elif r > s:
            print("Player 2 wins.")
        else:
            print("Tie.")

    line = input()
            
    
        

