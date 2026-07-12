#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to convert uppercase letters A-Z to Morse code
string charToMorse(char c)
{
//Translates lowercase letters to uppercase
	c = toupper(c);
	
	switch (c)
	{
		case'A':return".-";
		case'B':return"-...";
		case'C':return"-.-.";
		case'D':return"-..";
		case'E':return".";
		case'F':return"..-.";
		case'G':return"--.";
		case'H':return"....";
		case'I':return"..";
		case'J':return".---";
		case'K':return"-.-";
		case'L':return".-..";
		case'M':return"--";
		case'N':return"-.";
		case'O':return"---";
		case'P':return".--.";
		case'Q':return"--.-";
		case'R':return".-.";
		case'S':return"...";
		case'T':return"-";
		case'U':return"..-";
		case'V':return"...-";
		case'W':return"-..-";
		case'Y':return"-.--";
		case'Z':return"--..";
		
		default: return""; 
	}
}

int main()
{
	string userMessage;
	
	cout<<"Enter a message:";
	getline(cin, userMessage);
	
	cout<<"\n-- Full Morse Code Message: --\n\n";
	
//Process each character
	for(char c : userMessage)
	{
//Ignore all numbers
		if(isdigit(c))
		{
			continue;
		}
		
//Ignore punctuation and other symbols(except spaces)
		if(!isalpha(c) && c != ' ')
	{
		continue;
	}
		
		string morse = charToMorse(c);
		
		if(!morse.empty())
		{
			if(c == ' ')
			{ 
			  cout <<"[SPACE]"<<endl;
			  continue;
			 }
			 
			 string morse = charToMorse(c);
		     
		     if(!morse.empty())
		     { 	 
			   cout<<(char)toupper(c)<<":"<<morse<<endl;
		}
	}
}
	return 0;
}
