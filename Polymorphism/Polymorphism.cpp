#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	//virtual void pesan(){
		//cout<<"Pesan dari seseorang"<<endl;
	//}
	//virtual void cetak() = 0;
	virtual void cetak() {

	}
};

class joko : public seseorang {
public:
	void pesan() {
		cout << "Pesan dari joko" << endl;
	}
	void cetak() {
		cout << "Pesan dari lia" << endl;
	}
};