#include <iostream>
#include "string"
using namespace std;
/* Instanciar Clases */

class Cat{
	public:
		string Name;
		
		Cat(){
			Name = "Guapo";
		}
		
		Cat(string iName){
			Name = iName;
		}
		
		void Meow(){
			cout<<Name<< " dice Meow"<<endl;		
			}
};

int main(int argc, char** argv) {
	
	Cat MyFirstKitty;
	Cat MySecondKitty("Danny");
	
	cout<<MyFirstKitty.Name<<endl;
	cout<<MySecondKitty.Name<<endl;
	

	for(int i = 0; i<3; i++){
		MyFirstKitty.Meow();
	}
	return 0;
} 
