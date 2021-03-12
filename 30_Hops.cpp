#include <iostream>
using namespace std;

// int a[] = {2,0,1,0};
int a[] = {2,3,-1,0,1};

int hops(int *a, int size){
	int cnt = 0;
	int lastIndex = size-1;

	while(cnt<(size-1)){
		if (*(a+cnt) == 0){
			return 0;
		}

		cnt+=(*(a+cnt));
		// cout<<cnt<<endl;
	}
	if(cnt == lastIndex){
		return 1;
	}
	else{
		return 0;
	}
}


int main(){
	int b = hops(&a[0], sizeof(a)/sizeof(a[0]));
	cout<<b<<endl;
	return 0;
}