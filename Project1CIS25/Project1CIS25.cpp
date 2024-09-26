#include <iostream>
#include <string>
using namespace std;




int main()
{
	//User will select their word

	cout << "This program checks if a selected word is spelt the same forwards and backwards, also known as a palindrome!" << endl << endl;
	string Palindrome;
	cout << "Input a word : ";

	getline(cin, Palindrome);	//getline() allows the user to use spaces(" ") without error.


	

	int LengthPalindrome = Palindrome.length()-1; //when finding the length of the word, we subtract by one so our array has an easier time, since arrays start at 0.
	
	string originalPalindrome = Palindrome;  //We need a copy of the Original Word so the user doesn't see their word change.
	for (int i = 0; i <= LengthPalindrome; i++) {
		Palindrome[i] = tolower(Palindrome[i]);
	}
	
	
}
