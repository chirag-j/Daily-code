#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> comSub(vector<vector<int>> input){
	// vector<int> temp = {input[0][0], input[0][0]};
	vector<int> temp;
	int m1=0;
	//find max value at 0th loc
	for(int i = 0; i<input.size(); i++){
		if(input[i][0]>m1){
			m1 = input[i][0];
		}
	}
	//

	temp = {m1,m1};
	cout<<temp[0]<<" "<<temp[1]<<endl;

	for(int i = 0; i<input.size(); i++){
		if(temp[0]>=input[i][1]){
			temp[0] = input[i][1];
		}
		else if(temp[1]<=input[i][0]){
			temp[1] = input[i][0];
		}
		cout<<temp[0]<<" "<<temp[1]<<endl;
	}
	return temp;
}


int main(){
	vector<vector<int>> input = {{2,6},{0,3},{3,4},{6,9}};
	// vector<vector<int>> input = {{2,6},{0,3},{3,4},{6,9}, {10,12}};

	std::vector<int> output = comSub(input);
	cout<<output[0]<<" "<<output[1]<<endl;
	return 0;
}

