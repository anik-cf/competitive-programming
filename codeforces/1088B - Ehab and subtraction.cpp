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

    int n, k; 

    cin >> n >> k; 

    int a[n]; 

    for(int i=0; i<n; i++)
    {
    	cin >> a[i];
    }

    sort(a, a+n);

    ll s=0; 

    for(int i=0; i<n; i++)
    {
    	a[i]=a[i]-s;

    	if(a[i]==0){
    	 	continue;
   		}

   		--k; 

    	if(k<0) return 0; 

    	s=s+a[i];

    	cout << a[i] << endl; 

    }

    for(int i=0; i<k; i++)
    	cout << 0 << endl; 


    return 0; 
}
