#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	int n, s; 
	cin >> n >> s; 
	
	int x=(0-s-1);
	
	for(int i=0; i<n; i++){
		int h, m; 
		cin >> h >> m; 
		int xx = 60*h+m;
		
		if(xx-x>=(2*s+2)){
			x+=s+1;
			cout << x/60 << " " << x%60 << endl;
			return 0; 
		}
		x=xx; 
	}
	
	x+=s+1; 
	cout << x/60 << " " << x%60 << endl; 
	
	
}
