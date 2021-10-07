#include <iostream>

using namespace std;

int main(){

    int data ;
    float grade , rata , jumlah ,nilai  ;

    cout<< "Tentukan Grade Siswa\n\n" ;
    cout<< "Masukan Jumlah data :" ;
    cin>>data;
    cout<<endl;

    for (int i = 1; i <= data; i++)
    {
        cout<<"Masukan Nilai ke-" <<i<<":";
        cin>>nilai;

        cout<<"Grade nya adalah :";
		
		if(nilai >=85){cout<<"A"<<endl;}
		else if(nilai >=70){cout<<"B"<<endl;}
		else if(nilai >=60){cout<<"C"<<endl;}
		else if(nilai >=55){cout<<"D"<<endl;}
		else {cout<<"E"<<endl;}	
        jumlah = jumlah + 0;
        cout <<endl ;

        jumlah = jumlah + nilai ;

    }

    cout<<"\n Semua Jumlah nilai nya :" <<jumlah ;
    
    rata = jumlah / data ;
    cout<<"\n Nilai rata rata nya adalah : "<<rata;
    
}