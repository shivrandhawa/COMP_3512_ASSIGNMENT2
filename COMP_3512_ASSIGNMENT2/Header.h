
#pragma once
#include <iostream>
#include <queue>
#include <vector>


using namespace std;
class PatientInfo {
public:
	string first;
	string middle;
	string last;
	int health_num;
	int DOB;
	int day;
	int month;
	int year;
	int time;
	int c_number;
	string symp; //symptoms
	PatientInfo() {
		cout << "patientinfo consturctor" << endl;;
	}
	bool operator<(const PatientInfo& other) {
		return c_number < other.c_number;
	}

	PatientInfo(
		string f,
		string m,
		string l,
		int yob,
		int mob,
		int dob,
		int h_num,
		int time_admitted,
		string symps,
		int category_number
	) {
		first = f;
		middle = m;
		last = l;
		year = yob;
		month = mob;
		day = dob;
		health_num = h_num;
		time = time_admitted;
		symp = symps;
		c_number = category_number;

		cout << " megaconstructor called" << endl;;
	}

};
class Hospital {

public:
	bool exit = false;
	Hospital();
	vector<PatientInfo> vec1;
	priority_queue<PatientInfo> p_q;

	void add_patient();
	void getNextPatient();
	void changeCategory();
	void savePatientList();
	void loadPaitentList();
	void printPatientList();
	void exitProgram();
	void displayMenu();
	void exitSystem();
	void qsort();

};


class Name :public PatientInfo {
public:

	Name(string _first, string _mid, string _last) {
		first = _first;
		middle = "asdasd";
		last = _last;
	}
	string first;
	string middle;
	string last;
	string getName() {
		return "shiv";
	}
};


class Time {};



class Date :public PatientInfo {
private:
	//date of birth
	int day;
	int month;
	int year;
public:
	Date();

};








