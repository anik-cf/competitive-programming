#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	//
	
	int n, m; 
	cin >> n >>  m; 
	
	vector<ll>x;
	vector<ll>y; 
		
		
		
	for(int i=0; i<n; i++){
		ll a;
		cin >> a;
		x.push_back(a);
	}
	
	for(int i=0; i<m; i++){
		ll a;
		cin >> a;
		y.push_back(a);
	}
	
	sort(x.begin(), x.end()); 
	
	reverse(x.begin(), x.end()); 
	
	sort(y.begin(), y.end()); 
	
	reverse(y.begin(), y.end()); 
	
	cout << x[1] * y[0] << endl;
}
