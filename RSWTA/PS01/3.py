from math import sqrt
def odleglosc(x1,y1,x2,y2):
	return float(round(sqrt((x2-x1)**2+(y2-y1)**2),2))

Punkt1 = []; Punkt2=[]
Punkt1 = input("Podaj koordynaty pierwszego punktu ").split()
Punkt2 = input("Podaj koordynaty drugiego punktu ").split()
try:
	wynik = odleglosc(x1=float(Punkt1[0]),y1=float(Punkt1[1]),x2=float(Punkt2[0]),y2=float(Punkt2[1]))
	print("Odległośc między punktami to : " + str(wynik))
except:
	print("Wystąpił błąd")
