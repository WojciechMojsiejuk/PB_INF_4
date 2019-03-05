l = [3, 5, 6, 3, 6, 4, 5, 3, 8, 3]
temp = set()
for x in l:
    temp.add(x)
wynik = {}
for elem in temp:
	wynik[elem]=l.count(elem)
print(wynik)