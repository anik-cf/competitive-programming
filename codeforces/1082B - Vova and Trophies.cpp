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
    string s; 
    cin >> s;

    int cS = 0,left = 0,cG=0, mx = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
    	
    	if(s[i]=='G')
    		cG++; 
    	
        if (s[i] == 'S') 
            cS++; 

        while (cS > 1) 
        { 
            if (s[left] == 'S') 
                cS--; 
            left++; 
        } 
  		
        mx = max(mx, i - left + 1); 
    } 

    if(mx>cG)
    cout << cG << endl;
	else
	cout << mx << endl; 

    return 0; 
}
