#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	vector<int>v;
	int n, A, B; 
	cin >> n >> A >> B; 	
	int msum=0; 
	
	for(int i=0; i<n; i++){
		int x;
		cin >> x; 
		v.push_back(x); 
		msum+=x;
	}
	
	int one=v[0];
	v[0]=INT_MAX;
	
	
	
	sort(v.begin(), v.end()); 
	int x=n;
	int sum=msum;
	int res=0; 

	for(int i=n-2; i>=0; i--){
			
		if(((one*A)/sum)>=B){
			cout << res << endl; 
			return 0;		
		}
		sum-=v[i];
		
		res++; 
	}
	
	cout << n-1 << endl;
	
}
