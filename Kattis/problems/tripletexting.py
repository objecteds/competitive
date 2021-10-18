s = input()

length = len(s)
word_len = int(length / 3)

t = ""

if s[0:word_len] == s[word_len:word_len*2]:
    t = s[0:word_len]
elif s[word_len:word_len*2] == s[word_len*2:word_len*3]:
    t = s[word_len:word_len*2]
else:
    t = s[0:word_len]

print(t)