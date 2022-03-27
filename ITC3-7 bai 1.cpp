#include<iostream>
#include<string.h>
using namespace std;

void xoa(char s[30],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0';
}
void kiem_tra(char s[30])
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}
int main()
{
	char s[30];
	cout<<"nhap ho va ten cua ban: ";
	cin.getline(s,30);
	kiem_tra(s);
	cout<<"ten sau khi sua loi: \n";
	cout<<s<<endl;
	return 0;
}
















