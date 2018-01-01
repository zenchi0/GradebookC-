/*GPA Calculator class for Project 2
*
* Author: Steve Gubenia
* For: CMIS 315
* Project 2
* Professor: Omar Zevallos
*/

//include class library
#include <iostream>
#include <string>
#include "GpaCalc.h"


//default constructor
GpaCalc::GpaCalc(){};


/*Calculates GPA based on total of numeric
*grade values divided by total number of
*grades entered.
*
*@param StudentRec student - Pass all values of
* 			student StudentRec class
*/

float GpaCalc::getGPA(float gradeTotal, int numGrades){

	float gpa = gradeTotal / numGrades;
	return gpa;
};


/*Method to print GPA
*@parm StudentRec student - pass all values
*				of StudentRec class
*@parm gpa - float value calculated by getGPA method
*/

void GpaCalc::printGPA(string name, float gpa){

	cout << name << "'s GPA: " << gpa << endl << endl;
};