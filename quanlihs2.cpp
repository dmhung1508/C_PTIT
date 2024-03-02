#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define rechuoi(s) scanf("\n%[^\n]s",&s);
typedef struct sv{
	char ten[1000];
	float d1,d2,d3;
}sv;
int main(){
	int t,m=0;;
	sv hs[1000];
	scanf("%d", &t);
	while ( t!=3){
		if (t==1){
			int n;
			scanf("%d", &n);
			m+= n;
			for (int i=1; i<=n; i++){
				rechuoi(hs[i].ten);
				scanf("%f %f %f", &hs[i].d1,&hs[i].d2,&hs[i].d3);
			}
			printf("%d\n", n);
		}
		if (t == 2){
			int n;
			scanf("%d", &n);
			rechuoi(hs[n].ten);
			scanf("%f %f %f", &hs[n].d1,&hs[n].d2,&hs[n].d3);
			printf("%d\n",n);
		}
		scanf("%d", &t);
	}
	for (int i =m; i>= 1; i--){
		if (hs[i].d1 < hs[i].d2 && hs[i].d2 < hs[i].d3) printf("%d %s %0.1f %0.1f %0.1f\n",i,hs[i].ten,hs[i].d1,hs[i].d2,hs[i].d3);
	}
}
