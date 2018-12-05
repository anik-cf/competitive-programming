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

    int x; 
    cin >> x; 

    bool found=false; 

    for(int a=1; a<=x; a++){
    	for(int b=1; b<=x; b++){
    		if(a%b==0 && a*b>x && (a/b)<x){
    			found=true; 
    			cout << a << " " << b << endl; 
    		}
    		if(found)
    			return 0;
    	}

    }

    if(!found)
    	cout << -1 << endl;


    return 0; 
}
