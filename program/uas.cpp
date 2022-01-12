/*	
Nama Project		: Pemesanan Menu Lazatto
Nama				: Muhammad Ulwanuddin
NIM	        		: 2130511077
Tugas				: UAS
Mata Kuliah			: Dasar Pemrograman
*/

#include <iostream>
#include <string.h>

using namespace std;

#define ppn 0.10 //PPN = 10%
const int diskon = 15000;

int main()
	{
	char nama[50], menu[50], back;
	int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian,
		harga[5]={10500, 16000, 16000, 15000, 15000}, i=0;
	bool saldo;

	do{
		system("cls");
		cout << "====================================== Lazatto ==============================" <<endl;
		cout << "============================== Fried Chicken & Burger =======================" <<endl;
		cout << endl;
		cout << "Masukkan Nama : " ; 
		cin >> nama; 
		cout << "Pilihan menu yang tersedia---"<<endl;
		cout << "--------------------------------------------------------------------------" <<endl;
		cout << "|	[1] Fried Chicken Paha Atas           = Rp. 10.500                |" <<endl;
		cout << "|	[2] Paket Nasi (+Ayam, Nasi & Milo)   = Rp. 16.000                |" <<endl;
		cout << "|	[3] Burger Premium Cheese             = Rp. 16.000                |" <<endl;
		cout << "|	[4] Sadazz Dada/Paha Atas             = Rp. 15.000                |" <<endl;
		cout << "|	[5] Ayam Geprek + Nasi                = Rp. 15.000                |" <<endl;
		cout << "--------------------------------------------------------------------------" <<endl;
		
		cout << "			(Masukkan Menu Makanan berdasarkan Nomor)" <<endl;
		cout << " Silahkan Pilih Menu Makanan : "; 
		cin >> makanan;
		
		
		switch(makanan)
		{
			case 1:
				strcpy(menu,"Fried Chicken Paha Atas");
				break;
			case 2:
				strcpy(menu,"Paket Nasi (+Ayam, Nasi & Milo)");
				i=1;
				break;
			case 3:
				strcpy(menu,"Burger Premium Cheese");
				i=2;
				break;
			case 4:
				strcpy(menu,"Sadazz Dada/Paha Atas");
				i=3;
				break;
			case 5:
				strcpy(menu,"Ayam Geprek + Nasi");
				i=4;
				break;
			default:
				cout << "Pilihan menu yang anda pilih tidak tersedia..." << endl;
				goto ulang;
		}
		
		cout<<"	Anda memilih " << menu <<endl;
		cout<<endl;
		cout<<"Jumlah makanan yang dibeli : ";
		cin>> jumlah;

		system("cls");
		makan = jumlah * harga[i];
		pajak   = makan * ppn;
		total   = pajak + makan;
		cout << endl;
		cout << "-----------------------------------------------------" << endl;
		cout << "|  	          Lazatto		                     |" << endl;
		cout << "-----------------------------------------------------" << endl;
		cout << "\tNama Pemesan          : "	<< nama     <<endl;
		cout << "\tMenu Makanan          : "	<< menu     <<endl;
		cout << "\tJumlah Makanan        : "	<< jumlah   <<" porsi" <<endl;
		cout << "\tHarga Makanan         : "	<< harga[i] << " * "   << jumlah << endl;
		cout << "\tPajak Restaurant      : "	<< pajak    <<endl;	
		cout << "\tTotal Pembayaran      : Rp " << total    <<endl;
		
		if(jumlah>=4)
		{
			bonus = total - diskon;
			total = bonus;
			cout << endl;
			cout << "# Anda mendapatkan diskon Potongan Harga : Rp. " << diskon <<" #"<< endl;
			cout << "Total Pembayaran Setelah diskon  : Rp "<< total << endl;
		}
		
		cout << "--------------------------------------------" << endl;
		cout << "Silahkan bayar disini 		 : Rp."; 		cin>>bayar;
		cout << endl;
				
		while (saldo=bayar<total)
		{
			cout << "Saldo anda kurang, Silahkan bayar lagi : Rp. "; 
			cin >> kurang;
			bayar+=kurang;
		};
		
		kembalian=bayar-total;
		cout << "Uang yang anda bayar \t\t\t Rp. " << bayar << endl;
		cout << "Uang kembalian \t\t\t\t Rp. "     << kembalian << endl;
		cout << "##################################################"<< endl;
		
		ulang:
			cout << "			[Y = ya / T = tidak]" << endl;
			cout << "		Apakah anda ingin memesan lagi ? [Y/T]  =  "; 
			cin >> back;
		}
		while (back=='Y'||back=='y');
		cout << endl;
		cout << "		Terima kasih telah Memesan Makanan di Lazatto" << endl;	
		cout << "			Selamat Menikmati"<< endl;
		
		return 0;
	}
# program 
