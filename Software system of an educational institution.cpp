#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string gender;
    int id;

public:
    void setPerson(string n, int a, string g, int i) {
        name = n;
        age = a;
        gender = g;
        id = i;
    }

    void inputPerson(string role) {
        cout << "\n====== Enter " << role << " Details ======\n";

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Gender: ";
        cin >> gender;

        cout << "Enter ID: ";
        cin >> id;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "ID: " << id << endl;
    }
};

class Student : public Person {
private:
    string program;
    int sem;
    float cgpa;

public:
    void inputStudent() {
        inputPerson("Student");

        cout << "Enter Program: ";
        cin >> program;

        cout << "Enter Semester: ";
        cin >> sem;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayStudent() {
        displayPerson();

        cout << "Program: " << program << endl;
        cout << "Semester: " << sem << endl;
        cout << "CGPA: " << cgpa << endl;

        if (cgpa >= 3.5)
            cout << "Scholarship Eligible" << endl;
    }
};

class Employee : public Person {
private:
    string department;
    float salary;

public:
    void inputEmployee(string role) {
        inputPerson(role);

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee() {
        displayPerson();

        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Teacher : public Employee {
private:
    string subject;
    int experience;

public:
    void inputTeacher(string role = "Teacher") {
        inputEmployee(role);

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Experience: ";
        cin >> experience;
    }

    void displayTeacher() {
        displayEmployee();

        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << endl;

        if (experience >= 10)
            cout << "Senior Teacher" << endl;
    }
};

class Coordinator : public Teacher {
private:
    string programManaged;
    int classesManaged;

public:
    void inputCoordinator() {
        inputTeacher("Coordinator");

        cout << "Enter Program Managed: ";
        cin >> programManaged;

        cout << "Enter Classes Managed: ";
        cin >> classesManaged;
    }

    void displayCoordinator() {
        displayTeacher();

        cout << "Program Managed: " << programManaged << endl;
        cout << "Classes Managed: " << classesManaged << endl;
    }
};

class Researcher {
private:
    string researchArea;
    int publications;

public:
    void inputResearcher() {
        cout << "\n====== Enter Researcher Details ======\n";

        cout << "Enter Research Area: ";
        cin >> researchArea;

        cout << "Enter Publications: ";
        cin >> publications;
    }

    void displayResearcher() {
        cout << "Research Area: " << researchArea << endl;
        cout << "Publications: " << publications << endl;
    }
};

class TeachingAssistant : public Student, public Researcher {
private:
    int labHours;
    string course;

public:
    void inputTA() {
        inputStudent();
        inputResearcher();

        cout << "Enter Lab Hours: ";
        cin >> labHours;

        cout << "Enter Assigned Course: ";
        cin >> course;
    }

    void displayTA() {
        displayStudent();
        displayResearcher();

        cout << "Lab Hours: " << labHours << endl;
        cout << "Course: " << course << endl;

        if (labHours > 10)
            cout << "Heavy Workload" << endl;
    }
};

class AdminStaff : public Employee {
private:
    int officeNumber;
    string designation;

public:
    void inputAdminStaff() {
        inputEmployee("Admin Staff");

        cout << "Enter Office Number: ";
        cin >> officeNumber;

        cout << "Enter Designation: ";
        cin >> designation;
    }

    void displayAdminStaff() {
        displayEmployee();

        cout << "Office Number: " << officeNumber << endl;
        cout << "Designation: " << designation << endl;
    }
};

class LabAssistant : public Employee {
private:
    string labName;
    string shift;

public:
    void inputLabAssistant() {
        inputEmployee("Lab Assistant");

        cout << "Enter Lab Name: ";
        cin >> labName;

        cout << "Enter Shift Timing: ";
        cin >> shift;
    }

    void displayLabAssistant() {
        displayEmployee();

        cout << "Lab Name: " << labName << endl;
        cout << "Shift: " << shift << endl;
    }
};

class AccountOfficer : public Employee {
private:
    string accountSection;
    float bonus;

public:
    void inputAccountOfficer() {
        inputEmployee("Account Officer");

        cout << "Enter Account Section: ";
        cin >> accountSection;

        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void displayAccountOfficer() {
        displayEmployee();

        cout << "Account Section: " << accountSection << endl;
        cout << "Bonus: " << bonus << endl;
    }
};

int main() {

    Student s;
    s.inputStudent();
    s.displayStudent();

    Teacher t;
    t.inputTeacher();
    t.displayTeacher();

    Coordinator c;
    c.inputCoordinator();
    c.displayCoordinator();

    TeachingAssistant ta;
    ta.inputTA();
    ta.displayTA();

    AdminStaff a;
    a.inputAdminStaff();
    a.displayAdminStaff();

    LabAssistant l;
    l.inputLabAssistant();
    l.displayLabAssistant();

    AccountOfficer ac;
    ac.inputAccountOfficer();
    ac.displayAccountOfficer();

    return 0;
}