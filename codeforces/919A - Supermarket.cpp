#include<bits/stdc++.h>
#define ll long long
#define MAX 10000007
#define PI acos(-1)
#define pb(x) push_back(x)
#define inpll(a) scanf("%lld",&a)
#define vi vector<int>
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

using namespace std;

int main(){

 	double mi=1000000000; 
 	
 	int n, m, a, b;
 	
 	cin >> n >> m; 
 	
 	for(int i=0; i<n; i++){
 		cin >> a >> b; 
 		
 		double v=(a*m*1.0)/b; 
 		
 		if(v<mi)
 		mi = v; 
	 }
	 
	 printf("%.8lf", mi);
	 cout << endl; 
	 
	 return 0;
}
