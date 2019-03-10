#include <iostream>
#include <cstdio>
using namespace std;

//for test

void function(int n){
	cout << n;
	while(n!=1){
		if (n%2==1)
			n = 3*n+1;
		else n = n/2;
		cout << ' ' << n ;
	}
}


int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n)!=EOF){
		function(n);
		cout << endl;
	}
	return 0;
}


