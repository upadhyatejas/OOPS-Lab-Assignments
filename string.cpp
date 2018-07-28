#include<iostream>
#include<string>
using namespace std;
class str1
{
string s;
public: str1(string a)
{
s=a;
}
str1(const str1 &obj)
//using const keyword{
s=obj.s;
}
void display()
{
cout<<s<<endl;
}
friend void concat(str1 a,str1 b) //friend function
{
string c;
c=a.s+b.s;
cout<<c<<endl;
}
};
main()
{
str1 a("Rakshith");
str1 b=a;
a.display();
b.display();
concat(a,b);
}
