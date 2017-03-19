#include <iostream>
#include <fstream>
using namespace std;
int count = 0;
	bool**CreateNew(){
		bool** field = new bool * [8];
		for (int i = 0; i < 8; i++){
			field[i] = new bool [8];
		for(int j = 0; j < 8; j++)
				field[i][j] = false;
		}
	return field;	
	}
	
	void Print ( bool ** field){
		ofstream file;
		file. open ("ChestTask.txt", ios::app);
		file << "Variant is " << count<<endl;
		for (int i = 0; i<8; i++) {
			for (int j = 0; j<8; j++)
				file << field[i][j]<< " ";
				file<<endl;
		}
		file.close();
	}
		 
 	bool ** Copy ( bool**  source){
	 	bool** copy =CreateNew();
		for (int i = 0; i<8; i++) 
			for (int j = 0; j<8; j++)
				copy [i][j] =  source[i][j];
	return copy;	
	}
	
	 bool IsPossible(bool** field, int row, int col){
	 	if (field[row][col])
	 	return false;
	 
	 for ( int i = 0; i<row; i++){
	 	if ( field [i][col]) 
	 	return false;
	 }
	 	 for ( int j = 0; j<col; j++){
	 	if ( field [row][j])  
	 	return false;
	 	}
	 	 for( int i = row -1, j = col -1; i >= 0 && j >= 0; i--, j--){
	 	 	if ( field [i][j])
	 	 	return false;
		  }
		  
		   for( int i = row -1, j = col + 1; i >= 0 && j < 8 ; i--, j++){
	 	 	if ( field [i][j])
	 	 	return false;
		  }
		  return true;
	}
	void Deletefield (bool** field){
		 for( int i = 0; i<8; i++){
		 	delete []  field [i];
		 	delete []field;
		 }
	}
	void GameMethod (int n, int row = 0, int col = 0, bool ** field = nullptr ){
		if (field ==  nullptr){
			field = CreateNew();
		}
		if (n <=0 ){
			count++;
			Print (field);
			Deletefield (field);
			return;
		}
		for ( int i=row; i< 8; i++){
			for ( int j = col; j< 8; j++){
				bool result = IsPossible(field , i ,j);
				if (result){
					bool** copy = Copy(field);
					copy [i][j] = true;
					if ( n == 5)
					n= 5;
					GameMethod(n-1, i, j, copy);
					}
				}
				col = 0;
			}
			Deletefield(field);
		}
		
		int main(){
			ofstream file;
			file.open("ChestTask.txt");
			file.close();
			GameMethod(8);
			system ("pause");
					return 0;
		}
