#include<iostream.h>
#include<conio.h>
class Point
{
int x,y;
public:
void setPoint(int a,int b);
void showPoint();
};
void Point::setPoint(int a,int b)
{
x=a;
y=b;
}
void Point::showPoint()
{
cout<<"\n("<<x<<","<<y<<")";
}
int main()
{
Point p1,p2,p3;
p1.setPoint(5,7);
p1.showPoint();
p2.setPoint(15,47);
p2.showPoint();
p3.setPoint(55,77);
p3.showPoint();
getch();
return 0;
}