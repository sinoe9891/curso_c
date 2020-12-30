#include <iostream>
#include <stdlib.h>
#include <time.h>



using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	//variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
	while(true){
	int num = 1 + rand() % (10) ;
	
	cout<<num<<endl;	
	}
	
	return 0;
}

