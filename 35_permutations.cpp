#include<iostream>
#include <cmath>
#include<vector>

using namespace std;


void display(vector<int> &a){
	for (int i = 0; i<a.size(); i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void permutations(int &a, int x){
	if (a.size() == 0){
		// cout<<*a;
		display(a);
	}
	else{
		for (int i = x; i<a.size(); i++){
			swap(a[0], a[i]);
			display(a);
			permutations(a, i);
		}
	}


	// cout<<*(a+1)<<endl;
	// cout<<a;
}

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}


int main(){	

	int length;
	std::vector<int> a = {2,3,4,5};

	// for(int i = 0; i<length; i++)
	// permutations(a, 1);
	display(a);



	// display(a, length);

	return 0;
}