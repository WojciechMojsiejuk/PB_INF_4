def isPalindrome(word) : return word.lower() == word[::-1].lower()

slowo = input("Podaj slowo ktore chcesz sprawdzic: ")
print("Wynik sprawdzenia palindromu:" + str(isPalindrome(slowo)))