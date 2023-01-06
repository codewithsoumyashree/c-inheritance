// Extend the program i. to derive a class from result from class ‘test’ which includes member function to calculate total marks and percentage of a student. Input the data for a student and display his/her grade
#include <iostream>
#include <cstring>
using namespace std;

class student
{
    string name;
    int roll,age;
    public:
    student(string n,int r,int a)
    {   
        name=n;
        roll=r;
        age=a;
    }
    void showdata()
    {
        cout<<"The Name of the student is : "<<name<<endl;
        cout<<"The Roll Number of the student is : "<<roll<<endl;
        cout<<"The Age of the student is : "<<age<<endl;
    }
};

class test : public student
{
    int marks[5];
    public:
    test(string n,int r,int a,int m[]):student(n,r,a)
    {
        for(int i=0;i<5;i++)
        {
            marks[i]=m[i];
        }
            
    }
    void showdata()
    {
        student::showdata();
        cout<<"The marks in 5 subjects of that student \n";
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<endl;
        }
    }
};

class result : public test
{
protected:
    int total = 0;
    float perc;

public:
    result(string n,int r,int a,int m[],int t,float f):test( n, r, a, m)
    {
        for (int i = 0; i < 5; i++)
        {
            total = total + m[i];
        }
        perc = total / 5.0;
        if (perc >= 90)
        {
            cout << "The total marks of the student is : " << total << endl;
            cout << "The percentage of the student is : " << perc << endl;
            cout << "The grade of the student is : O" << endl;
        }
        else if (perc >= 80 && perc <= 89)
        {
            cout << "The total marks of the student is : " << total << endl;
            cout << "The percentage of the student is : " << perc << endl;
            cout << "The grade of the student is : E" << endl;
        }
        else if (perc >= 70 && perc <= 79)
        {
            cout << "The total marks of the student is : " << total << endl;
            cout << "The percentage of the student is : " << perc << endl;
            cout << "The grade of the student is : A" << endl;
        }
        else if (perc >= 60 && perc <= 69)
        {
            cout << "The total marks of the student is : " << total << endl;
            cout << "The percentage of the student is : " << perc << endl;
            cout << "The grade of the student is : B" << endl;
        }
        else if (perc >= 50 && perc <= 59)
        {
            cout << "The total marks of the student is : " << total << endl;
            cout << "The percentage of the student is : " << perc << endl;
            cout << "The grade of the student is : C" << endl;
        }
        else if (perc >= 40 && perc <= 49)
        {
            cout << "The total marks of the student is : " << total << endl;
            cout << "The percentage of the student is : " << perc << endl;
            cout << "The grade of the student is : D" << endl;
        }
        else
        {
            cout << "The total marks of the student is : " << total << endl;
            cout << "The percentage of the student is : " << perc << endl;
            cout << "The grade of the student is : F" << endl;
        }
    }
};
int main()
{
        string name;
        int roll,age,marks[5];
        cout<<"Enter the name of student \n";
        getline(cin>>ws,name);
        cout<<"Enter the Roll Number of that Student \n";
        cin>>roll;
        cout<<"Enter the age of that Student \n";
        cin>>age;
         cout<<"Enter the marks in 5 subjects of that student \n";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
        result t(name,roll,age,marks,0,0);
        t.showdata();
    return 0;
}