#include <iostream>
#include <math.h>
#define SIZE 365
#define NAME_SIZE 20
using namespace std;
	struct Bank {
		double cash;// сумма котор положили на счет
		char name[NAME_SIZE];// имя банка
		double dopcash;
		double percent[SIZE];
		
	};
	
	void add(Bank *bank) {
		int a;
		cout<<"Enter ur cash  ";
		cin>>a;
		if (a<1){
			cout<<"Doesnt exist";
		}
		else {
			bank->cash=a;
			cout<<"Vklad was added!";
		}
 	}
    	double dop(Bank *bank) {
			int b;
			cout<<"Enter dop cash  ";
			cin>>b;
			if (b<1){
				 cout<<"Doesnt exist";}
			else {
			bank->dopcash += b;
			return  bank->dopcash;
			}	
		}
	void percentdop(Bank *bank) {
		int j=0;
		while (j < 365 ){ 
			if ( j == 0 ){
				bank->percent[j] = (bank->dopcash+bank->cash)+((bank->dopcash+bank->cash )*0.010625);
				bank->dopcash = (bank->dopcash+bank->cash)+((bank->dopcash+bank->cash )*0.010625);
				j++;
			}
				if (j % 31 == 0 ){
					bank->percent[j] = (bank->dopcash)+((bank->dopcash )*0.010625);
					bank->dopcash = (bank->dopcash)+((bank->dopcash)*0.010625);
				}
				else {
					bank->percent[j] = bank->dopcash;
				}
				j++;
		}	
	}
	void r(Bank *bank, int day){
		if ( day > 365){
			cout << "Ur vklad zavershen"<< bank->percent[364];}
		else 
			cout << bank->percent[day-1]<<endl;
	}
	void cashper (Bank *bank){
		int j=0;
		while (j<365){ 
			if ( j == 0 ){
				bank->percent[j] = (bank->cash)+((bank->cash )*0.010625);
				bank->dopcash = (bank->cash)+((bank->cash )*0.010625);
			}			
				if (  j % 31 == 0){
					bank->percent[j] = bank->cash+(bank->cash *0.010625);
					bank->cash=bank->cash+(bank->cash*0.010625);
				}
				else {
					bank->percent[j] = bank->cash ;
				}
				j++;	
		}
	}
	
	void myfunc (Bank *bank) {
		bank->dopcash=0;
	}
	
	
	int main() {
	int switcher=0;
	struct Bank bank[SIZE];
	myfunc(bank);
	while (switcher != 7) {
	cout<< endl<<endl;
	cout << "***************""\n1)Open deposit \n2)Extra investment to deposit \n";
	cout << "3)Deposit without interest \n4)Finish ur deposit.Calculate your interest   \n5)Balance check (day)\n6)Information\n";
	cout<<"7)Exit\n";
	cin>>switcher;	
	switch (switcher)
		{
		
		case 1: {
		    add(bank);
			break;
		}
		case 2: {
		    dop(bank);
			break;
		}
		case 3: {
			cout<<"Ostatok is "<<endl;
			cout<<bank->dopcash+bank->cash;
			break;
		}
		case 4: {	
			if (bank->dopcash > 0) percentdop(bank);
			else cashper(bank) ;
			cout<<"U made ur vklad";
			break;
		}
		case 5: {
			int day;
			cout<<"Enter the day ";
			cin>>day;
			r(bank, day) ;
			break;
		}
		case 6: {
			cout << "Belarusbank"<<endl<< "Adress: 220089, Minsk, Dzerzhinski ave, 18, Republic of Belarus" ;
			cout<<endl<<"Tel.: +375 17 2893814" <<endl<<"E-mail: info@belarusbank.by ";
			break;
		}
		case 7: {
			break;
		}
		
		}
	}
	return 0;
	}


