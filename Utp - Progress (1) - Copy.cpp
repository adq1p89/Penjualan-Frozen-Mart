#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
string pembuat[100]={"M. Abdul Adhim","Adilla Aulia Desriyanti","Angga Bagus Susilo"};
int bakso();
int daging();
int seafooddandumpling();
int hitung(int jumlah,int harga,string tipestr);
string tipestr;
int harga,uang,jumlah,kembalian;

void header(){
	cout<<"|<<>><<>><<>><<>><<>><<>><<>><<>><<>><<|<<>><<>><<>><<>><<>><<>><<>><<>><<>><<|"<<endl;
	cout<<"|><><><><><><><><>><><><><><><| + Welcome  to + |><><><><><><><><>><><><><><><|"<<endl;
	cout<<"|><><><><><><><><>><><><><>| + FREZZ FROZEN MART + |<><><><><><><><>><><><><><|"<<endl;
	cout<<"|><><><><><><><><>><><><><><><| + ----------- + |><><><><><><>><><><><><><><><|"<<endl;
	cout<<"|<<>><<>><<>><<>><<>><<>><<>><<>><<>><<|<<>><<>><<>><<>><<>><<>><<>><<>><<>><<|"<<endl;
}

void footer () {
	cout<<"|><><><><><><><><><><><><><| - Have a Frezz Day - |><><><><><><><><><><><><><>|"<<endl;
	cout<<"|<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><|"<<endl;
}

int main(){
	int menu;
	do{
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" Ada Yang Bisa Kami Bantu? ^^ "<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<" | [1] Pembelian                                                             |"<<endl;
		cout<<" | [2] Keluar                                                                |"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<endl;
		cout<<" Masukkan Pilihan Anda [1/2]: ";
        cin>>menu;
		//Jika mengitputkan angka 1 maka akan masuk ke daftar pembelian
		if(menu==1){
			int makanan;
			system("cls");
			header();
			cout<<endl;
			cout<<endl;
			cout<<" Pilihan Frozen Food Yang Tersedia"<<endl;
			cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
			cout<<" | 1. Bakso                                                                  |"<<endl;
			cout<<" | 2. Daging                                                                 |"<<endl;
			cout<<" | 3. Seafood dan Dumpling                                                   |"<<endl;
			cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
			cout<<endl;
			cout<<"Masukan Pilihan Yang Anda inginkan [1/2/3] : ";
			cin>>makanan;
			if(makanan==1){
				bakso();
			}else if(makanan==2){
				daging();
			}else if(makanan==3){
				seafooddandumpling();
			}else{
                system("cls");
                header();
                cout<<endl;
                cout<<endl;
				cout<<"Maaf Pilihan Tidak Tersedia"<<endl;
				cout<<endl;
				cout<<endl;
				footer();
                getch();
			}

		}else if(menu==2){

			system("cls");
			header();
			cout<<endl;
			cout<<endl;
			cout<<"Program ini dibuat oleh: "<<endl;
			cout<<endl;
			cout<<"- "<<pembuat[0]<<endl;
			cout<<"- "<<pembuat[1]<<endl;
			cout<<"- "<<pembuat[2]<<endl;
			cout<<endl;
			cout<<"|>>>>>>>>>>>>>>>>>>>>>>>>|SEMOGA HARI MU MENYENANGKAN|<<<<<<<<<<<<<<<<<<<<<<<<|"<<endl;
			cout<<endl;
		}
		else{
			system("cls");
			header();
			cout<<endl;
			cout<<endl;
			cout<<"Pilihan Tidak Ada"<<endl;
			cout<<endl;
			cout<<endl;
			footer();
		}
	}
	while(menu==1);
}

int bakso(){
	int tipeint;
	int harga;
	string tipestr;
	system("cls");
	header();
	cout<<endl;
	cout<<endl;
	cout<<" Jenis-Jenis Bakso"<<endl;
	cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<" | 1. Bakso Son Haji SONY (750 gr)                                           |"<<endl;
	cout<<" | 2. Bakso Udang Shifudo (500 gr)                                           |"<<endl;
	cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<endl;
	cout<<" Tekan [1/2] untuk memilih bakso: ";
	cin>>tipeint;
	if(tipeint==1){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<" | Bakso Son Haji SONY (750 gr)                                              |"<<endl;
		cout<<" | Harga : RP. 152.000                                                       |"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Bakso Son Haji SONY (750 gr)";
		harga=152000;
		hitung(jumlah,harga,tipestr);

	}else if(tipeint==2){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<" | Bakso Udang Shifudo (500 gr)                                              |"<<endl;
		cout<<" | Harga : RP. 25.000                                                        |"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Bakso Udang Shifudo (500 gr)";
		harga=25000;
		hitung(jumlah,harga,tipestr);
	}else{
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<"Pilihan Tidak Ada"<<endl;
	}cout<<endl;
	 footer ();
	 getch();
}

