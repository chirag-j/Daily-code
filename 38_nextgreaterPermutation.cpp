#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void display(vector<int> v){
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	// vector<int> v1 = {1,2,3};
	vector<int> v1 = {4,5,3,1,2};
	// vector<int> v1 = {2,1,3};
	// vector<int> v1 = {2,3,1};
	// vector<int> v1 = {3,1,2};
	// vector<int> v1 = {3,2,1};
	int &mv = v1[v1.size()-1];
	display(v1);
	for(int i=v1.size()-1; i!=0; i--){
		if(mv>v1[i] && mv){
			int &mv = v1[i];
		}

		if(v1[i-1]<v1[i]){
			swap(mv,v1[i-1]);
			display(v1);
			break;
		}
	}

	return 0;
}