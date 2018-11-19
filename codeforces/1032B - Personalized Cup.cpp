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
    //tWRITE("out.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);

	string s;


	cin >> s;
	int l = s.length(); 
	int rowNeeded = ceil((double)l/20);
	int cellNeeded;  
	for(int i=1; i<=100; i++){
		int d = rowNeeded*i; 
		if(d-l>=0){
			cellNeeded = d; 
			break; 
		}
	}
	int perLine = cellNeeded/rowNeeded;
	int asterNeeded = cellNeeded-l; 

	cout << rowNeeded << " " << perLine << endl;
	if(asterNeeded==1){
		for(int i=0; i<l; i++){
			cout << s[i]; 
			if( (i+1)%perLine==0 )
				cout << endl; 
			if(i==l-1)
				cout << "*"; 
		}
	}else if(asterNeeded==2){
		cout << "*"; 
		int lastIndex=0; 
		for(int i=1; i<=rowNeeded; i++){

			if(i==1){
				for(int j=0; j<perLine-1; j++){
					cout << s[j];
					lastIndex=j+1; 
				}
				cout << endl; 
				continue;
			}

			if(i!=1 && i!=rowNeeded){
			int countIt = lastIndex+perLine; 
			for(int st = lastIndex; st<countIt; st++){
				cout << s[st];
				lastIndex=st+1; 
			}
			cout << endl;
			}

			if(i==rowNeeded){
				int countIt = lastIndex+perLine; 
				for(int j=lastIndex; j<countIt-1; j++){
					cout << s[j];
				}
				cout << "*";
			}
		}
	}else if(asterNeeded==3){
		cout << "*"; 
		int lastIndex=0; 
		for(int i=1; i<=rowNeeded; i++){

			if(i==1){
				for(int j=0; j<perLine-1; j++){
					cout << s[j];
					lastIndex=j+1; 
				}
				cout << endl; 
				continue;
			}

			if(i==2){
				cout << "*"; 
				int countIt = lastIndex+perLine;
				for(int j=lastIndex; j<countIt-1; j++){
					cout << s[j];
					lastIndex=j+1; 
				}
				cout << endl; 
				continue;
			}

			if(i!=1 && i!=2 && i!=rowNeeded){
			int countIt = lastIndex+perLine; 
			for(int st = lastIndex; st<countIt; st++){
				cout << s[st];
				lastIndex=st+1; 
			}
			cout << endl;
			}

			if(i==rowNeeded){
				int countIt = lastIndex+perLine; 
				for(int j=lastIndex; j<countIt-1; j++){
					cout << s[j];
				}
				cout << "*";
			}
		}

	}else if(asterNeeded==4){
		cout << "*"; 
		int lastIndex=0; 
		for(int i=1; i<=rowNeeded; i++){

			if(i==1){
				for(int j=0; j<perLine-1; j++){
					cout << s[j];
					lastIndex=j+1; 
				}
				cout << endl; 
				continue;
			}

			if(i==2){
				cout << "*"; 
				int countIt = lastIndex+perLine;
				for(int j=lastIndex; j<countIt-1; j++){
					cout << s[j];
					lastIndex=j+1; 
				}
				cout << endl; 
				continue;
			}

			if(i==3){
				cout << "*"; 
				int countIt = lastIndex+perLine;
				for(int j=lastIndex; j<countIt-1; j++){
					cout << s[j];
					lastIndex=j+1; 
				}
				cout << endl; 
				continue;
			}

			if(i!=1 && i!=2 && i!=3 && i!=rowNeeded){
			int countIt = lastIndex+perLine; 
			for(int st = lastIndex; st<countIt; st++){
				cout << s[st];
				lastIndex=st+1; 
			}
			cout << endl;
			}

			if(i==rowNeeded){
				int countIt = lastIndex+perLine; 
				for(int j=lastIndex; j<countIt-1; j++){
					cout << s[j];
				}
				cout << "*";
			}
		}

	

	}else{
	
		for(int i=0; i<l; i++){
			cout << s[i]; 
			if( (i+1)%perLine==0 )
				cout << endl; 
		}
	}
	cout << endl; 
	
    return 0; 
}
