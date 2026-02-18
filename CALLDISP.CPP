#include<iostream.h>
#include<conio.h>
class Number
{
private:
static int cnt;

public:
void Display()
{
cnt++;
cout<<"Display() called"<<cnt<<"times."<<endl;
}
};

int Number::cnt=0;

int main()
{
Number n1,n2,n3;
n1.Display();
n2.Display();
n3.Display();
getch();
return 0;
}