//Muhammad Ibad Saleem 19K-0220 Task 2 

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Employee
{
    protected:
    string fname;
    string lname;
    int ssn;
    double amount;
    Employee(){}

    public:
    Employee(string a, string b, int c)
    {
        fname = a;
        lname = b;
        ssn = c;
    }

    void setfname(string a) { fname = a; }
    void setlname(string b) { lname = b; }
    void setssn(int c) { ssn = c; }
    virtual double earning() = 0;
    virtual void print(){}
    virtual void calsalary(float a){}
};


class SalariedEmployee:public Employee{
    protected:
    static double salary;

public:
SalariedEmployee(string a,string b,int s)
{
    fname = a;
    lname = b;
    ssn = s;
}

void print()
{
    cout << "First Name: " << fname<<endl;
    cout << "Last Name: " << lname<<endl;
    cout << "Social Security Number: " << ssn << endl;
    cout << "Salary: " << earning()<<endl;
    }
    
    double earning(){

    amount = salary;
    return amount;
    
    }

};

double SalariedEmployee::salary = 350;

class HourlyEmployee:public Employee{
    
    //static double salary;
    static double hourlyrate;
    static double overtimerate;

public:

HourlyEmployee(string a,string b,int s)
{
    fname = a;
    lname = b;
    ssn = s;
}
void print()
{
    cout << "First Name: " << fname<<endl;
    cout << "Last Name: " << lname<<endl;
    cout << "Social Security Number: " << ssn<<endl;
    cout << "Salary: " << earning()<<endl;
}
void calsalary(int hour)
{
    amount = hourlyrate * hour;
    if (hour>40)
    {
        amount = amount + overtimerate * (hour - 40);
    }
}
double earning(){

    //amount = salary;
    return amount;
}
};

double HourlyEmployee::hourlyrate = 7.50;
double HourlyEmployee::overtimerate = 8.50;

class CommissionEmployee:public Employee{
    //float commission;
    static float grosssale;
    public:
    CommissionEmployee(string a,string b,int s)
{
    fname = a;
    lname = b;
    ssn = s;
}
    void calsalary(float sales)
    {
        amount = sales * (grosssale/100);
    }
    double earning()
    {
        return amount;
    }
    void print()
{
    cout << "First Name: " << fname<<endl;
    cout << "Last Name: " << lname<<endl;
    cout << "Social Security Number: " << ssn<<endl;
    cout << "Salary: " << earning()<<endl;
}
};
float CommissionEmployee::grosssale = 5;

class BaseCommission:public Employee{
    static double fsalary;
    static float commission;

public:
BaseCommission(string a,string b,int s)
{
    fname = a;
    lname = b;
    ssn = s;
}
    
    void calsalary(float sales)
    {
        amount = fsalary + sales * commission/100;
    }
void print()
{
    cout << "First Name: " << fname<<endl;
    cout << "Last Name: " << lname<<endl;
    cout << "Social Security Number: " << ssn<<endl;
    cout << "Salary: " << earning()<<endl;
}
    double earning()
    {
        return amount;
    }

};

double BaseCommission::fsalary = 1000;
float BaseCommission::commission = 10;

int main()
{
    system("cls");
    Employee *emp;
    HourlyEmployee H1("Ibad","Saleem",562);
    SalariedEmployee S1("Ali","Ahmed",653);
    BaseCommission B1("Faisal","Malik",879);
    CommissionEmployee C1("Nawaz","Ali",315);
    H1.calsalary(52.5);
    //S1.calsalary();
    B1.calsalary(1654.54);
    C1.calsalary(2556.55);
    emp = &H1;
    emp->print();
    cout << endl;
    emp = &S1;
    emp->print();
    cout << endl;
    emp = &B1;
    emp->print();
    cout << endl;
    emp = &C1;
    emp->print();
}