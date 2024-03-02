#include <stdio.h>
int uc(int a, int b){
	if ( b== 0) return a;
	return uc(b,a%b);
}
int bc(int a,int b){
	return (a*b)/uc(a,b);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int a[n+1],b[n+2];
		for (int i =1; i<=n; i++) scanf("%d", &a[i]);
		b[1] = a[1];
		b[n+1] = a[n];
		for (int i =2; i<=n; i++){
			b[i] = bc(a[i], a[i-1]);
		}
		for (int i =1; i<=n+1; i++) printf("%d ", b[i]);
		printf("\n");
	}
}