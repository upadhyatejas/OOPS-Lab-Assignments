#include<iostream>
#include<string>
using namespace std;
class Person //creating the base class person
{
private:
string name; //declaring his name and age
int age;
public:
void get()
{
cout<<"enter the age"<<endl;
cin>>age;
cout<<"enter his name"<<endl;
cin>>name;
}
void display()
{
cout<<"name and age is "<<name<<age;
} //display name and age
};
class teacher:public Person
// publicly inheriting teacher from person{
private:
int n;
string des;
public:
void get1()
{
get(); //calling the base class input function
cout<<"Enter designatiom"<<endl;
cin>>des;
cout<<"Enter the no of publications"<<endl;
cin>>n;
}
void disp()
{
display(); // calling display function of base class
cout<<"Designation-"<<des<<"\nNo of publications-"<<n<<endl;
}
};
class Student:public Person // publicly inheriting student from person
{
private:
int roll;
public:
void get2()
{
get(); // calling input function of base class
cout<<"Enter the roll number"<<endl;
cin>>roll;
}void disp1()
{
disp();
cout<<"Roll number-"<<roll<<endl;
}
};
class Marks:public Student // publicly inherit marks from student class
{
int m1,m2,m3;
float perc;
public:
void get3()
{
get2();// call input function of student class
cout<<"Enter the marks in 3 subjects"<<endl;
cin>>m1>>m2>>m3;
perc=(m1+m2+m3)/3;
}
void disp2()
{
disp1();// call display function of student class
cout<<"Percentage="<<perc<<endl;
}
};
int main()
{
marks s;// create object of marks class
teacher t;// create object of teacher class
cout<<"Enter the student details"<<endl;
s.get3();
cout<<"Enter the teacher details"<<endl;
t.get1();
s.calc();
s.disp2();return 0;
}
