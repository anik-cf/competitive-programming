#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long double x, y;
	cin >> x >> y; 
	
	if(y*log(x)>x*log(y))
	cout << ">" << endl;
	else if(y*log(x)<x*log(y))
	cout << "<" << endl;
	else
	cout << "=" << endl; 
	
}
