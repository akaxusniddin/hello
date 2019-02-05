#include<iostream>
#include<string>

using namespace std;

class Employee{
	string Employee_ID;
	string Employee_Name;
	int No_of_Hours_Work;
	int Rate_Per_Hour;

	void setEmployee_ID(string a){
		cout << "ID:";
		cin >> a;
		Employee_ID = a;
	}

	void getEmployee_ID(){
		cout << "ID: " << Employee_ID << endl;
	}

	void setEmployee_Name(string a){
		cout << "Name:";
		cin >> a;
		Employee_Name = a;
	}

	void getEmployee_ID(){
		cout << "Name: " << Employee_Name << endl;
	}

	void setNo_of_Hours_Work(int a){
		cout << "No_of_Hours_Work:";
		cin >> a;
		No_of_Hours_Work = a;
	}

	int getNo_of_Hours_Work(){
		return No_of_Hours_Work;
	}


	void setRate_Per_Hour(int a){
		cout << "Rate_Per_Hour:";
		cin >> a;
		Rate_Per_Hour = a;
	}

	int getRate_Per_Hour(){
		return Rate_Per_Hour;
	}

	int getTotal_Monthly_Salary(){
		return No_of_Hours_Work*Rate_Per_Hour;
	}
};