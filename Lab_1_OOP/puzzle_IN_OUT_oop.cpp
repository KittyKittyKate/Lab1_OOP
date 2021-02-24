#include <iostream>
#include "puzzle_oop.h"

using namespace std;
namespace collection_of_wisdom_oop {
	// Ввод параметров загадки
	void puzzle::InData(ifstream &ifst) {
		ifst.getline(this->puzzle_str, 200);//доступ к члену класса
		ifst.getline(this->answer, 20);
	}
	// Вывод параметров загадки
	void puzzle::Out(ofstream &ofst) {
		ofst << "'" << this->puzzle_str << "' - Answer: " << this->answer << endl;
	}
} // end collection_of_wisdom_oop namespace