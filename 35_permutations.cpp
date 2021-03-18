#include<iostream>
#include <cmath>
#include<iomanip>

using namespace std;

int a[] = {2,3,4,5};

void display(int arr[], int size){
	for (int i = 0; i<size; i++){
		cout<<a[i]<<setw(2);
	}
	cout<<endl<<setw(1);
}

void permutations(int* a, int size, int x){
	if (size == 0){
		// cout<<*a;
		display(a, 4);
	}
	else{
		for (int i = x; i<size; i++){
			// int* nxt = a+i;
			swap(*a, *(a+i));
			display(a, size);
			permutations(a, size-i, i);
		}
	}


	// cout<<*(a+1)<<endl;
	// cout<<a;
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}


int main(){	

	int length;
	length = sizeof(a)/sizeof(a[0]);

	// for(int i = 0; i<length; i++)
	permutations(a, 4, 1);
	display(a, length);

	swap(a, a+1);

	display(a, length);

	return 0;
}