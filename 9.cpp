#include <iostream>
using namespace std;

class Equipment {
public:
	virtual void On() = 0;
};
class Radio : public Equipment {
public:
	void On() {
		cout << "Ðàäèî âêëþ÷åíî" << endl;
	}
};
class TV : public Equipment {
public:
	void On() {
		cout << "ÒÂ âêëþ÷åíî" << endl;
	}
};
class Light : public Equipment {
public:
	void On() {
		cout << "Ñâåò âêëþ÷åí" << endl;
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	Equipment* equip;
	Radio* rad = new Radio;
	TV* tv = new TV;
	Light* light = new Light;
	
	Equipment* mas[3];
	mas[0] = rad;
	mas[1] = tv;
	mas[2] = light;
	for (int i = 0;i < 3;i++) {
	mas[i] -> On();
	}
	
	return 0;
}
