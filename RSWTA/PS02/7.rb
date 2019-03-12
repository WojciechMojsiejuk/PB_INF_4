class String
  def palindrome?
    self.upcase == self.upcase.reverse
  end
end

puts "Sprawdz palindrom: "
zdanie = gets.chomp
puts zdanie.palindrome?
