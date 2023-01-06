// Create a class student which stores name, roll number and age of a student.Derive a class test from student class, which stores marks in 5 subjects.Input and display the details of a student.using constructor inheritence.
#include<iostream>
#include<cstring>
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
        test t(name,roll,age,marks);
        t.showdata();
return 0;
}