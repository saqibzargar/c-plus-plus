#include<iostream.h>
#include<conio.h>
class student
{
	int s1,s2,s3,avg,sum;
	public:

	void getdata();
	void putdata();
};

void student:: getdata()
{
	cout<<"enter marks of s1,s2,s3\n";
	cin>>s1>>s2>>s3;
}
void student::putdata()
{
      sum=s1+s2+s3;
      avg=sum/3;

      cout<<"average="<<avg;
      cout<<"\nsum="<<sum;
}
int main()
{
clrscr();
student s;
s.getdata();
s.putdata();

getch();
return 0;
}