#include <iostream>
#include "aphorism_oop.h"

using namespace std;
namespace collection_of_wisdom_oop {
	// Ввод параметров афоризма
	void aphorism::InData(ifstream &ifst) {
		ifst.getline(this->aphor, 50);//доступ к члену класса
		ifst.getline(this->author, 50);
	}
	// Вывод параметров афоризма
	void aphorism::Out(ofstream &ofst) {
		ofst << "'" << this->aphor << "' - " << this->author << endl;
	}
} // end collection_of_wisdom_oop namespace