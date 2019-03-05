zdanie = []
zdanie = input("Podaj zdanie do odwrocenia: ").split()
for slowo in reversed(zdanie):
	print(slowo[::-1])