def repeatedString(s, n):
    a_in_s = s.count('a')
    t = (n // len(s)) * a_in_s + s[:n % len(s)].count('a')
    return t