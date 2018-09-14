#include<iostream>
using namespace std;

//6.Sum of even and odd
//Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop) create a user-defined function called sumEvenNumbers(). Use call-by-value

int sumEvenNumbers(int x, int y){
	int a, sum;
	if (x%2==0){
		a=x;
	}
	else 
	a=x+1; 
	for (; a<y; a+=2){
		sum=sum+a;
	}
	
	return sum; 			
}

//Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop);    create a user-defined function called sumOddNumbers(). Use call-by-value

int sumOddNumbers(int x, int y){
	int a, sum;
	if (x%2!=0){
		a=x;
	}
	else a=x+1;
	for (; a<y; a+=2){
		sum= sum+a;
	}
	return sum; 
}

//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value.
 
int sumSquareOddNumbers(int x, int y){
	int a, sumsq;
	if (x%2!=0){
		a=x;
		   }
	else a=x+1;
	while (a<y){
		
		 	sumsq = sumsq + (a*a);
			a=a+2;
		   }
	
	return sumsq;
}
//Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
int sumSquareEvenNumbers(int x, int y){
	int a, sumsq;
	if (x%2==0){
		a=x;
		   }
	else a=x+1;
	while (a<y){
		a=a+2;
		 sumsq= sumsq + (a*a);
		
		   }
	
	return sumsq;
		}
//Write a main program.

int main(){
	cout << "Enter two numbers :"<< endl;
	int x, y;
	cin >> x >> y; 
//Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
	
	int sumEven= sumEvenNumbers(x, y);
//Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
	int sumOdd= sumOddNumbers(x, y);
//Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
	int sumSquareEven = sumSquareEvenNumbers(x, y);
//Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
	int sumSquareOdd = sumSquareOddNumbers(x, y);
//Then display the values
	cout << "The sum of all even numbers between the given numbers is :" << sumEven<<endl;
	cout <<"The sum of all odd numbers between the given numbers is :" << sumOdd<< endl;
	cout<<"The sum of square of all even numbers between the given numbers is :" << sumSquareEven<<endl;
	cout<<"The sum of square of all odd numbers between the given numbers is :" << sumSquareOdd <<endl;
	return 0;
	 }

