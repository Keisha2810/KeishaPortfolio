# -*- coding: utf-8 -*-
"""
Created on Thu Jun 17 14:08:56 2021

@author: Keisha
"""

class Onlinestore :
      def __init__(self,numberOfitemsbought,totalcost,prediscountcost):
          self.a = numberOfitemsbought
          self.b = totalcost
          self.c = prediscountcost
          
     
      def Calculator(self):
         if self.a < 10 and self.c >= 100000:
             actualpay = self.c * 0.9
             print ("You bought",numberOfitemsbought,"items. You have been awarded a 10% discount.Your original total cost is: " ,prediscountcost,"naira. The actual cost of your goods after discount is :",actualpay,"naira")
         elif self.a>10 and self.c >= 100000:
             actualpay = self.c * 0.9
             print ("You bought",numberOfitemsbought,"items. You have been awarded a 10% discount.Your original total cost is: ",prediscountcost,"naira. The actual cost of your goods after discount is :",actualpay,"naira. You also have a gift reward.")
         else:
            print("You bought",numberOfitemsbought,"items.You are not awarded a 10% dicount or a gift reward.Your actual cost is: ",prediscountcost, "naira")

numberOfitemsbought = int(input("Enter the number of items purchased: "))
totalcost = int(input("Enter the total cost of items purchased: "))
prediscountcost = numberOfitemsbought * totalcost

Buyer1 = Onlinestore(numberOfitemsbought,totalcost,prediscountcost)
print (Buyer1.Calculator())

            
             
             
     
          