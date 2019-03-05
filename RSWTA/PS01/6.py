def wielkoscKlatki(dlugoscWeza):
	wynik=0.0
	if(dlugoscWeza//6>0):
		roznica = dlugoscWeza-6
		for i in range(roznica):
			wynik+=0.75
		for i in range(6):
			wynik+=0.5
	else:
		for i in range(dlugoscWeza):
			wynik+=0.5
	return wynik



m=input("Podaj dlugosc naganiacza: ")
klatka = wielkoscKlatki(int(m))
print("Twoj pytong potrzebuje %s m^2 "%(klatka))
