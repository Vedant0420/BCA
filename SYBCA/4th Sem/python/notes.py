# a = [1,2]
# b = [1,2]
# print(a==b) 
# print(a is b) 
# print(id(a))
# print(id(b))

# for i in range(1,10,2): # 1 = start 10= end 2= step
#     print(i)

# i = 1
# while i <= 5:
#     print(i)
#     i += 1

# for i in range(3):
#     for j in range(2):
#         print(i, j) 
# for i in range(10,0,-2):
#     print(i)

# for i in range(10):
#     if i == 5:
#         break
#     print(i)

# name = "vedant"
# print(name[-1]) 

# n = int(input("Enter no. of students: "))

# marks = []

# for i in range(n):
#     marks.append(int(input("Enter Marks: ")))

# max_marks = marks[0]
# min_marks = marks[0]

# for i in marks:
#     if i > max_marks:
#         max_marks = i

#     if i < min_marks:
#         min_marks = i

# print("Max marks =", max_marks)
# print("Min marks =", min_marks)


# class Car: 
#     def __init__(self,name, year, color, for_sale):
#         self.name = name
#         self.year = year
#         self.color = color
#         self.for_sale = for_sale
# car1 = Car("Lamborghini", 2020, "Yellow", True)
# print(car1.for_sale)    


# class Student:

#     welcome = "Welcome to MIT"
#     def __init__(self,name,PRN):
#         self.name = name
#         self.PRN = PRN

# Student1 = Student("Vedant", 1272240644)
# Student2 = Student("Ayaz", 1272240182)

# print("Student", Student1.name, "with PRN", Student1.PRN, Student1.welcome)
# print("Student", Student2.name, "with PRN", Student2.PRN, Student2.welcome)



# class College:
#     def init(self,name,prn,course):
#         self.name=name
#         self.prn=prn
#         self.course=course

#     def show(self):
#         print(self.name,self.prn,self.course)

#     def CheckIn(self):
#         print("{} Checked In".format(self.name))

#     @staticmethod
#     def greet():
#         print("kys nigger")

# class Student(College):
#     def CheckIn(self):
#         print("{} Checked In with PRN {}".format(self.name,self.prn))

# s1=Student("Vedant",1272240644,"BCA")
# Student.greet()
# s1.CheckIn()
# s1.show()
    
# import numpy as np




    
