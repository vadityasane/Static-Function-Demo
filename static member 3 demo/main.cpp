#include <iostream>

using namespace std;

class Student
{
public:
    int rollno;
    string name;
    static int addminNo;

    Student(string n)
    {
        addminNo++;
        rollno = addminNo;
        name = n;
    }
    void display()
    {
        cout<<"name "<<name<<endl<<"Roll no "<<rollno<<endl;
    }
};
 int Student :: addminNo = 0;

int main()
{
    Student s1("Gijo");
    Student s2("Keshav");
    Student s3("Mohammod");
    Student s4("Mohammod");
    Student s5("Mohammod");
    Student s6("Mohammod");
    Student s7("Mohammod");
    Student s8("Mohammod");

    s1.display();
    s3.display();

    cout<<"Admission Number "<<Student::addminNo<<endl;



    return 0;
}
