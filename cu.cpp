#include <iostream>
#include <string>
using namespace std;
char f(string cu,int i,char kucuk){
 if (cu[i]=='\0')
 {
 	return kucuk;
 }
	else if (cu[i]<kucuk)
		{
			kucuk=cu[i];
			return f(cu,i+1,kucuk);
		}
	
	else return f(cu,i+1,kucuk);
}

int main()
{
	int i=0;
	string cu;
	getline(cin,cu);
	char kucuk=cu[i];
	cout<<f(cu,i,kucuk);
	
	return 0;
}
	

