from collections import namedtuple

n = int(input())
Student = namedtuple('Student', ",".join(input().split()))
students = []

for i in range(n):
    line = input().split()
    students.append(Student(line[0],line[1],line[2],line[3]))
    
marks = 0

for _ in students:
    marks += int(_.MARKS)
    
print(marks/n)