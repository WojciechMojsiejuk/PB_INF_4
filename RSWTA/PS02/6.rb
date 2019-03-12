class String
  def url_protocol?
    if /[a-z]{3,5}:\/\//.match(self)
      return true
    else
      return false
    end
  end
end

puts "Podaj url: "
zdanie = gets.chomp
puts zdanie.url_protocol?
