#include<iostream.h>
#include<conio.h>
float volume(float r, float h)
{
return(3.14*r*2*h);
}
float coneVol(float r, float h)
{
return(3.14*r*h/3);
}
float volumesp(float r)
{
return(4/3*3.14*r*r*r);
}
int main()
{
clrscr();
float cy_h, cy_r, co_h, co_r,sp_r;
cout<<"Enter dimensions"<<endl;
cout<<"1.cylinder"<<endl;
cout<<"height";
cin>>cy_h;
cout<<"radius";
cin>>cy_r;
cout<<endl;
cout<<"2.cone"<<endl;
cout<<"height";
cin>>co_h;
cout<<"radius";
cin>>co_r;
cout<<endl;
cout<<"3.sphere"<<endl;
cout<<"radius";
cin>>sp_r;
cout<<endl;
cout<<"The volume of cylinder:"<<volume(cy_h,cy_r)<<endl;
cout<<"The volume of cone:"<<coneVol(co_h,co_r)<<endl;
cout<<"The volume of sphere:"<<volumesp(sp_r)<<endl;
getch();
return 0;
}
