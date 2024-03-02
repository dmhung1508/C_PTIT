#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
#define re(n) scanf("%lld",&n);
#define wr(n) printf("%lld\n",n);
#define ll long long
ll max(ll a,ll b)
{
	return a>b?a:b;
}
ll min(ll a,ll b)
{
	return a<b?a:b;
}
void solve(ll x,ll y)
{
ll a=min(x,y),b=max(x,y);
ll d=b-a;
switch(d)
{
	case 0: 	puts("0");	break;
	case 1: 	puts("1");	break;
	case 2: 	puts("2");	break;
	case 3: 	puts("3");	break;
	case 4: 	puts("3");	break;
	default:
		d-=2;
		int i=1,step=2;
	while(d>0)
	{
		i++;
		d-=i;
		++step;
		if(d<=0) break;
		d-=i;
		++step;
	}
	printf("%d\n",step);
	break;
}
}
main()
{
	ll x,y;
	while (scanf("%lld %lld", &x, &y) == 2)
	{
		solve(x,y);
	}
}