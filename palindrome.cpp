#include <iostream>
using namespace std;

bool isPalindrome(int n){
	int reverse = 0;
	int temp = n;
	
	while( temp != 0){
		
		int digit = temp % 10;
		reverse = reverse * 10 + digit;
		temp = temp / 10;
	}
	if(n == reverse){
		return true;
	}
	else 
	return false;
}

int main(){
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	
	if(isPalindrome(num)){
		cout<<num<<" is a Palindrome.";
	}
	else{
		cout<<num<<" is not a Palindrome.";
	}
}
