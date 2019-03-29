import random
import itertools

all_solutions=[]
friends=["Karolina", "Magda", "Weronika", "Rafał"," Bartek","Kamil","Justyna","Piotr"]
places=[]
for x in range(8):
    places.append(x+1)
print(places)
all_possible_sittings = list(itertools.permutations(friends))
print(len(all_possible_sittings))
for setting in all_possible_sittings:
    #Gospodarze mają usiąść po obu końcach stołu
    if setting.index("Justyna") != 3 and setting.index("Justyna") != 7:
        continue
    if setting.index("Piotr") != 3 and setting.index("Piotr") != 7:
        continue
    #Weronika ma siedzieć obok Rafała
    if abs(setting.index("Weronika")-setting.index("Rafał"))!=1:
        continue
    #Magda i Kamil mają siedzieć jak najdalej od siebie, tj. po przekątnej
    if ((setting.index("Magda") == 0 and setting.index("Kamil") == 4) or (setting.index("Magda") == 4 and setting.index("Kamil") == 0) or (setting.index("Magda") == 2 and setting.index("Kamil") == 6) or (setting.index("Magda") == 6 and setting.index("Kamil") == 2))==0:
        continue

    #Weronika ma siedzieć naprzeciwko Karoliny
    if((setting.index("Weronika") == 0 and setting.index("Karolina") == 6) or (setting.index("Weronika") == 6 and setting.index("Karolina") == 0) or (setting.index("Weronika") == 1 and setting.index("Karolina") == 5) or (setting.index("Weronika") == 5 and setting.index("Karolina") == 1) or (setting.index("Weronika") == 2 and setting.index("Karolina") == 4) or (setting.index("Weronika") == 4 and setting.index("Karolina") == 2)) == 0:
        continue
    current_solution=dict(zip(places,setting))
    all_solutions.append(current_solution)

for solution in all_solutions:
    print(solution)

print(len(all_solutions))
