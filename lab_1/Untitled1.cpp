#include <iostream>
using namespace std;
int main (){
	int n;
	scanf ("%i",&n);
	for(int i=0;i<100; i++){
		for(int j=0;j<100;j++){
			if (3*i+5*j==n){
			printf (" The 3 is %i", i);
			printf (" The 5 is %i\n ", j);
			}
		}
	}
}
