#include<iostream>
#include<map>
using namespace std;
int main()
{
map<char,string> m;
map<char,string>::iterator it;
int n,i;
char a;
string s;
cout<<"Enter no. of map elements \n";
cin>>n;
for( i=1;i<=n;i++)
//To insert elements
{
cout<<" KEY-VALUE :";
cin>>a;
cin>>s;
m.insert(pair<char,string>(a,s)); //OR m[a]=s;
}
//To Delete the element
cout<<"Enter the Value\n";
cin>>s;
it=m.begin();
for( ;it!=m.end();it++)
{
if(it->second==s)
{
m.erase(it);
break;}
}
if(it == m.end())
cout<<"Element not found \n";
else
cout<<"Item found \n";
//Finding element using key
cout<<"Enter the key \n";
cin>>a;
it=m.find(a);
if(it != m.end())
cout<<it->second<<endl<<endl;
else
cout<<"Element not found \n\n";
cout<<m.size()<<endl<<endl;
//To display contents of map.
for(it=m.begin();it!=m.end();it++)
{
cout<<"Key="<<it->first<<" ITEM="<<it->second<<endl;
}
}
