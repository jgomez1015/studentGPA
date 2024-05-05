// Student.h
// jason g 5/5
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int IdNumber;
    double gpa;
public:
    // constructors
    Student();  // default constructor
    Student(string n, int id, double g);

    //mutators and accessors
    void setName(string n);
    string getName();
    void setIdNumber(int id);
    int  getIdNumber();
    void setGpa(double g);
    double getGpa();
};
