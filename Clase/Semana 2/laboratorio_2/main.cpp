#include <iostream>
#include "string"
using namespace std;
/* Danny Velásquez Cadenas*/

int main(int argc, char** argv) {
	
	int a = 100;
	int i = 0;
	while(a<400){
	a++;
	i++;
	if(a==10){
		cout<<"El valor es 10"<<endl;
	}else if (a==20){
		cout<<"El valor es 20"<<endl;
	}else if (a==30){
		cout<<"El valor es 30"<<endl;
	}else{
		cout<<i<<".- El valor no es 10, 20 o 30"<<endl;
	}
    }
	cout<<"El valor exacto es "<<a<<endl;
	return 0;
}
