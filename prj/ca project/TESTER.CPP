#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	char a[50];
	long ex=0;
	double man=0.0;
	clrscr();
	cout<<"enter the floating point number in the binary form:\n\n";
	cin>>a;
	if(strlen(a)!=32)
	{
		cout<<"\n\nerror in number of digits in the input!!!!!!!!!!";
		getch();
		exit(0);
	}
	for(int i=0;i<32;i++)
	{
		if(a[i]!='0' && a[i]!='1')
		{
			cout<<"\n\nerror!!! a binary number cannot have digits other than 0 and 1";
			getch();
			exit(0);
		}
	}
	cout<<"\n\nthe float number is:";
	if(a[0]=='0')
	{
		cout<<"sign: +(positive)";
	}
	else
	{
		cout<<"sign: -(negative)";
	}
	for(i=0;i<8;i++)
	{
		if(a[i+1]=='1')
		{
			ex+=(pow(2,(7-i)));
		}
	}
	ex-=127;
	for(i=0;i<23;i++)
	{
		if(a[i+9]=='1')
		{
			man+=(1.0/pow(2,i+1));
		}
	}
	man++;
	cout<<" man="<<man<<" exp="<<ex;
	getch();
}
