#include<iostream>
#include<vector>
using namespace std;
main()
{
vector<int>vector1;
int ch,m,n;
do{
cout<<"\nEnter \n1>To insert \n 2>Delete the last element \n3>Size of vector \n 4>Display elements in
vector \n5>Clear the vector\n6>Exit\n";
cin>>ch; //user is asked to choose an option from the above
switch(ch)
{
case 1:cout<<"\nEnter the element to be inserted\n";
cin>>m; vector1.push_back(m); //element is inserted at the end in vector1
break;
case 2:vector1.pop_back();
cout<<"\nElement deleted\n";
break; //last element is deleted from vector1
case 3:cout<<"\nSize of vector is:\n";
cout<<vector1.size(); //displays number of elements in vector1
break;
case 4:cout<<"\nElements of vector are:\n";
if(vector1.size()==0)
cout<<"Vextor is empty";
else {
for(n =0;n <vector1.size();n++)cout<<vector1[n]<<"\t";
} //if there are elements in the vector,itdisplays the elements from beggining to end or else itdisplays
the vector
break;
case 5:vector1.clear();
cout<<"\nThe vector has been cleared\n"; break; //vector1 is cleared case 6:break;
}
}while(ch!=6);
}
