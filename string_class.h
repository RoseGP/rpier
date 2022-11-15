#pragma once

#ifndef string_class_h 
#define string_class_h 


#include <iostream>
#include <string>
#include "string_class.h"
using namespace std;


class string_class
{
 
private:
    string current_string;

 public:
     string_class();
     string_class(const string & );
     bool palindrome();
     bool equal(const string&, int&);
     void replace_all(const string& old_substring, const string& new_substring);//that accepts two string arguments, “ old_substring” and “new_substring”
     friend ostream& operator<<(ostream& out, string_class& org);
};
#endif // !string_class_h 