#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int n;int sum;
int b[1001],c[1001];
ll dd[10001];
int a[10001];char s[1001];
int m,k;int x;int u1,u2,u;
int count,ans;
int main()
{
    scanf("%s",s);
    f(i,0,strlen(s)-2)
    {
        f(j,i+1,strlen(s)-1)
        {
            if(s[j]==s[i])
            {
                if(j==i+1)break;
                else {u++;b[u]=i;c[u]=j;}
            }
        }
    }
    f(i,1,u-1)
    {
        f(j,i+1,u)
        {
            if(b[i]<b[j]&&c[i]<c[j]&&b[j]<c[i]){
            	ans++;
            	printf("%d %d %d %d\n", b[i], b[j], c[i], c[j]);
			}
        }
    }
    printf("%d",ans);
    return 0;
}