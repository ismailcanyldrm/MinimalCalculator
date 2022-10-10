#include <iostream>
using namespace std;
int main()
{
	char islemci;
	double sayi1,sayi2;
	cout<<"bir operator seciniz (+, -, * , /): " ;
	cin>>islemci;
	cout<<"ilk sayiyi giriniz : ";
	cin>>sayi1;
	cout<<"ikinci sayiyi giriniz : ";
	cin>>sayi2;
	switch(islemci){
			case '+':
		cout<<sayi1<<"+"<<sayi2<<"="<<sayi1+sayi2;
		break;
			case '-':
		cout<<sayi1<<"-"<<sayi2<<"="<<sayi1-sayi2;
		break;
			case '*':
		cout<<sayi1<<"*"<<sayi2<<"="<<sayi1*sayi2;
		break;
			case '/':
		cout<<sayi1<<"/"<<sayi2<<"="<<sayi1/sayi2;
		break;
		default:printf("hata! operator yanlis girildi");
	}
return 0;	
}
