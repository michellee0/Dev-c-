#include <iostream>
using namespace std;
bool is_prime(int check){
	int i;
	for (i=2; i<check; i++)
	{
		if (check%i == 0)
		return false;
	}
	return true;
}
void list_prime (int last_value)
{
	int i;
	for (i=1; i <= last_value; i++){
		if (is_prime(i) ==true )
		cout << i << " " ; 
	}
}
int main (){
	int value;
	cout << " Hangi sayiya kadar asallari görmek istersin? \n";
	cout << " [Gormek icin tam sayi girisi yapmalisin!] \n";
	cin >> value;
	cout << "iste sana 1 ile "<<value<<" arasindaki asal sayilar: \n ";
	list_prime(value);
	return 0;
}
