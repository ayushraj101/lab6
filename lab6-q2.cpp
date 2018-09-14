#include<iostream>
using namespace std;
//Q.2-SUM 
//(By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum. 
int func1(int a, int b){
	int sum=(a+b);
	return sum;
                        }

//(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
void func2(int a, int b, int &c ){
	c= a + b;
								 }
//The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
int main () {
	int a, b, y, g;
	cout <<"Can you enter two numbers" << endl;
	cin >> a >> b;
	y=func1(a, b); //y=f(x)
	cout << y << endl ;
	func2 (a, b, g);
	cout << g << endl; 
	return 0;			 
			}
