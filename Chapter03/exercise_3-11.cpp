/*
 * =====================================================================================
 *
 *       Filename:  exercise_3-11.cpp
 *
 *     Description: 3.11 (Modifying Class GradeBook)
 *			  a) Include a second string data member that represents the course instructor’s name
 *			  b) Provide a set function to change the instructor’s name and a get function to retrieve it.
 *			  c) Modify the constructor to specify course name and instructor name parameters.
 *			  d) Modify function displayMessage to output the welcome message and course name,
 *			     then the string "This course is presented by: " followed by the instructor’s name.
 *	
 *
 *        Version:  1.0
 *        Created:  11/05/18 00:28:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Nothing can have value without being an object of utility.
 *   —Karl Marx
 * =====================================================================================
 *
 */
#include<iostream>
#include <string>

using namespace std;

class GradeBook{
public:

	explicit GradeBook( string ,string );

	void setCourseName( string );
	void setcourseInstructor( string );

	string getCourseName() const;
	string getcourseInstructor() const;

	void displayMessage() const; 

private:
	string courseName;
	string courseInstructor;
}; 

	GradeBook::GradeBook( string name , string iname): courseName( name ),courseInstructor(iname){}

	void GradeBook::setCourseName( string name ){ courseName = name;  }
	void GradeBook::setcourseInstructor( string cname ){ courseInstructor = cname;  }

	string GradeBook::getCourseName() const{ return courseName; }
	string GradeBook::getcourseInstructor() const{ return courseInstructor; }

	void GradeBook::displayMessage() const{  
		cout << "Welcome to the grade book for -> " << getCourseName() << "!\n" 
			  <<"This course is presented by: "<<getcourseInstructor()<<endl;
	}




int main(){

	GradeBook gradeBook1( "CS101 Introduction to C++ Programming","Gorkem Okur");
	GradeBook gradeBook2( "CS102 Data Structures in C++" , "Gorkem Okur");

	gradeBook1.displayMessage();
	cout<<"-----------------------------------------------------\n";
	gradeBook2.displayMessage();

return 0;
}
