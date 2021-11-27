for i in range(int(input())):
    blank = input()
    g, m = map(int, input().split())
    gl, ml = list(map(int, input().split())), list(map(int, input().split()))

    while len(gl) > 0 and len(ml) > 0:
        if min(gl) < min(ml):
            gl.remove(min(gl))
        elif min(gl) > min(ml) or min(gl) == min(ml):
            ml.remove(min(ml))

    print("Godzilla" if len(ml) == 0 else "MechaGodzilla")