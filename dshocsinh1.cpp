#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define rechuoi(s) scanf("\n%[^\n]s",&s);
typedef struct sv{
	char ten[1000];
	char diem[1000];
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
				rechuoi(hs[i].diem);
			}
			printf("%d\n", n);
		}
		if (t == 2){
			int n;
			scanf("%d", &n);
			rechuoi(hs[n].ten);
			rechuoi(hs[n].diem);
			printf("%d\n",n);
		}
		scanf("%d", &t);
	}
	for (int i =m; i>= 1; i--){
		printf("%d %s %s\n",i,hs[i].ten, hs[i].diem);
	}
}
