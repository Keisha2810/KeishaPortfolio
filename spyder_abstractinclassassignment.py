# -*- coding: utf-8 -*-
"""
Created on Thu Jun 24 15:25:15 2021

@author: Keisha
"""

from abc import ABC, abstractmethod
class Bird(ABC):
    def defecate(self):
        print ("I am a bird and I poop daily.")
    @abstractmethod
    def Move(self):
        pass
class Hen(Bird):
    def Move(self):
        print ("I am a hen and I love to run and peck people and I do some gentle flying.")
class Ostrich(Bird):
    def Move(self):
        print ("I am an ostrich and I love to run and pluck eyeballs and I do not fly.")  

her=Hen()
Ostrich.Move()
hasattr(o, name)en.Move()

    