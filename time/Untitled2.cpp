#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main(){
while (true){
	time_t now = time (NULL);
	tm* z =localtime(&now);
	cout << "saat: "
	<< z->tm_hour << ":"
	<< z->tm_min << ":"
	<< z->tm_sec << "\r"
	cout.flush();
	
	
}
return 0;
}
