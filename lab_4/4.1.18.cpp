#include <stdio.h>
unsigned int StoI( unsigned int &num, const char * str){
	num = 0;
	while (*str == ' ') str++;
	if((*str < '0'&& *str > '9') || !*str) return 1;
	unsigned int y =StoI(num, str + 1);
	num +=(*str -'0') * y;
	
	return y *10;
}
int main(){
	char *chr ="373232";
	unsigned int x;
	StoI(x,chr);
	printf ("%d",x);
	return 0;
}

