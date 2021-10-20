if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    if query_name in student_marks:
        total_marks = student_marks[f'{query_name}']
        average_marks = total_marks[0] + total_marks [1] + total_marks[2]
        average_marks = average_marks / 3
        formatted_marks = "{:.2f}".format(average_marks)
        print(formatted_marks)
