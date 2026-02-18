#include<iostream.h>
#include<conio.h>
class Rectangle;

class Square
{
private:
float side;
public:
void accept()
{
cout<<"Enter side of square:";
cin>>side;
}
friend void compareArea(Square,Rectangle);
};
class Rectangle
{
private:
float length,breadth;
public:
void accept()
{
cout<<"Enter length and breadth of rectangle";
cin>>length>>breadth;
}
friend void compareArea(Square,Rectangle);
};

void compareArea(Square s,Rectangle r)
{
float squareArea=s.side*s.side;
float rectangleArea=r.length*r.breadth;

cout<<"\nArea of square="<<squareArea;
cout<<"\nArea of Rectangle="<<rectangleArea<<endl;

if(squareArea>rectangleArea)
cout<<"Square has larger area";
else if(rectangleArea>squareArea)
cout<<"Rectangle has larger area";
else
cout<<"Both have equal area";
}

int main()
{
Square s;
Rectangle r;

s.accept();
r.accept();

compareArea(s,r);
getch();
return 0;
}
