//Muhammad Ibad Saleem 19K-0220 Task 1 


#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


class Person{
    protected:
    string name;

    public:
    
    virtual void getData() = 0;
    virtual bool isOutstanding() = 0;

    void setname(string a)
    {
        name = a;
    }
    string getname()
    {
        return name;
    }


};

class Student:public Person{
    protected:
    float GPA;
    
    public:
    void getData()
    {
        cout << "Enter your GPA: ";
        cin >> GPA;
    }

    bool isOutstanding()
    {
        
        if (GPA>3.5)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
        void display()
        {
            cout << "Name: " << getname()<<endl;
            cout << "GPA: " << GPA<<endl;
            if (isOutstanding()==true)
            cout << "Outstanding Job!"<<endl;
            else
            {
                cout << "Satisfactory Job!";
            }
        }

    };

    class Professor:public Person{
        protected:
        int publications;
            
        public:

        void getData()
        {
            
            cout << "Enter Your Number of Publications: ";
            cin >> publications;
        }

        bool isOutstanding()
        {
            if (publications>100)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        
        void display()
        {
            cout << "Name: " << getname()<<endl;
            cout << "Publications: " << publications<<endl;
            if (isOutstanding()==true)
            cout << "Outstanding Job!";
            else
            {
                cout << "Satisfactory Job!";
            }
            
        }

    };
    
    int main()
    {
        Student S1;
        Professor P1;
        cout << "Choose the person\n";
        cout << "1)Student\n2)Professor\n";
        char a =getch();
        if (a=='1')
        {
            // string name;
            // cout<<"Enter Your Name: ";
            // cin >> name;
            // S1.setname(name);
            S1.setname("Ibad");
            S1.getData();
            S1.display();
        }
        else if (a == '2')
        {
            // string name;
            // cout<<"Enter Your Name: ";
            // cin >> name;
            // S1.setname(name);
            P1.setname("Ibad Saleem");
            P1.getData();
            P1.display();
        }
    }





    

