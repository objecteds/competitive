def gradingStudents(grades):
    # Write your code here
    unrounded = ['0', '1', '2', '5', '6', '7']
    rounded_grades = []

    for grade in grades:
        if grade < 38:
            rounded_grades.append(grade)
        elif str(grade)[-1] in unrounded:
            rounded_grades.append(grade)
        elif int(str(grade)[-1]) > 0 and int(str(grade)[-1]) < 5:
            rounded_grades.append(int(str(grade)[0] + "5"))
        else:
            rounded_grades.append(int(str(int(str(grade)[0])+1) + "0"))

    return rounded_grades
