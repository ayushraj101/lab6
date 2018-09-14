#include<iostream>
using namespace std;
//Tax Rate Calculation using Functions 

//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
void func1(double &unitCst, double &units, double &taxRt){
	 cin >> unitCst>>units>> taxRt;
 	}

//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
void func2(double &unitCst,double &units, double &taxRt, double &salesTx, double &totDue){
	salesTx = (unitCst*units*taxRt)/100;
	totDue = salesTx +(unitCst * units); 	
	}
//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
void func3(double &unitCst,double &units,double &taxRt,double &salesTx,double &totDue){
	cout << "The bill you enterd is : "<<endl<<"bill units :"<< unitCst<<endl<<"cost per unit :"<< units<<endl<<"tax rate per unit "<< taxRt<< endl<<"sales tax is: "<< endl <<"total due is :" <<totDue<< endl;	
	}
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
 int main(){
	double unitCst, units, taxRt, salesTx, totDue;
	cout<< "enter the bill: ";
	cin >> unitCst;
	cout<< "enter the unit cost :";
	cin >> units;
	cout<< "enter the tax rate (%) :";
	cin >> taxRt;
	func1( unitCst, units, taxRt);
	func2( unitCst,units, taxRt, salesTx, totDue);
	func3( unitCst,units, taxRt,salesTx,totDue);
	return 0;
	}

