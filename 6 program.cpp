#include<iostream>
using namespace std;

class cricketer
{
    protected:
    string name;
    int age,JN,ODI;
    public:
    cricketer(string n,int a,int J,int O)
    {
        name=n;
        age=a;
        JN=J;
        ODI=O;
    }
    void showdata()
    {
        cout<<"The name of the cricketer "<<name<<endl;        
        cout<<"The age of the cricketer "<<age<<endl;        
        cout<<"The Jersey Number of the cricketer "<<JN<<endl;        
        cout<<"The Number of ODI's played by the cricketer "<<ODI<<endl;        
    }
};

class batsman : public cricketer
{
    int runstaken;
    float battingavg,strikerate;
    int HC,C,Highest,RL,Six,LongestSix;
    public:
    batsman(string n,int a,int J,int O,int r,float ba,float sr,int H,int centuries,int High,int R,int S,int LS):cricketer(n,a,J,O)
    {
        runstaken=r;
        battingavg=ba,
        strikerate=sr;
        HC=H;
        C=centuries;
        Highest=High;
        RL=r;
        Six=S;
        LongestSix=LS;
    }
    void showbat()
    {
        cout<<"The Runs Taken by the batsman "<<runstaken<<endl;
        cout<<"The Batting Average by the batsman "<<battingavg<<endl;
        cout<<"The Strike Rate by the batsman "<<strikerate<<endl;
        cout<<"The Number of half-centuries by the batsman "<<HC<<endl;
        cout<<"The Number of centuries by the batsman "<<C<<endl;
        cout<<"The Highest Score by the batsman "<<Highest<<endl;
        cout<<"The R/L by the batsman "<<RL<<endl;
        cout<<"The Number of sixes by the batsman "<<Six<<endl;
        cout<<"The Longest six length by the batsman "<<LongestSix<<endl;
    }

};

class baller : public cricketer
{
    string Type;
    int wickets;
    float runrate,speed,economy,RL;
    public:
    baller(string n,int a,int J,int O,string T,int w,float rr,float s,float eco,float R):cricketer(n,a,J,O)
    {
        Type=T;
        wickets=w;
        runrate=rr;
        speed=s;
        economy=eco;
        RL=R;
    }
    void showbow()
    {
        cout<<"The type of bowler "<<Type<<endl;       
        cout<<"The Number of wickets taken by the bowler "<<wickets<<endl;        
        cout<<"The Runrate of the bowler "<<runrate<<endl;       
        cout<<"The Speed of the bowler "<<speed<<endl;       
        cout<<"The Economy of the bowler "<<economy<<endl;
        cout<<"The R/L of the bowler "<<RL<<endl;          
    }
};

int main()
{
    string name;
    int age,JN,ODI;
    int runstaken;
    float battingavg,strikerate;
    int HC,C,Highest,RL,Six,LongestSix;
    string Type;
    int wickets;
    float runrate,speed,economy,RLB;
    cout<<"Enter the name of the cricketer \n";
        getline(cin>>ws,name);
        cout<<"Enter the age of the cricketer \n";
        cin>>age;
        cout<<"Enter the Jersey Number of the cricketer \n";
        cin>>JN;
        cout<<"Enter the Number of ODI's played the cricketer \n";
        cin>>ODI;
        cout<<"Enter the Runs Taken by the batsman \n";
        cin>>runstaken;
        cout<<"Enter the Batting Average by the batsman \n";
        cin>>battingavg;
        cout<<"Enter the Strike Rate by the batsman \n";
        cin>>strikerate;
        cout<<"Enter the Number of half-centuries by the batsman \n";
        cin>>HC;
        cout<<"Enter the Number of centuries by the batsman \n";
        cin>>C;
        cout<<"Enter the Highest Score by the batsman \n";
        cin>>Highest;
        cout<<"Enter the R/L by the batsman \n";
        cin>>RL;
        cout<<"Enter the Number of sixes by the batsman \n";
        cin>>Six;
        cout<<"Enter the Longest six length by the batsman \n";
        cin>>LongestSix;
        cout<<"Enter the type of bowler \n";
        cin>>Type;
        cout<<"Enter the Number of wickets taken by the bowler \n";
        cin>>wickets;
        cout<<"Enter the Runrate of the bowler \n";
        cin>>runrate;
        cout<<"Enter the Speed of the bowler \n";
        cin>>speed;
        cout<<"Enter the Economy of the bowler \n";
        cin>>economy;
        cout<<"Enter the R/L of the bowler \n";
        cin>>RLB;
        
        batsman Bat(name,age,JN,ODI,runstaken,battingavg,strikerate,HC,C,Highest,RL,Six,LongestSix);
        baller Bow(name,age,JN,ODI,Type,wickets,runrate,speed,economy,RLB);
        Bat.showdata();
        Bat.showbat();
        Bow.showbow();

return 0;
}