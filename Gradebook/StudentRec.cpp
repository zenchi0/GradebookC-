/*StudentRec class for Project 2
*
* Author: Steve Gubenia
* For: CMIS 315
* Project 2
* Professor: Omar Zevallos
*/

// include class library.
#include <iostream>
#include <string>
#include "StudentRec.h"

using namespace std;

//default constructor
StudentRec::StudentRec(){};


//method to input student name
string StudentRec::getName(){

	string name; //variable for student name
	cout << "What is the student's name? ";
	cin >> name;
	return name;

};//end getName


//method to input student grades
int StudentRec::getNumGrades(string name){

	int numGrades; //total number letter grades user wishes to enter
	cout << "How many grades does " << name << " have? ";
	cin >> numGrades;
	cout << endl;
	return numGrades;

};//end getNumGrades

float StudentRec::getGrades(int numGrades){

	int gradeTotal = 0;

	for (int i = 0; i < numGrades; i++){
		char grade;
		cout << "Enter grade " << i + 1 << ": ";
		cin >> grade;
		grade = toupper(grade);
		cout << endl;

		switch (grade){
		case 'A':
			gradeTotal += 4.0;
			break;
		case 'B':
			gradeTotal += 3.0;
			break;
		case 'C':
			gradeTotal += 2.0;
			break;
		case 'D':
			gradeTotal += 1.0;
			break;
		case 'F':
			gradeTotal += 0;
			break;
		default:
			cout << "Error: invalid grade entered. Try again." << endl;
			i--;

		}//end switch

	}//end for

	return gradeTotal;
	cout << endl; //space for readability

};//end getGrades