def merge_the_tools(string, k):
    for i in range(0, len(string), k):
        st = set()
        s = ""
        for j in range(k):
            if string[i+j] not in st:
                st.add(string[i+j])
                s += string[i+j]
        print(s)
        

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)