#include <iostream>
#include <string>
using namespace std;
long long tong(int n){
	long long s = 1;
	long long sum = 1;
	for (int i =2 ;i<=n; i++){
		s = s*i;
		sum+=s;
	}
	return sum;
	
}
int main(){
	int n;
	cin >> n;
	cout << tong(n);
}
