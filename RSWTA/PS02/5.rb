puts "Przywitaj sie z babcia"
zdanie = gets.chomp
while zdanie!="DO WIDZENIA" 
 
  if zdanie != zdanie.upcase
    puts "Niedoslyszaca Babcia: CO! MOW GLOSNIEJ, SYNU!!!"
  
  else 
    rok = 1930+Random.rand(20)
    puts "Niedoslyszaca Babcia: NIE, NIE OD "+rok.to_s
  end
   puts "Ty: "
  zdanie = gets.chomp
  end

