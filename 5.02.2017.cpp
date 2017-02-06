#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
	int q=0,w=0,n;
	cin>>n;
	for (int i=n;i>=1;i/=10){
		q+=(i%10); 
		if(q==0){
			w++; 
			
		} q=0;
	}
	
	if(w>=2) {
		cout<<"YES";
	} else cout<<"NO";
}
