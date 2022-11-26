#include<bits/stdc++.h>
using namespace std;

main(){
	int n,a;
	cin>>n;
	int i=1;
	while(a<n){
		a=i*i;
		i++;
	}
	cout<<i-2;
}
