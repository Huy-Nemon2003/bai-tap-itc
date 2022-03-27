#include<iostream>
#include<string.h>


using namespace std;
void kiem_tra (char s[1000000])
{
	int a=1,b=1;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=s[i+1])
			{
				if(a>b)
				{
					b=a;
				}
				a=1;
			}
		if(s[i]==s[i+1])
			{
				a++;
			}
		
	}
	if(a>b)
	{
		b=a;
	}
	cout<<b;
}

int main()
{
	char s[1000000];
	cout<<"nhap chuoi DNA: ";
	cin.getline(s,1000000);
	cout<<"do dai cua lan lap lai dai nhat la: ";
	kiem_tra(s);
	return 0;
}
