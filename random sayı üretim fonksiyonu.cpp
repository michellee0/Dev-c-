#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int value,i;
	for (i=0; i<10; i++){
		value=1+ rand()%1000;
		cout << value << " ";
	}
	cin.get();
}
