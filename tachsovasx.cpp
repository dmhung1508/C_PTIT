#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)

int n,m,p,k;
int test;
char s[505][205]={};
char x[505][205]={};
ll dd[1001];int luu[1001];
int u=0;

ll sosanh2(char a[],char b[])
{
    char v[105]={};
   if(strlen(a)<strlen(b))
   {
      int n=strlen(b)-strlen(a);
      f(i,0,n-1)
      v[i]='0';
      a=strcat(v,a);
   }
     if(strlen(b)<strlen(a))
   {
      int n=strlen(a)-strlen(b);
      f(i,0,n-1)
      v[i]='0';
      b=strcat(v,b);
   }
   return strcmp(a,b);

}
void tachso()
{
    bool ok=1;
     f(i,1,n)
    {
        if(ok==0)u++;
        f(j,0,strlen(s[i])-1)
        {
            if(s[i][j]>='0'&&s[i][j]<='9')
            {
               ok=0;
               switch(s[i][j]-'0')
               {
                   case 0:{strcat(x[u],"0");}break;
                   case 1:{strcat(x[u],"1");}break;
                   case 2:{strcat(x[u],"2");}break;
                   case 3:{strcat(x[u],"3");}break;
                   case 4:{strcat(x[u],"4");}break;
                   case 5:{strcat(x[u],"5");}break;
                   case 6:{strcat(x[u],"6");}break;
                   case 7:{strcat(x[u],"7");}break;
                   case 8:{strcat(x[u],"8");}break;
                   case 9:{strcat(x[u],"9");}break;
               }
            }
            else if(ok==0){u++;ok=1;}
        }
    }
}
void sort()
{
    f(i,0,u-1)
    {
        f(j,i+1,u)
        {
            if(x[i][0]!='\0'&&x[j][0]!='\0')
                {
                    if(sosanh2(x[i],x[j])>0)
                    {
                        char z[105]={};
                        strcpy(z,x[i]);strcpy(x[i],x[j]);strcpy(x[j],z);
                    }
                }
        }

    }
}
void print()
{
    f(i,0,u)
    {
        bool ok=1;//printf("u=%d\n",i);
       if(x[i][0]>='0'&&x[i][0]<='9')
       {
           if(strlen(x[i])==1)printf("%s\n",x[i]);
           else if(strlen(x[i])>1)
           {
              f(j,0,strlen(x[i])-1)
              {
               if(x[i][j]=='0'&&ok==1)continue;
               else {printf("%c",x[i][j]);ok=0;}
              }
              if(ok==1)printf("0");
              printf("\n");
           }
       }
    }
}
int main()
{
   
    scanf("%d",&n);
    getchar();
    f(i,1,n)
    {
        gets(s[i]);
    }
    tachso();
    sort();
    print();


    return 0;
}