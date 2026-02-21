#include<iostream.h>
#include<conio.h>
class Person
{
private:
char name[30];
char mobile[15];
int age;
char city[20];

public:
void accept()
{
cout<<"\nEnter name: ";
cin>>name;
cout<<"\nEnter mobile number: ";
cin>>mobile;
cout<<"\nEnter age: ";
cin>>age;
cout<<"\nEnter city: ";
cin>>city;
}

void display()
{
cout<<"\nName: "<<name;
cout<<"\nMobile: "<<mobile;
cout<<"\nAge: "<<age;
cout<<"\nCity: "<<city<<endl;
}
};
int main()
{
Person p1;
p1.accept();
p1.display();
getch();
return 0;
}