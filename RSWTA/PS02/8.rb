class Range
  def todown
    if block_given?
      self.reverse_each.detect {|i| yield(i)}
    else
      self.reverse_each.detect {|i| print i}
    end
  end
end

(3..5).todown {|i| print "hi#{i} "} #zwraca hi5 hi4 hi3
(2...7).todown 
