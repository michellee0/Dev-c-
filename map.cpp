#include <iostream>
#include <map>
using namespace std;
int main(){
	map<char,int> charInt;
	charInt['b'] = 100;
	charInt['a'] = 200;
	charInt['c'] = 300;
	map<char,int>::iterator it;
	for(it=charInt.begin(); it!=charInt.end(); ++it)
	{
		cout << it->first << "=>" << it->second << endl;
	}
	return 0;
}
