students=[]
def TakeInput():
    for _ in range(int(input("Enter the number of students::"))):
        name= input(f"Enter the {_+1} student name::")
        attendance=input("Enter the attendance::")
        l1=[name, attendance]
        if attendance.lower()=="p":
            l1.append(float(input("Enter the marks of student:::")))  
        students.append(l1)

def AverageScore():
    global marks3, avg
    marks3=[i[2] for i in students if len(i)>2]
    avg=sum(marks3)/len(students)

def HighLowScore():
    global highest,lowest
    highest=max(marks3)
    lowest=min(marks3)


def AbsentStud():
    global absent
    absent=0
    for _ in students:
            if _[1].lower()=='a':
                absent+=1


def FreqScore():
    global freq, high
    high=0
    freq=0
    for _ in marks3:
        c=marks3.count(_)
        if c>high:
            high=c
            freq=_

TakeInput()
AverageScore()
HighLowScore()
AbsentStud()
FreqScore()

print(f"\n\nAverage score={avg:.2f}\nHighest score={highest}\nLowest score={lowest}\nAbsent students={absent}\nHighest frequency marks={freq}")

