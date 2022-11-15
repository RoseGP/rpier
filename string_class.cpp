#include <iostream>
#include <fstream>
#include <string>
#include "string_class.h"


using namespace std;






//************************************************************************************* 
//Name:  Defaul contructor
//Precondition:  The state of the object (private data) has not been initialized
//Postcondition:  The current string has been initialized to empty string
//Description: This is the default constructor will set the default contructor to empty string
// 
//*************************************************************************************
string_class::string_class()
{
	
	current_string = " ";
}

//************************************************************************************* 
//Name:explicit value contructor
//Precondition: the current string has not been set
//Postcondition: sets �current_string� equal to the argument that is passed to the explicit-value constructor when a string_class object is declared
//Description: to set the cuurent string
// 
//*************************************************************************************
string_class::string_class(const string& string1)
{
	current_string = string1;
}



// 
//*************************************************************************************
ostream& operator<<(ostream& out, string_class& org)
{
	out << org.current_string;
	return out;
}

//************************************************************************************* 
//Name: replace_all
//Precondition: the current string must be set
//Postcondition: The function will replace each occurrence of current  string
//Description: The function will replace each occurrence of current  string
// 
//*************************************************************************************

void string_class::replace_all(const string& old_substring, const string& new_substring)
{
	string temp = " ";
	
	for (int j = 0; j < current_string.length();)
	{
		for (int i = 0; i < old_substring.length();)
		{
			if (equal(old_substring, j))
			{
				temp += new_substring;
				j += old_substring.length();
				i = old_substring.length();
			}
			else
			{
				temp += current_string[j];
				i = old_substring.length();
				j++;
			}
		}
	}
  
	       current_string = temp;
	
}
//************************************************************************************* 
//Name:  palindrome
//Precondition: The function will replace each occurrence of current  string
//Postcondition:the function  will returns true if the current_string reads the same forward as it does backwards; otherwise it return false
//Description: the function will let the user know if its a palindrome
// 
//*************************************************************************************

bool  string_class:: palindrome()
{
	int i = 0;

	int j = current_string.length() - 1;

	//Run the loop to check whether the

	//current_string is a palindrome or not.

	while (i < j)

	{

		//If the current string is not a

		//palindrome then, return false.

		if (current_string[i] != current_string[j])

		{

			return false;

		}

		i++;

		j--;

	}

	//If the string is a

	//palindrome then, return true.

	return true;
}

//************************************************************************************* 
//Name: equal
//Precondition: the replace a
//Postcondition: the function will check for instances where the current and old string match.
//Description: the function wilol check if the string match
// 
//*************************************************************************************

bool string_class:: equal(const string& old_substring, int& i)
{
	int p = i;
	if (i > current_string.length())
	{
		cout << " incorrect position\n";
		return false;

	}
	if (current_string.length() >= old_substring.length())
	{
		for (int j = 0; j < old_substring.length(); j++, p++)
		{
			if (current_string[p] != old_substring[j])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}
