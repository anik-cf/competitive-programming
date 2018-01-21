#include<bits/stdc++.h>
#define ll long long 

using namespace std;

bool perfect(int x){
	if(x<0)
	return 1; 
	else{
		for(int i=0; i*i<=x; i++)
			if(x==i*i)
			return 0;
			
			return 1; 
	
		
	}
}


int main(){
	
	int n; 
	cin >> n; 
	int ans = -10000000;
	for(int i=0; i<n; i++){
		int a; 
		cin >> a;
		if(perfect(a))
		ans = max(ans, a); 
	}
	
	cout << ans << endl; 
	
}
