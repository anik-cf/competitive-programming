#include <bits/stdc++.h>
using namespace std;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

	vector< pair<int, int> > v; 
	vector<pair<int, int> >problem; 

	int P, S; 
	cin >> P >> S; 

	int subtask[S+1]; 
	int solved[S+1];

	int index=0; 

	while(P--)
	{
		index++; 
		for(int i=0; i<S; i++)
			cin >> subtask[i];


		for(int i=0; i<S; i++)
			cin >> solved[i];

		for(int i=0; i<S; i++)
		problem.push_back(make_pair(subtask[i], solved[i])); 
		
		int n=0; 

		sort(problem.begin(), problem.end()); 

		for(int i=0; i<S-1; i++){
			//cout << problem[i].second << endl; 
			//cout << problem[i+1].second << endl;
 			if(problem[i].second>problem[i+1].second){
				n++; 
				//cout << "n = " <<  n << endl; 
			}
		}


		v.push_back(make_pair(n, index)); 
		problem.clear(); 


	}

	sort(v.begin(), v.end());

	for(int i=0; i<v.size(); i++){
		cout << v[i].second << endl; 

	} 
	


return 0;
}