#include<stdio.h>
#include<math.h>
#include"string.h"
#include<stdbool.h>
#define nhapchuoi(s) scanf("\n%[^\n]s",&s)
#define nhap(n) scanf("%d",&n);
void swap(int a[][101],int r,int c)
{
	int i,j;
	for(i=0;i<=r;i++)
	{
		for(j=0;j<=c;j++) a[i][j]==1?(a[i][j]=0):(a[i][j]=1);
	}
}
bool check(int a[][101],int n)
{
	int i,j;
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
if(a[i][j]!=0) return 0;
	}
	return 1;
}
void solan(int a[][101],int n)
{
int c=0, row=n-1,i;
while(check(a,n)==0&&row>=0)
{
	
	for(i=n-1;i>=0;i--) {
	if(a[row][i]!=0) {
	swap(a,row,i);
	++c;
	}
}
3
001

111

111
	--row;	
}
printf("%d\n",c) ;
}
int main()
{
	int n,i,j;
	nhap(n);
	int a[n][101];
	char s[1001];
	for(i=0;i<n;i++)
	{
		nhapchuoi(s);
		for(j=0;j<strlen(s);j++) a[i][j]=s[j]-'0';
	}
solan(a,n);
}