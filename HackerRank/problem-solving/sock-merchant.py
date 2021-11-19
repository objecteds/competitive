def sockMerchant(n, ar):
    pairs = 0
    sock_set = set(ar)
    
    for _ in sock_set:
        x = ar.count(_)
        pairs += x // 2
        
    return pairs