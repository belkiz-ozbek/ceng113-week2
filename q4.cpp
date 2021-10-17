#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	double TL;
	TL=153.50;
	double dollar;
	dollar= TL*0.1123;
	printf("\n %f TL  = %f doooooollllllaaarrr\n\n",TL, dollar );
	
	double euro;
	euro= dollar*0.86443;
	printf("%f dooooollar  = %f EURODUUUUUUUR",dollar, euro );
	return 0;
}
