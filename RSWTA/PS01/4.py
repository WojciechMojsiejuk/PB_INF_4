def dzieleniePizzy(liczbaGosci):
	liczbaKawalkow=32
	return liczbaKawalkow//liczbaGosci,liczbaKawalkow%liczbaGosci,liczbaKawalkow/liczbaGosci

ilegosci = input("Podaj liczbe gosci: ")
wynik=[]
wynik = dzieleniePizzy(int(ilegosci))
print("Number of guests: %s"%(ilegosci))
print("Option 1: %s slices each, %s left over" % (wynik[0],wynik[1]))
print("Option 2: %s slices each" % (wynik[2]))