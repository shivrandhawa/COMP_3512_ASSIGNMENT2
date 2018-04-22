//
//  Hospital.cpp
//  Assignment_2
//
//  Created by Shiv Randhawa on 2018-04-21.
//  Copyright © 2018 Shiv Randhawa. All rights reserved.
//

#include <queue>
#include "Header.h"
#include <algorithm>
#include <iostream>
#include <locale>
#include <ctype.h>

#include <fstream>

using namespace std;
bool compare1(PatientInfo& a, PatientInfo& b) {
	return (a.c_number < b.c_number);
}

void Hospital::displayMenu() {


	char selection = 'z';
	while (selection != 'g') {
		cout << "(a) Add new patient" << endl;
		cout << "(b) Get net patient" << endl;
		cout << "(c) Change patient category" << endl;
		cout << "(d) Save patient list" << endl;
		cout << "(e) Load patient list" << endl;
		cout << "(f) Print patient list" << endl;
		cout << "(g) Exit program" << endl;
		while (!isalpha(selection) || selection > 'g') {
			cout << "enter selection (a - g): ";
			cin >> selection;
			selection = tolower(selection);

		}
		if (selection == 'b') {
			qsort();

			selection = 'z';
		}


		if (selection == 'a') {
			add_patient();
			sort(vec1.begin(), vec1.end(), compare1);
			selection = 'z';
		}

	}
}


struct Compare {

	bool operator()(PatientInfo const &a, PatientInfo const&b) {
		return a.c_number < b.c_number;
	};
};

void Hospital::qsort() {
	//  sort(vec1.begin(),vec1.end(),Compare);
	//    if(vec1.at(0) < vec1.at(1)){
	//        cout<< "1 is bigger"<<endl;
	//    }
}


void Hospital::exitSystem() {

}
//constructor
Hospital::Hospital() {

	priority_queue<PatientInfo, vector<PatientInfo>, Compare> p_q;

	vector<PatientInfo> vec1;
	cout << "hospital constructor called" << endl;
}
void Hospital::add_patient() {

	string f;
	string m;
	string l;

	int yob = 0; //year of birth
	int mob = 0; //month of birth
	int dob = 0; //day of birth
	int health_num = 0; //personal health number;
	int time; //time addmitted format (24:00)
	string symptoms;
	int category_number;

	cout << "enter Last name:  ";
	cin >> l;
	cout << "enter First name:  ";
	cin >> f;
	cout << "enter Middle name:  ";
	cin >> m;

	while (yob <= 0 || yob >2020) {
		cout << "enter year of birth :  ";
		cin >> yob;
	}

	while (mob <= 0 || mob >12) {
		cout << "enter month of birth :  ";
		cin >> mob;
	}
	while (dob <= 0 || dob >32) {
		cout << "enter day of birth :  ";
		cin >> dob;
	}

	cout << "enter Personal Healthcare Number :  ";
	cin >> health_num;
	cout << "enter Time Addmited :  ";
	cin >> time;
	cout << "enter Category number :  ";
	cin >> category_number;

	PatientInfo pi = PatientInfo(f, m, l, yob, mob, dob, health_num, time, symptoms, category_number);

	vec1.push_back(PatientInfo(f, m, l, yob, mob, dob, health_num, time, symptoms, category_number));

	// p_q.push(pi);
	//p.push(PatientInfo(pi))
	cout << "add patient call ended" << endl;
}
