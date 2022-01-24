# -*- coding: utf-8 -*-
"""
Created on Thu Jun  3 14:25:52 2021

@author: Keisha
"""


class Student:
     studentLevel = 'first year computer science 2020/2021 session'
     studentCounter = 0
     registeredcourse = 'CSC102'
     def __init__(self, thename, thematricno, thesex, thehostelname, theage, thecsc102examscore):
         self.name = thename
         self.matricno = thematricno
         self.sex = thesex
         self.hostelname = thehostelname
         self.age = theage
         self.csc102examscore = thecsc102examscore
         Student.studentCounter = Student.studentCounter +1

     def getName(self):
         return  self.name

     def setName(self, thenewName):
         self.name = thenewName
         
     def detage(self):
        if self.age > 16 :
            print(f"{self.name} is above 16.")
        else:
            print(f"{self.name} is less than 16.")
     
     def passfail(self):
         if self.csc102examscore > 44 :
            print(f"{self.name} has met the passmark in the course.")
         else:
            print(f"{self.name} has failed and has to enroll for the course next year.")
            
     @classmethod
     def course(cls):
         print(f"The registered course is {cls.registeredcourse}.")

     @staticmethod
     def PAUNanthem():
        print('Pau, here we come, Pau, here we come ')
         
     @staticmethod
     def evenodd(k):
        if k%2 == 0:
            print("The number is an even number")
        else:
            print("The number is an odd number.")
            
     @classmethod
     def studentno(cls):
         print(f"The number of students so far is {Student.studentCounter}")
         

student1 = Student('James Kaka', '021074', 'M', 'Emerald', 18 , 98)
print(student1.getName())
student1.setName('James Gaga')
print(student1.getName())
print(student1.detage())
print(Student.course())
print(student1.passfail())
Student.PAUNanthem()
print(Student.studentno())

k = int(input("Insert a random number: "))
Student.evenodd(k)
