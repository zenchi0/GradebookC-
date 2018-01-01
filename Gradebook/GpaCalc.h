/*Define GPA Calculator class for Project 2
*
* Author: Steve Gubenia
* For: CMIS 315
* Project 2
* Professor: Omar Zevallos
*/

//library includes
#include <string>
#include "StudentRec.h"

using namespace std;

class GpaCalc{

public:
	float gpa;
	GpaCalc();
	float getGPA(float gradeTotal, int numGrades);
	void printGPA(string name, float gpa);
};