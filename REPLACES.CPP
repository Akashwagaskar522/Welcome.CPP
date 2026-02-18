#include<iostream.h>
#include<conio.h>

class ReplaceChar
{
private:
char str[50];
public:
void accept()
{
cout<<"Enter s string: ";
cin.getline(str,50);
}
int replace(char ch1,char ch2='*')
{
int count=0;
for (int i=0;str[i]!='\0';i++)
{
if(str[i]==ch1)
{
str[i]=ch2;
count++;
}
}
return count;
}
void display()
{
cout<<"Modified string:"<<str<<endl;
}
};
int main()
{
ReplaceChar obj;
char ch1;
int total;

obj.accept();

cout<<"Enter Character to be replaced:";
cin>>ch1;

total=obj.replace(ch1);

obj.display();
cout<<"Number of replacements:"<<total<<endl;
getch();
return 0;
}