def fun(s):
    try:
        username, half = s.split("@")
        websitename, extension = half.split(".")
        
        if len(username) >= 1:
            for x in username:
                if x.isdigit() or x.isalpha() or x == "_" or x == "-":
                    continue
                else:
                    return False
        else:
            return False
        
        if len(websitename) >= 1:
            for x in websitename:
                if x.isdigit() or x.isalpha():
                    continue
                else:
                    return False
        else:
            return False
            
        if len(extension) <= 3:
            for x in extension:
                if x.isalpha():
                    continue
                else:
                    return False
        else:
            return False   
            
        return True

    except Exception:
        return False
    
def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

filtered_emails = filter_mail(emails)
filtered_emails.sort()
print(filtered_emails)