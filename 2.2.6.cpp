#include <iostream>
#include <math.h>
using namespace std;
double fact(int n);
double func(double x, int n);
double func2(double x, int n);

int main(void) {
	int n;
    double x, siny, rez, e;
  	cout<<"Enter x ";
    cin>>x;
    cout<<"Enter e ";
    cin>>e;
 	 while(e <= 0){
        rewind(stdin);
        cout<<"Enter e ";
        cin>>e;
    }
    e = fabs(e);
    siny = sin(x);
    rez = 0;
    n = 0;
    for (int i = 1; i < 10000; i++){
        rez = func2(x, i);
        if (fabs(siny - rez) < e){
            n = i;
            break;
        }
    }
    cout<< "sin value is ";
	 cout<<siny;
    cout<< "  Right part value  ";
	cout<< rez; 
 
    return 0;
}
double fact(int n){
    double res = 1;
    for (int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

double func(double x, int n){
    double res = 0;
    for (int i = 1; i <= n; i++){
        res += pow((-1), i - 1) * pow(x, 2 * i - 1) / fact(2 * i - 1);
    }
    return res;
}

double func2(double x, int n){
    if (n == 0)
      return 0;
    double result = pow((-1), n - 1) * pow(x, 2 * n - 1) / fact(2 * n - 1);
    double q = result + func2(x, n - 1);
    return q;
}


