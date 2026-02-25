#include<iostream.h>
#include<conio.h>

class Fraction {
private:
int numerator;
int denominator;
public:
Fraction(int n,int d) {
numerator=n;
denominator=d;
}
Fraction add(Fraction f){
int num=(numerator*f.denominator)+(f.numerator*denominator);
int den=(denominator*f.denominator);
return Fraction(num,den);
}
void display()
{
cout<<numerator<<"/"<<denominator<<endl;
}
};

int main()
{
int n1,d1,n2,d2;
cout<<"enter the first numerator and denominator";
cin>>n1>>d1;
cout<<"enter the second numerator and denominator";
cin>>n2>>d2;

Fraction f1(n1,d1);
Fraction f2(n2,d2);
Fraction sum=f1.add(f2);

cout<<"sum of two fraction is: ";
sum.display();
getch();
return 0;
}