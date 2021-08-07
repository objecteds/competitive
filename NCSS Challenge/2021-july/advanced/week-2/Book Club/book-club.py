line = input("Book read: ")
books = []
book_dict = {}
names = []

while line:
    book, name = line.split(":")

    if book not in books:
        books.append(book)
    
    if name not in names:
        names.append(name)

    if book not in book_dict:
        book_dict[book] = [name]
    else:
        book_dict[book].append(name)

    line = input("Book read: ")

books = sorted(books)

for i in range(len(books)):
    j = 0
    answer = f"{books[i]}: "
    friends_left = []
    for _ in names:
        if _ not in book_dict[books[i]]:
            friends_left.append(_)
    friends_left = sorted(friends_left)
    if len(friends_left) == 0:
        answer += "Everyone has read this!"
    elif len(friends_left) == 1:
        answer += f"{friends_left[0]}"
    else:
        for j in range(0, len(friends_left)-1):
            answer += f"{friends_left[j]}, "
        answer += f"{friends_left[-1]}"

    print(answer)
    