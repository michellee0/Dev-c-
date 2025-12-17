#include <iostream>
using namespace std;
int main(){
	int secim;
	cout << "lutfen bir secim yapin (1-4):";
	cin >> secim;
	
	switch (secim){
		case 1:
			cout <<"secim 1: Bilgisayar bilimi" << endl;  break;
	    case 2:
	    	cout << "secim 2: Matematik" << endl; break;
	    case 3:
	    	cout << "secim 3: Fizik " << 
			endl; break;
	    case 4: 
	        cout << "secim 4: Kimya " << endl ; break;
	    default:
	    	cout << "Gecersiz! lutfen 1 ile 4 arasinda bir sayi seciniz." << endl;
	}
	return 0;
}
