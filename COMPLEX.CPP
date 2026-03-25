#include<iostream.h>
#include<conio.h>

class complex
{
float x;
float y;
public:
complex(){}
complex(float real,float imaginary)
{
x=real;
y=imaginary;
}
friend complex operator+(complex,complex);
void display();
};
complex operator+(complex b,complex c)
{
complex temp;
temp.x=b.x+c.x;
temp.y=b.y+c.y;
return (temp);
}
void complex::display(void)
{
cout<<x<<"+i"<<y<<endl;
}
int main()
{
complex c1,c2,c3;
c1=complex(4.6,5.6);
c2=complex(1.2,1.6);
c3=c1+c2;
cout<<"c1 = ";c1.display();
cout<<"c2 = ";c2.display();
cout<<"c3 = ";c3.display();
getch();
return 0;
}