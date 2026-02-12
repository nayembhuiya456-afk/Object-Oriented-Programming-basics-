#include <iostream>
using namespace std;


class Student
{
  public:
    string firstName;
    string lastName;
    double gpa;

  Student(string fn,string ln,double g)
  {
    firstName=fn;
    lastName=ln;
    gpa=g;
  }
   void PrintStudent()
    {
        cout << firstName << " " << lastName
             << " has a GPA of " << gpa << "."<<endl;
    }
  void ChangeGPA(double g)
  {
    gpa=g;
  }

};


int main(int argc, char** argv) {


  string firstName = argv[1];
  string lastName = argv[2];
  double gpa = stod(argv[3]);
  double newGPA = stod(argv[4]);

  Student s = Student(firstName, lastName, gpa);
  s.PrintStudent();
  s.ChangeGPA(newGPA);
  s.PrintStudent();


  return 0;

}
