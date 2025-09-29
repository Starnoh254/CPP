// #include <iostream>
// using std::cout;
// using std::endl;

// Day 2 , we are going to implement Interfaces

#include <string>
using std::string;

class GradeBook
{

public:
    GradeBook(string);

    void setCourseName(string);

    string getCourseName();

    void displayMessage();

private:
    string courseName;
};