#include<iostream>
using namespace std;

class employee
{
    protected:
    string name;
    int id;
    float salary;
    public:
    employee(string s,int i,float sa)
    {
        name=s;
        id=i;
        salary=sa;
    }
    void showdata()
    {
        cout<<"The name of the employee :"<<name<<endl;       
        cout<<"The Id of the employee :"<<id<<endl;          
    }
};

class regular : public employee
{
    float DA,HRA,BS;
    public:
    regular(string s,int i,float sa,float D,float H,float B):employee(s,i,sa)
    {
        DA=D;
        HRA=H;
        BS=B;
    }
    void showreg()
    {
        salary = (0.25*DA)+(0.75*HRA)+BS;
        cout<<"The DA of the employee :"<<DA<<endl;       
        cout<<"The HRA of the employee :"<<HRA<<endl;   
        cout<<"The Basic salary of the employee :"<<BS<<endl;   
        cout<<"The Total salary of the employee :"<<salary<<endl;  
    }
};

class partime : public employee
{
    float PPH;
    int hours;
    public:
    partime(string s,int i,float sa,float P,int h):employee(s,i,sa)
    {
       PPH=P;
       hours=h;
    }
    void showpar()
    {
        salary = hours * PPH;  
        cout<<"The Total salary of the Part-Time employee is :"<<salary<<endl;  
    }
};
int main(){
    string name;
    int id;
    float salary;
    float DA,HRA,BS;
    float PPH;
    int hours;
        cout<<"Enter the name of the employee \n";
        getline(cin>>ws,name);
        cout<<"Enter the Id of the employee\n";
        cin>>id;
        cout<<"Enter the DA of the employee \n";
        cin>>DA;
        cout<<"Enter the HRA of the employee \n";
        cin>>HRA;
        cout<<"Enter the Basic salary of the employee \n";
        cin>>BS;
        cout<<"Enter the no. of hours of the employee \n";
        cin>>hours;
        cout<<"Enter the Pay per hour of the employee \n";
        cin>>PPH;

        regular R(name,id,salary,DA,HRA,BS);
        partime P(name,id,salary,PPH,hours);
        R.showdata();
        R.showreg();
        P.showpar();
return 0;
}