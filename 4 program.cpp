#include <iostream>
#include <cmath>
using namespace std;
class shape
{
protected:
    float area;
};
class circle : public shape
{
    int r;
    public:
    circle(int radius):shape()
    {
       r=radius;
    }
    void showcir()
    {
        area = 3.14*r*r;
        cout<<"The area of the circle is : "<<area<<endl;
    }
};
class triangle : public shape
{
    int a,b,c;
    public:
    triangle(int a1,int b1,int c1):shape()
    {
       a=a1;
       b=b1;
       c=c1;
    }
    void showtri()
    {
        float s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"The area of the Triangle is : "<<area<<endl;
    }
};
class rectangle : public shape
{
    int l,b;
    public:
    rectangle(int len,int bre):shape()
    {
       l=len;
       b=bre;
    }
    void showrec()
    {
        area = l*b;
        cout<<"The area of the circle is : "<<area<<endl;
    }
};
int main()
{
    int l,br,a,b,c,r;
     cout<<"Enter the radius of the circle"<<endl;
     cin>>r;
     cout<<"Enter the sides of the triangle"<<endl;
     cin>>a>>b>>c;
     cout<<"Enter the sides of the rectangle"<<endl;
     cin>>l>>br;
     circle C(r);
     triangle T(a,b,c);
     rectangle R(l,br);
     C.showcir();
     T.showtri();
     R.showrec();
    return 0;
}