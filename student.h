#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	string Student_ID;
	string Student_Name;
	double OOP2_Score;
	double Maths_Score;
	double English_Score;

public:
	void setStudent_ID(string a) {
		cout << "Please Enter Student's ID: ";
		cin >> a;
		Student_ID = a;
	}

	void getStudent_ID() {
		cout << "Student's ID: " << Student_ID << endl;
	}

	void setStudent_Name(string a) {
		cout << "Please Enter Student's Name: ";
		cin >> a;
		Student_Name = a;
	}

	void getStudent_Name() {
		cout << "Student's Name: " << Student_Name << endl;
	}

	void setOOP2_Score(double a) {
		cout << "Please Enter OOP2_Score: ";
		cin >> a;
		OOP2_Score = a;
	}

	double getOOP2_Score() {
		return OOP2_Score;
	}

	void setMaths_Score(double a) {
		cout << "Please Enter Math_Score: ";
		cin >> a;
		Maths_Score = a;
	}

	double getMaths_Score() {
		return Maths_Score;
	}

	void setEnglish_Score(double a) {
		cout << "Please Enter English_Score: ";
		cin >> a;
		English_Score = a;
	}

	double getEnglish_Score() {
		return English_Score;
	}

	double getAverage_Score() {
		return  (OOP2_Score + Maths_Score + English_Score) / 3;
	}

	double getTotal_Score() {
		return  (OOP2_Score + Maths_Score + English_Score);
	}
};
