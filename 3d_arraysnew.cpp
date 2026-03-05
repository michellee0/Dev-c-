#include <iostream>
using namespace std;

int main ()	{
	int array[4][2][3];
	cout<<"3D dizinin 24 adet elemanlarini giriniz!\n";

	for (int i=0;i<4;++i) 
	{
		for (int j = 0; j < 2; ++j) 
				{
				for(int k=0;k<3;++k)
	{
					cin>> array[i][j][k]; 
				}
		}
	}
	cout<<"\n Degerler Gosteriliyor"<<endl;
	
		for (int i=0;i<4;++i)
	{
		for (int j = 0; j < 2; ++j) 
				{
				for(int k=0;k<3;++k) 
	{
					cout<< "array["<<i<<"]["<<j<<"]["<<k<<"]="<<array[i][j][k]<<endl;
				}
		}
	}
	
	return 0;
}
	
