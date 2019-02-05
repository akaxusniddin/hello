#include<iostream>
#include<string>
#include"employee.h"
using namespace std;

int main(){
	Employee e1;
	string a;
	double a1 = 0;
	int n, i = 0;
	string d;

	cout << "///--------------------------------------------------------------///" << endl << endl;

	do{
		cout << "Enter 1 - to set employee details, \nEnter 2 - to get employee details, \nEnter 3 - to display monthly salary details of employee." << endl;
		cin >> n;

		switch (n){
		case 1:{
				   e1.setEmployee_ID();
		}
		}
	} while (d != "no");

	system("pause");
	return 0;
}