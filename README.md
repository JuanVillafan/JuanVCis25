# Project1CIS25
Author: 
Juan Villafan

Description:

Palindrome : A word that is spelled the same forwards and backwards.

I will be working on a palindrome checker, where the user will input a word, and the program will check and output
whether the word is a palindrome or not. This program will not be case sensitive, meaning the program will still work
even if the word looks like, "taCocAt" , it will still output true.

__________________________
Edge Cases:

i used the getLine(cin, __) function to make sure that if the user would input a phrase like "Taco ocat", then there would be no error and the code would work as normal. 

As I explained in my description, I allowed for the string to include upercase characters, and still be read as a palindrome. I made sure i had a function to make the input word lowercase, causing no extra problems. "taCocAT" would be turned into "tacocat" and the user would be told that their word is still a palindrome. I made sure to save the original input into another variable to make the change hidden inside the code.

I was able to turn our string into an array, without ruining the string, making it much easier to go letter by letter.
