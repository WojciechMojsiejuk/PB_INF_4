def persistance(number):
	temp = str(number)
	if(len(temp)==1):
		return 0
	else:
		temp2 = 1
		for i in temp:
			temp2 *= int(i)
		return 1 + persistance(temp2)

print(persistance(746))