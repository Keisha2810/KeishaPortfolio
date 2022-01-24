# -*- coding: utf-8 -*-
"""
Created on Thu Jun 10 14:32:57 2021

@author: Keisha
"""
class Orange:
    orangecounter = 157
    def __init__(self,a):
        self.a = a


    @classmethod
    def orangecalc(cls,a):
        if (a > cls.orangecounter) :
            print("The number requested is more than the stock quantity. Select number less than stock quantity")
        else:
            b = a*10
            print("The cost of the orange is: " , b ,"dollars")
            print("Thank you for your patronage")
            
    @classmethod
    def orangeloop(cls,a):
        while (a > cls.orangecounter):
            a = int(input("Enter the number of oranges you like to purchase: "))
        else:
            Orange.orangecalc(a)
            
print(f"The number of oranges in stock is {Orange.orangecounter}")
print("The cost of an orange is 10 dollars")
a = int(input("Enter the number of oranges you like to purchase: "))           

Orange.orangecalc(a)
Orange.orangeloop(a)

