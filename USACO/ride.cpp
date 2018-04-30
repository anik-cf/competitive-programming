/*
ID:
TASK: ride
LANG: C++                 
*/
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
 
 
int main(){
   
    READ("ride.in");
    WRITE("ride.out");
    ios_base::sync_with_stdio(0); cin.tie(0);
   
    //vi v;
   	string a, b;
   	cin >> a >> b; 
   	int ans1=1, ans2=1; 
   	for(int i=0; i<a.length(); i++){
   		ans1 *= a[i]-'A'+1; 
	}
	
	for(int i=0; i<b.length(); i++){
   		ans2 *= b[i]-'A'+1; 
	}
	
	//cout << ans1 << endl;
	//cout << ans2 << endl;
	
	int mod1=ans1%47; 
	int mod2 = ans2%47;
	if(mod1==mod2)
	cout << "GO" << endl;
	else
	cout << "STAY" << endl;
	
   
}
