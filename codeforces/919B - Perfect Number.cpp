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

int getDigit(int no)
{
   return no == 0 ? 0 : no%10 + getDigit(no/10) ;
}


int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<ll>v; 
    
	for(ll i=1LL; i<=100000000; i++){
		if(getDigit(i)==10)
		v.push_back(i);
	}
	
	
   	int n; 
   	
   	cin >> n;
	   
	cout << v[n-1] << endl;  
   	
	return 0;

}
