import random as rng
import matplotlib.pyplot as plt
import numpy as np
import time

points = [
    "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]

edges=[
    ["start","a",1],
    ["z","end",1]
    ]

for a in range(0,len(points)):
    for b in range(a,len(points)):
        if points[a] ==  points[b]:
            pass
       if points[a] == "a" and points[b] == "z":
           pass
       else:
            length = rng.randint(-1,10)
            edges.append([points[a],points[b],length])
print(edges)
print(len(edges))
time.sleep(3)

length = len(edges)
ToDel = []
for c in range(0,length):
    if edges[c][2] <= 0:
        print(edges[c])
        ToDel.append(edges[c])
        length -= 1
        print(str(len(edges)) + " " + str(c))

for d in range(0,len(ToDel)):
    edges.remove(ToDel[d])

print(edges)   
print(str(len(edges)) + " " + str(c))
