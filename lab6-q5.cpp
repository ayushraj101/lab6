#include<iostream>
using namespace std;
//5.Write a program that includes the above three (2,3,4) functions.

int f3(int a, int b){
	int sum=(a+b);
	return sum;
                        }
int f2(int a, int b ){
	int max;
	if (a > b){
		(max = a);
			   }
		else max = b;
			   
		return max;
					}
int f1(int a, int b ){
	int min;
	if (a < b){
		(min = a);
			   }
		else min = a;
			   
		return min;
					}


// Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
int main(){
	cout << "Enter two varriable : " << endl;
	int a, b, x, y;
	cin >> a >> b;
	cout << "Press 1 to find the min between them " <<endl;
	cout<< "Press 2 to find max between them " <<endl;
	cout<< "Press 3 find the sum of two number "<<endl;
	cin >>x;
	if (x==1){
		cout<<  f1(a, b);
		 }
	if (x==2){
		cout<<f2(a, b);
		 }
	if (x==3){
		cout<< f3(a, b);
		 }
	  }
