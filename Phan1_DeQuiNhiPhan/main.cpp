#include <iostream>

using namespace std;
int fib(int n){
	if(n<=2){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}
int main(int argc, char** argv) {
	cout<<fib(6);
	return 0;
}
