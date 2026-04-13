// Name: Ryan Griffiths
// Assignment#: A1 
// Purpose: GradeBook member-function definitions. This file contains
//      implementations of the member functions prototyped in GradeBook.h.
// File Name: GradeBook.cpp
// Course: CISP400 Fa24
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName with two strings supplied as arguments
GradeBook::GradeBook( string course_name, string instructor_name )
   : course_name( course_name ), instructor_name ( instructor_name ) // member initializer to initialize course name and instructor name 
{                                                                      
    cout << "\n\n *Create a GradeBook Object*\n" << endl; // initial output 
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   course_name = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
   return course_name; // return object's courseName
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
   // call getCourseName to get the courseName
   cout << "  Welcome to the grade book for\n   " << getCourseName() 
      << "!" << endl;
   cout << "  This course is presented by: " << getInstructorName() 
      << "\n" << endl;
} // end function displayMessage

// sets the instructors name for the course
void GradeBook::setInstructorName(string new_name)
{
    instructor_name = new_name; // store the updated instructor name
} // end function setInstructorName

string GradeBook::getInstructorName() const
{
    return instructor_name; // return object's instructorName
} // end function getInstructorName