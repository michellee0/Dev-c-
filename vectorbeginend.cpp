#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec;
	for (int i=1; i<=5; i++)
	vec.push_back(i);
	vector<int>::iterator it;
	cout << "vector contents:" << endl;
	for (it = vec.begin() ; it !=vec.end(); ++it)
    cout << *it<< endl;
    return 0;
}
