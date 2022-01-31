s = "wibble wobble wibble wobble jelly on the plate".split()
w = input()
print(" ".join(s[s.index(w)+1:s.index(w)+1+int(input())]))