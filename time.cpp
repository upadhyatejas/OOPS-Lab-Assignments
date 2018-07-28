#include<iostream>
using namespace std;class Time
{
private:int hr,min,sec;
public: Time()
//default constructors
{
hr=min=sec=0;
}
Time(int a,int b,int c):hr(a),min(b),sec(c)
//parameterized constructors
{
}
void input()
{
cout<<"Enter time in hours minutes and seconds"<<endl;
cin>>hr>>min>>sec;
}
void add(Time t1,Time t2)
//passing objects as parameters
{
sec=t1.sec+t2.sec;
min=sec/60;
sec%=60;
min+=t1.min+t2.min;
hr=min/60;
min%=60;
hr+=t1.hr+t2.hr;
}
void display()
{
cout<<"Resultant time= "<<hr<<"hrs"<<":"<<min<<"mins"<<":"<<sec<<"sec"<<endl;
}
};
int main()
{
Time t1,t2(10,10,10),t3;
cout<<"Enter time 1"<<endl;t1.input();
t3.add(t1,t2);
t3.display();
return 0;
}
