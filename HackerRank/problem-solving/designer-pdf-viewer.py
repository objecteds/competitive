def designerPdfViewer(h, word):
    word = list(word)
    height = 0
    width = len(word)
    for x in word:
        current = h[ord(x)-97]
        if current > height:
            height = current
    
    return height * width