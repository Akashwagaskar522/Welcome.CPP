#include<iostream.h>
#include<conio.h>

class Vector
{
private:
int size;
int *arr;

public:
Vector(int s=0)
{
size=s;
if (size>0)
arr=new int[size];
else
arr=NULL;
}

Vector(const Vector &v)
{
size=v.size;
arr=new int[size];
for (int i=0;i<size;i++)
arr[i]=v.arr[i];
}

void accept()
{
cout<<"Enter "<<size<<" elements:\n";
for (int i=0;i<size;i++)
cin>>arr[i];
}

void display() const
{
cout<<"(";
for(int i=0;i<size;i++)
{
cout<<arr[i];
if (i!=size-1)
cout<<", ";
}
cout<<")";
}

Vector unionVector(const Vector &v)
{
Vector result(size+v.size);

int k = 0;

for (int i=0;i<size;i++)
{
result.arr[k++]=arr[i];
}

for (int i=0;i<v.size;i++)
{
bool found=false;

for (int j=0;j<size;j++)
{
if (v.arr[i]==arr[j])
{
found=true;
break;
}
}

if (!found)
{
result.arr[k++]=v.arr[i];
}
}

result.size=k;

return result;
}

~Vector()
{
delete[]arr;
}
};

int main()
{
Vector v1(3),v2(3);

cout<<"Enter first vector:\n";
v1.accept();

cout<<"Enter second vector:\n";
v2.accept();

Vectorv3=v1.unionVector(v2);

cout<<"Union vector is: ";
v3.display();
getch();
return 0;
}