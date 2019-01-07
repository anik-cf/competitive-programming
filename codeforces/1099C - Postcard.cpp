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
	Preparation Set Spring 2019

*/ 


using namespace std;
 

int main()
{
   
    //READ("in.txt");
    //WRITE("out.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);

    int k; 
    string s, str; 
    cin >> s; 
    cin >> k; 
    int l = s.length();
    int qmark=0, smark=0, charRemains=0;

    for(int i=0; i<l; i++){
    	
    	if(s[i]=='?')
    		qmark++;
    	
    	if(s[i]=='*')
    		smark++;
    }

    charRemains = l-qmark-smark; 

    for(int i=0; i<l; i++)
    {
    	if(s[i]=='?')
    	{
    		if(charRemains>k){
    			str.pop_back();
    			charRemains--; 
    		}
    	}
    	else if(s[i]=='*')
    	{
    		if(charRemains>k)
    		{
    		str.pop_back();
    		charRemains--; 
    		}else if(charRemains<k){
    			while(charRemains<k){
    				str+=str[str.size()-1]; 
    				charRemains++; 
    			}
    		}

    	}else{
    		str+=s[i]; 
    	}
    }

    if(k==str.size())
    	cout << str << endl; 
    else 
    	cout << "Impossible" << endl; 





    return 0; 
}
