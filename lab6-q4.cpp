#include<iostream>
using namespace std;
//MINIMUM 
//(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. 
int f(int x, int y ){
	int min;
	if (x < y){
		(min = x);
			   }
		else min = x;
			   
		return min;
					}
//(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
void g(int x1, int y1, int &z1){
	if (x1 < y1 ){
		z1 = x1;
				 }
		else z1 = y1;		   }



//The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.

int main (){
	int x, y, z, q;
	cout << "Give me the two number "<< endl;
	cin >> x >> y;
	z=f(x, y);
	cout<< z<<" is the smaller nuber, by value. "<< endl;
	g(x, y, q);
	cout << q << " is the larger number, by refrence" << endl;
	return 0;
			} 
	
