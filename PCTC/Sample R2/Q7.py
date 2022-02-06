n = int(input())
c, lo, hi = 0, 1, 100

while lo <= hi:
  c += 1
  mid = (lo+hi) // 2
  if mid < n:
    lo = mid + 1
  elif mid > n:
    hi = mid - 1
  else:
    break

print(c)
