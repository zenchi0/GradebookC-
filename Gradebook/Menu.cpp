/*Menu class for Project 2
*
* Author: Steve Gubenia
* For: CMIS 315
* Project 2
* Professor: Omar Zevallos
*/


//include class library
#include <iostream>
#include <string>
#include "Menu.h"
#include <ctype.h>


using namespace std;

//default declaration
Menu::Menu(){};


//Prints description of gradebook function
void Menu::gradeBookDescription(){
	cout << "*********************************************************" << endl;
	cout << "*           Welcome to the gradebook program!           *" << endl;
	cout << "* This program allows you to enter student names and    *" << endl;
	cout << "* then choose the number of letter grades to be entered.*" << endl;
	cout << "* After all letter grades are entered for a student,    *" << endl;
	cout << "* the program will calculate the students GPA based on  *" << endl;
	cout << "* the following numerical values for letter grades.     *" << endl;
	cout << "*********************************************************" << endl;
	cout << endl;
};
