#include<iostream>
#include <string>
using namespace std;

class AbstractEmployee {
    virtual void Askforpromotion() = 0;
};

class Empolyee {
private:
    string Name;
    string Company;
    int Age;

public:
    Empolyee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    string getName() {
        return Name;
    }

    int getAge() {
        return Age;
    }

    virtual void Work() {   
        cout << Name << " is checking emails..." << endl;
    }

    void Askforpromotion() {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " sorry no promotion for you!" << endl;
    }
};

class Developer : public Empolyee {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string fpl)
        : Empolyee(name, company, age)
    {
        FavProgrammingLanguage = fpl;
    }

    void Fixbug() {
        cout << getName() << " Fix bug using "
            << FavProgrammingLanguage << endl;
    }

    void Work() {   
        cout << getName() << " is writing "
            << FavProgrammingLanguage << " code" << endl;
    }
};

class Teacher : public Empolyee {
public:
    string Subject;

    Teacher(string name, string company, int age, string subject)
   : Empolyee(name, company, age)
    {
        Subject = subject;
    }

    void PrepareLesson() {
        cout << getName() << " is preparing "
            << Subject << " lesson" << endl;
    }

    void Work() {   
        cout << getName() << " is teaching "
            << Subject << endl;
    }
};

int main() {

    Developer d("Ali", "YouTube", 23, "C++");
    Teacher t("Ahmed", "School", 35, "Math");

    Empolyee* e1 = &d;
    Empolyee* e2 = &t;

    e1->Work();
    e2->Work();

}