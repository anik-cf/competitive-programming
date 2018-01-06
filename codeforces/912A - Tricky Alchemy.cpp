#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int main(){
	
	ll yh, bh;
	ll y, g, b; 
	ll ans = 0; 
	
	cin >> yh >> bh; 
	cin >> y >> g >> b; 
	
	
	ll yCost = yh - (2*y + g); 
	ll bCost = bh - (3*b + g);
	
	if(yCost<0)
	ans += abs(yCost); 
	if(bCost<0)
	ans += abs(bCost); 
	
	
	cout << ans << endl; 
	
	
	
}

	
