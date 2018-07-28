#include<iostream>
#include<cstdlib>
#include<fstream>
//Header providing file stream classes
using namespace std;
class student
//Declare a class named student
{
int roll;
int total;
char name[50];
char grade;
int per;
public:
void setdata()
//Function to input details of student
{
cout<<"Enter roll number"<<endl;
cin>>roll;
cout<<"Enter name"<<endl;
cin>>name;
cout<<"Enter total marks in 3 subjects"<<endl;
cin>>total;
per=total/3;
if(per>90)
grade='S';
else if(per>75)
grade='A';
else if(per>60)
grade='B';
else if(per>40)
grade='C';
else
//Calculate percentage to determine grade
//Assign grade depending on percentagegrade='F';
}
void showdata()
//Function to display the student details
{
cout<<"Student name-"<<name<<endl;
cout<<"Roll-"<<roll<<endl;
cout<<"Total-"<<total<<endl;
cout<<"Grade-"<<grade<<endl;
cout<<endl;
}
};
void write_record()
//Function to write record into the file
{
//Opening a binary file named student1.bin in binary and append mode
ofstream outfile;
outfile.open("student1.bin", ios::binary | ios::app);
student obj; //Create a new object of class sudent
obj.setdata(); //Calling the function setdata() to input the student details
//Writing the data obtained into the binary file
outfile.write((char*)&obj, sizeof(obj));
//Closing the file
outfile.close();
}
void display()
//Function to display record from file
{
//Opening the binary file in binary and input mode
ifstream infile;
infile.open("student1.bin", ios::binary);
if(!infile)
//Checking for open errors{
cout<<"Error opening file."<<endl;
exit(0);
}
student obj; //Create a new objecct of student class
//Reading the data from the file for each object
while(infile.read((char*)&obj, sizeof(obj)))
{
obj.showdata();
//Displaying the student details obtained from the file
}
infile.close();
//Closing the file
}
int main()
{
int n;
cout<<"Enter the number of students"<<endl;
cin>>n;
//Input data depending on the number of students
for(int i=1;i<=n;i++)
write_record();
//Function call to write the record into file
cout<<"List of records"<<endl;
display();
return 0;
}
//Function call to display the record from file
