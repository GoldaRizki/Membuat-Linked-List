#include <iostream>

using namespace std;
struct point
{
	int angka = 0;
	point *next = NULL;

};

class LinkedList {

	point* head;
	
public:
	
	LinkedList() {
		head = new point();
	}
	int panjang() {
		point sementara = point();
		sementara = *head;
		int hitung = 0;

		while (sementara.next != NULL){
			sementara = *sementara.next;
			hitung++;
			
		}
		return hitung;
	}
	void tambah(int p) {
		point *tambah = new point();
		point *sementara = new point();
		sementara = head;
		while (sementara->next != NULL) {
			sementara = sementara->next;
		}

		tambah->angka = p; 

		sementara->next = tambah;



	};
	void tampil() {

		point temp = point();
		temp = *head;

		while (temp.next != NULL) {
			temp = *temp.next;
			cout << temp.angka << " ";

		}

	}
};

int main() {

	

	return 0;
}