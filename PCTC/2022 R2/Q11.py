import heapq
class medianheap:
    def __init__(self):
        self.max_heap = []
        self.min_heap = []
        

    def add(self, num):
        if not self.max_heap and not self.min_heap:
            heapq.heappush(self.min_heap, num)
            return 
        if not self.max_heap:
            if num > self.min_heap[0]:
                heapq.heappush(self.max_heap, -heapq.heappop(self.min_heap))
                heapq.heappush(self.min_heap, num)
            else:
                heapq.heappush(self.max_heap, -num)
            return
        if len(self.max_heap) == len(self.min_heap):
            if num < -self.max_heap[0]:
                heapq.heappush(self.max_heap, -num)
            else:
                heapq.heappush(self.min_heap, num)
        elif len(self.max_heap) > len(self.min_heap):
            if num < -self.max_heap[0]:
                heapq.heappush(self.min_heap, -heapq.heappop(self.max_heap))
                heapq.heappush(self.max_heap, -num)
            else:
                heapq.heappush(self.min_heap, num)
        else:
            if num > self.min_heap[0]:
                heapq.heappush(self.max_heap, -heapq.heappop(self.min_heap))
                heapq.heappush(self.min_heap, num)
            else:
                heapq.heappush(self.max_heap, -num)

    def findMedian(self):
        if len(self.max_heap) == len(self.min_heap):
            if -self.max_heap[0] < self.min_heap[0]:
                return -self.max_heap[0]
            else:
                return self.min_heap[0]
        elif len(self.max_heap) > len(self.min_heap):
            return -self.max_heap[0]
        else:
            return self.min_heap[0] 

l = medianheap()
s = ""

for x in list(input()):
    l.add(int(x))
    s += str(l.findMedian())

print(s)
