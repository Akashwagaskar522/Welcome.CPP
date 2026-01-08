#include<iostream.h>
#include<conio.h>

class WorkInformation {
char Worker_Name[50];
int No_Of_Hours_Worked, Pay_Rate, Salary;

public:
void accept() {
cout<<"Enter name of the worker: ";
cin>>Worker_Name;

cout<<"Enter number of hours worked: ";
cin>>No_Of_Hours_Worked;

cout<<"Enter Pay Rate: ";
cin>>Pay_Rate;
}

int calSal(int work_hrs, int pay_rate) {
return (work_hrs * pay_rate);
}

void display() {
cout << endl << "Worker details" << endl;
cout << "Name: " << Worker_Name << endl;
cout << "Salary: " << calSal(No_Of_Hours_Worked, Pay_Rate) << endl;
}
};

int main() {
clrscr();
WorkInformation w;
w.accept();
w.display();

getch();
return 0;
}