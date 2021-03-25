#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
void display(vector<int> v);
void display(vector<vector<int>> v);

int maxCoin(vector<vector<int>> arr){
	// initialize zero filled array
	int h = arr.size(), w = arr[0].size();     //h = 3, w = 4
	vector<vector<int>> cum;
	vector<int> tzero(w, 0);
	for(int i = 0; i<h; i++){
		cum.push_back(tzero);
	}
	display(cum);
	// initialization done
	cum[h-1][w-1] = arr[h-1][w-1];
	for(int i = h-1; i>=0; i--){
		for(int j = w-1; j>=0; j--){
			if(j>0 && cum[i][j-1] < arr[i][j-1]+cum[i][j]){
				cum[i][j-1] = arr[i][j-1]+cum[i][j];	
			}
			if(i>0 && cum[i-1][j] < arr[i-1][j]+cum[i][j]){
				cum[i-1][j] = arr[i-1][j]+cum[i][j];	
			}
			display(cum);
		}
	}
	return cum[0][0];
}

int main(){
	vector<vector<int>> arr = {{0,3,1,1},
							   {2,0,0,4},
							   {1,5,3,1}};

	// vector<vector<int>> arr1 = {{12,12,7,6},
	// 						    {12,9,5,5},
	// 						    {10,9,4,1}};

	// vector<vector<int>> arr = {{0,12,6,6},
	// 						   {10,9,5,5},
	// 						   {10,9,4,1}};
	display(arr);
	cout<<"Coins collected : "<<maxCoin(arr)<<endl;
	return 0;
}



void display(vector<int> v){
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void display(vector<vector<int>> v){
	for(int i = 0; i<v.size(); i++){
		display(v[i]);
	}
	cout<<endl;
}	


// Good morning! Here's your coding interview problem for today.
// This question was asked by Zillow.
// You are given a 2-d matrix where each cell represents number of coins in that cell. 
// Assuming we start at matrix[0][0], and can only move right or down, 
// find the maximum number of coins you can collect by the bottom right corner.
// For example, in this matrix

// 0 3 1 1
// 2 0 0 4
// 1 5 3 1
// The most we can collect is 0 + 2 + 1 + 5 + 3 + 1 = 12 coins.