int daging(){
	int tipeint;
	int harga;
	string tipestr;
	system("cls");
	header();
	cout<<endl;
	cout<<endl;
	cout<<" Jenis-Jenis Daging"<<endl;
	cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<" | 1. Daging Sapi (1 Kg)                                                     |"<<endl;
	cout<<" | 2. Daging Kambing (500 gr)                                                |"<<endl;
	cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<endl;
	cout<<" Tekan [1/2]untuk memilih daging: ";
	cin>>tipeint;
	if(tipeint==1){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"  | Daging Sapi (1 Kg)"<<endl;
		cout<<"  | Harga : RP. 152.000"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Daging Sapi (1 Kg)";
		harga=106000;
		hitung(jumlah,harga,tipestr);
	}else if(tipeint==2){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<" | Daging Kambing (500 gr)"<<endl;
		cout<<" | Harga : RP. 72.000"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Daging Kambing (500 gr)";
		harga=72000;
		hitung(jumlah,harga,tipestr);
	}else{
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<"Pilihan Tidak Ada"<<endl;
		cout<<endl;
		cout<<endl;
	} footer ();
	getch();
}

int seafooddandumpling(){
	int tipeint;
	int harga;
	string tipestr;
	system("cls");
	header();
	cout<<endl;
	cout<<endl;
	cout<<" Jenis-Jenis Seafood dan Sejenis"<<endl;
	cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<" | 1. Dumpling Keju (500 gr)                                                 |"<<endl;
	cout<<" | 2. Chikuwa Cedea (500 gr)                                                 |"<<endl;
	cout<<" | 3. Nugget Ikan (500 gr)                                                   |"<<endl;
	cout<<" | 4. Fishroll Cedea (1 Kg)                                                  |"<<endl;
	cout<<" | 5. Udang Kupas Frozen M (500 gr)                                          |"<<endl;
	cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<endl;
	cout<<" Tekan [1/2/3/4/5]untuk memilih daging: ";
	cin>>tipeint;
	if(tipeint==1){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<" | Dumpling Keju (500 gr)"<<endl;
		cout<<" | Harga : RP. 30.000"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Dumpling Keju (500 gr)";
		harga=30000;
		hitung(jumlah,harga,tipestr);
	}else if(tipeint==2){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"	| Chikuwa Cedea (500 gr)"<<endl;
		cout<<" | Harga : RP. 24.000"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Chikuwa Cedea (500 gr)";
		harga=24000;
		hitung(jumlah,harga,tipestr);
	}else if(tipeint==3){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"	| Nugget Ikan (500 gr)"<<endl;
		cout<<" | Harga : RP. 24.000"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Nugget Ikan (500 gr)";
		harga=24000;
		hitung(jumlah,harga,tipestr);
	}else if(tipeint==4){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"	| Fishroll Cedea (1 Kg)"<<endl;
		cout<<" | Harga : RP. 52.000"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Fishroll Cedea (1 Kg)";
		harga=52000;
		hitung(jumlah,harga,tipestr);
	}else if(tipeint==5){
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"	| Udang Kupas Frozen M (500 gr)"<<endl;
		cout<<" | Harga : RP. 60.000"<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		tipestr="Udang Kupas Frozen M (500 gr)";
		harga=60000;
		hitung(jumlah,harga,tipestr);
	}
	else{
		system("cls");
		header();
		cout<<endl;
		cout<<endl;
		cout<<"Pilihan Tidak Ada"<<endl;
		cout<<endl;
		cout<<endl;
	} footer ();
	getch();
}

int hitung(int jumlah,int harga,string tipestr){
    char yakin;

	cout<<endl;
    cout<<" Apakah jadi beli[Y/T]? : ";cin>>yakin;
    cout<<endl;
    if(yakin=='Y'||yakin=='y'){

    }else{
        main();
    }
	cout<<" Jumlah yang ingin anda beli: ";cin>>jumlah;
	cout<<" Masukkan Uang Anda: Rp.";cin>>uang;
	cout<<endl;
	system("cls");
	int bayar=jumlah*harga;
	if(uang>=bayar){
        header();
		kembalian=uang-bayar;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<endl;
        cout<<" Makanan yang dibeli: "<<tipestr<<endl;
        cout<<" Sebanyak "<<jumlah<<" buah."<<endl;
		cout<<" Kembalian Anda: Rp."<<kembalian<<endl;
		cout<<endl;
		cout<<" - Terima Kasih Sudah Membeli ^^ -"<<endl;
		cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<endl;
        footer();
	}else{
	    header();
	    cout<<endl;
	    cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	    cout<<endl;
	    cout<<" - Maaf uang anda tidak cukup :( -"<<endl;
	    cout<<endl;
		cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<endl;
		footer();
	}
    getch();
}
