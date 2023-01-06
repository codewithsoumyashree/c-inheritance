// Extend the program ii. to include a class sports, which stores the marks in sports activity. Derive the result class from the classes ‘test’ and ‘Activities’. Calculate the total marks and percentage of a student.
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

class test : virtual public student
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
class activity : virtual public student
{
    protected:
    int act[2];
    public:
    activity(string n,int r,int a,int ar[]):student(n,r,a)
    {
        act[0]=ar[0];
        act[1]=ar[1];
    }
};
class result : public test,public activity
{
protected:
    int total = 0;
    float perc;

public:
    result(string n,int r,int a,int m[],int ar[],int t,float f):student(n,r,a),test(n,r,a,m),activity(n,r,a,ar)
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
        int roll,age,marks[5],act[2];
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
        cout<<"Enter the marks in sports\n";
        cin>>act[0]>>act[1];
        result t(name,roll,age,marks,act,0,0);
        t.showdata();
    return 0;
}