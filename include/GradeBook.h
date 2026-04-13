// Name: Ryan Griffiths
// Assignment#: A1
// Purpose: GradeBook class definition. This file presents GradeBook's public 
//		interface without revealing the implementations of GradeBook's member
//		functions, which are defined in GradeBook.cpp.
// File Name: GradeBook.h
// Course: CISP400 Fa24
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
   GradeBook( std::string, std::string ); // constructor initialize courseName and instructorName
   void setCourseName( std::string ); // sets the course name
   std::string getCourseName() const; // gets the course name
   void displayMessage() const; // displays a welcome message
   void setInstructorName( std::string ); // sets the instructor name
   std::string getInstructorName() const; // gets the instructor name 
private:
   std::string course_name; // course name for this GradeBook
   std::string instructor_name; // course instructor's name
}; // end class GradeBook  