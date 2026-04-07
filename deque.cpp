#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> intQue;
	for (int i=1; i<=10; i++)
	intQue.push_back(i);
	intQue.insert(intQue.begin()+3,62);
	deque<int>::iterator it;
	cout << "mydeque contents" <<endl;
	for(it=intQue.begin(); it!=intQue.end(); ++it)
	cout << *it <<endl;
	return 0;
}
