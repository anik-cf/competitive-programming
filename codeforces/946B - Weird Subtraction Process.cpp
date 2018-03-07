#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define MAX 10000007
#define PI acos(-1)
#define pb(x) push_back(x)
#define inpll(a) scanf("%lld",&a)
#define vi vector<int>
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;


ll a, b; 

void ans(ll &a, ll &b){
	
	if(a==0 || b==0)
	return; 
	
	if(a>=2*b){
		ll x= a/(2*b);  
		a-=2*b*x; 
		
		ans(a, b);
	}
	else if(b>=2*a){
		ll y=b/(2*a);
		b-=2*a*y; 
		ans(a, b); 
	}
	
	else 
	return; 
	
}


int main(){
   
    //READ("in.txt");
    //WRITE("out.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);
    
	cin >> a >> b; 
	
	ans(a, b); 
	
	cout << a << " " << b << endl; 
	return 0;
}
