#include <iostream>
using namespace std;
int main(){
	int pemasukan,pengeluaran;
	cout<<"program untuk pemasukkan dan pengeluaran"<<endl;
	cout<<"Masukkan Jumlah Pemasukan = ";
	cin>>pemasukan;
	cout<<"Masukkan Jumlah Pengeluaran = ";
	cin>>pengeluaran;
	
	if(pemasukan<pengeluaran)
	{
		cout<<"pemasukan lebih kecil dari pengeluaran\n";
	}
	else if(pemasukan>pengeluaran)
	{
		cout<<"pemasukan lebih besar dari pengeluaran";
	}
	else
	cout<<"error";
}
