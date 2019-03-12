class OrangeTree
attr_accessor :wzrost
attr_accessor :wiek
attr_accessor :liczbaowocow

  def initialize ()
    @wzrost = 0
    @wiek = 0
    @liczbaowocow = 0
    end
  def oneYearPasses
    @wiek=@wiek+1
    if (@wzrost + Random.rand(1.0).round(1))<10
      @wzrost = (@wzrost + Random.rand(1.0)).round(1)
    else
      @wzrost=10
    end
    if @wiek>5
      @liczbaowocow=@liczbaowocow+@wiek-5
    end 
  end
  def to_s
    if @wiek>50
      "Drzewo pomaranczowe - drzewo jest martwe"
    else
      "Drzewo pomaranczowe - wiek: "+ @wiek.to_s + ", wysokosc: "+@wzrost.to_s+" m"
    end
  end
  def countTheOranges
    puts "Na drzewie wisi "+@liczbaowocow.to_s+" pomarancze" 
  end
  def pickAnOrange
    if @liczbaowocow<=0
      puts"Nie ma juz owocow do zerwania w tym roku"
    else
      puts "Pomarancza jest pyszna"
      @liczbaowocow=@liczbaowocow-1
    end
  end
end
orange_tree = OrangeTree.new
6.times {orange_tree.oneYearPasses}
puts orange_tree
puts orange_tree.countTheOranges
2.times{orange_tree.pickAnOrange}
puts orange_tree.liczbaowocow
orange_tree.countTheOranges
