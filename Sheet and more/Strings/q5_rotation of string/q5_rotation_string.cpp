
# include <bits/stdc++.h>
using namespace std;

bool areRotations(string str1, string str2)
{
if (str1.length() != str2.length())
		return false;

string temp = str1 + str1;
return (temp.find(str2) != string::npos);
}
// https://cplusplus.com/reference/string/string/npos/
/*
String find is used to find the first occurrence of sub-string in the
 specified string being called upon. It returns the index of the first 
 occurrence of the substring in the string from given starting position.
  The default value of starting position is 0.

  Function parameters:

str : The sub-string to be searched.
s : The sub-string to be searched, given as C style string.
pos : The initial position from where the string search is to begin.
Function Return:

The function returns the index of the first occurrence of sub-string,
 if the sub-string is not found it returns string::npos
 (string::pos is static member with value as the highest possible 
 for the size_t data structure).


*/

int main()
{
string str1 = "AACD", str2 = "ACDA";
if (areRotations(str1, str2))
	printf("Strings are rotations of each other");
else
	printf("Strings are not rotations of each other");
return 0;
}
