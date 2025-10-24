#include<iostream>
using namespace std;

class Default_Arguement_Constructor
{
    string name;
    int age;
    float SGPA;

    public:
    Default_Arguement_Constructor() {}

    Default_Arguement_Constructor(int age, float SGPA=4.00, string name="RAM"): age(age), SGPA(SGPA)
    {
        this->name=name;
    }

    void display()
    {
        cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nSGPA: "<<SGPA<<endl;
    }

    ~Default_Arguement_Constructor()
    {
        cout<<"Destructor Invoked!";
    }
};

int main()
{
    Default_Arguement_Constructor d1;
    d1.display();

    Default_Arguement_Constructor d2(18);
    d2.display();

    Default_Arguement_Constructor d3(18, 3.96);
    d3.display();

    Default_Arguement_Constructor d4(17, 3.99, "Hari");
    d4.display();
}