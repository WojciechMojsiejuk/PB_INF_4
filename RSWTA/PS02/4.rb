print "Podaj maksymalna wartosc: "
liczba = gets.chomp.to_i
potegadwojki = 1
i=0
while potegadwojki<liczba do
  potegadwojki=potegadwojki*2
  i=i+1
end
print "2^"+(i-1).to_s+" = " + (potegadwojki/2).to_s + " jest najwyzsza potega dwojki mniejsza niz " + liczba.to_s
