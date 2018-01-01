/*Define StudentRec Class
*
* Author: Steve Gubenia
* For: CMIS 315
* Project 2
* Professor: Omar Zevallos
*/

//library includes
#ifndef StudentRec_HEADER
#define StudentRec_HEADER
#include <string>

using namespace std;

class StudentRec{

public:
		string name;
		int numGrades;
		float gradeTotal;
		StudentRec();
		string getName();
		int getNumGrades(string name);
		float getGrades(int numGrades);
};

#endif