#include<iostream.h>
#include<conio.h>
const int func()
{
	cout<<"Inside function";
	return 1;
}
int main()
{
	clrscr();
	int i=func();
	cout<<i;
	getch();
	return 0;
}
