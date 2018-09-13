//UpperCase and LowerCase
#include<iostream>
using namespace std;


//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.

char toUpper(char x) {
	int a = x;
	a = a - 32;
	return a;
	}
//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
char toLower(char x){
	int a = x;
	a = a + 32;
	return a;
	}
//Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
int main(){
	cout << "Enter the character: " << endl;
	char a, z;
	cin>>z;
	(int) z;
	if (z<123 and z> 96){
	 a = toUpper(z);
	}
	else a = toLower(z);
	cout<<"The case changed char is: "<< a<< endl;
	return 0;
 }
	
