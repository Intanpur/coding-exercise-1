// suhu ruangan
#include <iostream>
using namespace std;

int main(){
	cout<<"PROGRAM C++ KONVERSI SUHU DARI CELCIUS KE KELVIN,FAHRENHEIT, DAN REAMUR\n";
	float c,k,f,r;
	cout<<"Masukan Suhu : ";
	cin>>c;

	k =c+273;
	f =(c*1.8)+32;
	r =c*0.8;
	
	cout<<"\ncelcius :"<<c;
	cout<<"\nkelvin  : "<<k;
	cout<<"\nfahreinheit : "<<f;
	cout<<"\n reamur : "<<r;
	
	return 0;
}*/

//luas lingkaran
#include <iostream>
using namespace std;

int main(){
	int r;
	float phi;
	
	cout<<"Masukan Jari-Jari : ";
	cin>>r;
	
	phi=3.14;
	cout<<"Hasil Luas Lingkaran :"<<phi*r*r<<endl;
	
	return 0;
}


//Angka Baik
#include <iostream>

using namespace std;

int main() {
    int N;
    cout<<"Enter N :";
    cin >> N;

    int i = 1;
    while (i <= N) {
        if (i % 5 != 0) {
            if (i == 31) {
                cout << "NOT FOUND" << endl;
                break;
            }
            cout << i << endl;
        }
        i++;
    }

    return 0;
}

//introduce myself
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, class_name;
    int ddp_score;
    
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter class name: ";
    getline(cin, class_name);
    cout<<"Enter DDP score: ";
    cin >> ddp_score;

    int name_length = name.length(); 

    cout << "ijin memperkenalkan diri nama saya " << name << " dengan jumlah huruf " << name_length << ". saya mahasiswa S1 Ilmu Komputer dari kelas " << class_name << ". Nilai DDP saya adalah " << ddp_score << endl;

    return 0;
}
