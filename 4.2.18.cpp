#include <iostream>
#include <fstream>
#include <conio.h>
#include<string.h>
using namespace std;

 int main(){
 
	char **b = new char*[100]; 
		for (int i = 0; i < 100; i++)
		{
			 b[i] = new char[10]; 
		}
	int count = 0;
	ifstream in("file.txt");
		for (int i = 0; i<100; i++){
			in>>b[i];
			count++;
		if (strlen(b[i])<1)break;
		}
	in.close();
		
        /*	cout<<"Enter date"<<endl;
        	int day, month, year;
			cin>> day;
			cin>>month;
			cin>>year;
       		int _day[10], _month[10], _year[10];
       		int _count;
			for (int i = 4; strlen(b[i]); i+=6){
			_year[i] = atoi(b[i]); 
			_count++;
			if (year>_year[i])
			cout<< "Lekarstvo nomer "<<_count<<" "<<b[i-4]<<" isporcheno"<<endl;
			if (year<_year[i])
			cout<< "Lekarstvo "<<_count<<" "<<b[i-4]<<" vse norm"<<endl;
			else goto next;
		}
		next:
			for (int i = 3; strlen(b[i]); i+=6){
			_month[i] = atoi(b[i]); 
			_count++;
			if (month>_month[i])
			cout<< "Lekarstvo nomer "<<_count<<" "<<b[i-3]<<" isporcheno"<<endl;
			if (month<_month[i])
			cout<< "Lekarstvo "<<_count<<" "<<b[i-4]<<" vse norm"<<endl;
		}*/
		
		
	cout<<"Enter date"<<endl;
    int day, month, year, codedate;
	cin>> day;
	cin>>month;
	cin>>year;
	codedate = 365*year+30*month+day;
    int _codedate;
    int _count = 0;
    int price = 0;
       	for (int i = 0; strlen(b[i]); i+=6){
			_codedate = atoi(b[i+4])*365+atoi(b[i+3])*30+atoi(b[i+2]); 
		if (codedate > _codedate){
			cout<< "Medicine "<<_count<<" "<<b[i]<<" expiration date has expired"<<endl;
			price += atoi(b[i+5]);
				_count++;
		}
		if (codedate < _codedate){
			cout<< "Medicine "<<_count<<" "<<b[i]<<" all is well"<<endl;
			_count++;
		}
		}
		cout<<"OUR PRICE "<<price;
		
	return 0;
	}	
		

 
