/*Project 2 Grade book program
*
* Author: Steve Gubenia
* For: CMIS 315
* Project 2
* Professor: Omar Zevallos
*/

// include class library.
#include <iostream>
#include <string>
#include "Menu.h"
#include "StudentRec.h"
#include "GpaCalc.h"

using namespace std;


//Main program execution
int main(){

	//Create an instance of menu
	Menu* menu = new Menu();

	//Print program description
	menu->gradeBookDescription();

	char choice;//variable to store user choice
	cout << "Would you like to run the program (Y/N)? ";
	cin >> choice;
	choice = toupper(choice);

	if (choice == 'N'){

		//Exit cleanly upon user choice
		cout << "Thank you.  Bye!";
		return 0;

		}//end if

	while (choice != 'N' && choice != 'Y'){
		//Prompt user for valid choice
		cout << "Invalid choice.  You must enter (Y/N).  Try again." << endl;
		cout << "Would you like to run the program (Y/N)? ";
		cin >> choice;
		choice = toupper(choice);
		cout << endl;

	}//end else

	//Repeat until user chooses to exit
	while (choice == 'Y'){

		//Create instance of StudentRec
		StudentRec* student = new StudentRec();

		//Get student name
		string name = student->getName();

		//Get number of grades
		int numGrades = student->getNumGrades(name);

		//Create instance of GpaCalc
		GpaCalc* gpa = new GpaCalc();

		//Declare variable to hold grades total
		float gradeTotal = student->getGrades(numGrades);

		//Calculate GPA
		float g = gpa->getGPA(gradeTotal, numGrades);

		//Print GPA
		gpa->printGPA(name, g);

		//Prompt user for more input
		cout << "Do you want to enter data for another student (Y/N)? ";
		cin >> choice;
		choice = toupper(choice);
		cout << endl;

	}//end while


}//end main