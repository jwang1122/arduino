"""
load json from a file
"""
import json

with open('Arduino/PeriodicTable.json') as periodic:
    data = json.load(periodic)

print('Available Elements: ')

for element in data['elements']:
    print(element['name'], end=" ")
print()
while True:
    name = input("Please enter name of element: ")
    elementData = data['elements'][0]

    for element in data['elements']:
        if element['name'] == name:
            elementData = element
            break

    print(elementData)
    answer = input("More? (y/n) ")
    if answer=='n':
        break


