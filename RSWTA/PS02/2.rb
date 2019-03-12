print "Podaj zdanie"
zdanie = gets.chomp.reverse!
print "Podaj liczbe"
liczba = gets.chomp.to_i
liczba.times { puts zdanie }
