#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void display(vector<int>);

void rotateLeft(vector<int> &v, int k){
	for(int i = 0; i<k; i++){
		v.push_back(v[0]);
		v.erase(v.begin());
	display(v);
	}
}

int main(){
	std::vector<int> v = {1,2,3,4,5,6};
	int k = 4;
	rotateLeft(v, k);

	return 0;
}


void display(vector<int> x){
	for(int i = 0; i<x.size(); i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}