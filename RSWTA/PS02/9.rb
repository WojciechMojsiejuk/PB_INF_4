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
    @wzrost = @wzrost + Random.rand(11- @wzrost) 
  end

end
orange_tree = OrangeTree.new
puts orange_tree
