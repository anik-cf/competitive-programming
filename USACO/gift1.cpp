/*
TASK: gift1
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
   
    READ("gift1.in");
    WRITE("gift1.out");
    ios_base::sync_with_stdio(0); cin.tie(0);
   
    vector<string>name;
    vi balance;
    int n; 
    cin >> n; 
    
   	for(int i=0; i<n; i++){
    	string s; cin >> s; 
    	name.pb(s);
    	balance.pb(0);
	}
	
	for(int i=0; i<n; i++){

		string s; cin >> s; 
		int amount, toperson;
		cin >> amount >> toperson;
		int pergetter=0;
		
		if(toperson>0){
			pergetter=amount/toperson; 
			int remains = amount%toperson; 
			
			for(int j=0; j<n; j++){
				if(s==name[j]){
					balance[j]-=amount;
					balance[j]+=remains; 
					break; 
				}	
			}				
		}
		
		for(int k=0; k<toperson; k++){
			string getter; cin>>getter; 
			for(int loc=0; loc<n; loc++){
				if(name[loc]==getter){
					balance[loc]+=pergetter; 
				}
			}
		}
	}
	
	
	for(int i=0; i<name.size(); i++){
		cout << name[i] << " " << balance[i] << endl;
	}
	
   
}
