
#pragma once
#include <iostream>
#include <queue>
#include <vector>


using namespace std;

class Hospital {

public:
	Hospital();
	void add_patient();
	void getNextPatient();
	void changeCategory();
	void savePatientList();
	void loadPaitentList();
	void printPatientList();
	void exitProgram();

};


class PatientInfo {
public:
	vector<PatientInfo> vec1;

	string first;
	string middle;
	string last;
	int health_num;
	int DOB;
	int day;
	int month;
	int year;
	int time;
	PatientInfo() {
		cout << "patientinfo consturctor" << endl;;
	}


};


class Name :public PatientInfo {
public:
	vector<PatientInfo> vec1;

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







