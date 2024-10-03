#include <iostream>
#include <string>
using namespace std;

void lowerCasePalindrome(string& Palindrome, int LengthPalindrome) {
	for (int i = 0; i <= LengthPalindrome; i++)
		Palindrome[i] = tolower(Palindrome[i]);
}
bool palindromeCheck(string Palindrome, int LengthPalindrome) {
	for (int i = 0; i <= LengthPalindrome; i++) {

		if (Palindrome[i] != Palindrome[LengthPalindrome - i])
			return false;
	}
	return true;
}

int main()
{
	//User will select their word

	cout << "This program checks if a selected word is spelt the same forwards and backwards, also known as a palindrome!" << endl << endl;
	string Palindrome;
	cout << "Input a word : ";

	getline(cin, Palindrome);	//getline() allows the user to use spaces(" ") without error.


	 //when finding the length of the word, we subtract by one so our array has an easier time, since arrays start at 0.
	//Having the length of the users word will come in handy when determining if word is palindrome
	int LengthPalindrome = Palindrome.length()-1;
	
	string originalPalindrome = Palindrome;  //We need a copy of the Original Word so the user doesn't see their word change.

	lowerCasePalindrome(Palindrome, LengthPalindrome);    //A function used to make the users word lowercase

	if (palindromeCheck(Palindrome, LengthPalindrome) == true) {
		cout << originalPalindrome << " is a palindrome" << endl;
		return 0;
	}
	
	else if(palindromeCheck(Palindrome, LengthPalindrome) == false) {
		cout << originalPalindrome << " is not a palindrome";
		return 0;
	}
	
}
