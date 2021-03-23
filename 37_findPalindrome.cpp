#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool isPalindrome(string s){
	string s1 = s;
	reverse(s1.begin(), s1.end());
	if(s1.compare(s) == 0){
		return 1;
	}
	else{
		return 0;
	}
}

bool tryPal(string s, int k){

	if(isPalindrome(s)){
		cout<<"Palindrome found : "<<s<<endl<<"k : "<<k<<endl;
		return 1;
	}
	else if(s.length() == 0 || k<=0){
		return 0;
	}
	string :: iterator itr1 = s.begin(), itr2 = s.end()-1;
	for (int i = 0; i < s.length(); ++i){
		if(*itr1 != *itr2){
			if(k>=1){
				char er = s[i];
				s.erase(i ,1);
				// cout<<s<<endl;
				if(tryPal(s, k-1) == 1){
					return 1;
				}
				else{
					s.insert(i,1,er);
					int temp = s.length()-i-1;
					er = s[temp];
					s.erase(temp ,1);
					// cout<<s<<endl;
					if(tryPal(s,k-1) == 1){
						return 1;
					}
					else{
						s.insert(temp,1,er);
					}
				}
			}
		}
		itr1++;
		itr2--;
	}
}

int main(){
	string given = "waterarfetawx";
	int k = 3;
	cout<<given<<endl;
	cout<<tryPal(given, k);

	// cout<<isPalindrome(given);

	// string :: iterator itr1 = given.begin(), itr2 = given.end();
	// itr2--;
	// itr2-=5;
	return 0;
}