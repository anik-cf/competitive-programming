#include<bits/stdc++.h>
#define ll long long

using namespace std; 
  

int main()
{
	
	int n, k, x;
	int mx=0; 
	cin >> n >> k; 
	
	for(int i=0; i<n; i++){
		
		cin >> x; 
		
		if(k%x==0 && x<=k && x>mx )
		mx=x; 
		
	}
	
	cout << k/mx << endl; 

	

  	
	return 0;

}
