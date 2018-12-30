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
 
/*
	Anik Chakrabortty
	Southeast University 
	Dhaka Bangladesh
	Preparation Set Fall 2018

*/ 


using namespace std;
 

int main()
{
   
    //READ("in.txt");
    //WRITE("out.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n; 
    cin >> n; 
    ll a=0, b=0; 
    for(int i=1; i<=n*2; i++){
    	int x, y; cin >> x >> y; 
    	a+=x; b+=y;
    }	

    cout << a/n << " " << b/n << endl;



    return 0; 
    
}
