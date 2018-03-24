#include <iostream>
#include <string>
using namespace std;
class TV;

class Radio {
private:
	double mhz, range, signalStrength;
	string name, modulation;
	static int count;
public:
	friend void changeName(Radio&);
	friend class TV;
	void operator++ () {
	modulation = "FM";
	}
	void operator* () {
	range += 1;
	}
	void operator-- () {
	getline(cin, name);
	}
	Radio() {
		mhz = 98.8;
		name = "Europa plus";
		modulation = "AM";
		cin >> range;
		cin.get();
		signalStrength = 56.8;
		count++;
	}
	Radio(double mhz, string name) {
		this->mhz = mhz;
		this->name = name;
		this->modulation = "AM";
		cin >> this->range;
		cin.get();
		this->signalStrength = 56.8;
		count++;
	}
	Radio(const Radio &Radion) {
		name = "Radio NNTU";
		mhz = Radion.mhz + 3;
		modulation = "FM";
		range = 5.6;
		signalStrength = 89.2;
		count++;
	}
	~Radio() {
		name = "null";
		count--;
	}
	void getInfo() {
		cout << name << ' ' << mhz << ' ' << modulation << " - range: " << range << ' ' << "km, signal strength: " << signalStrength << '%' << endl;
	}
	void AMtoFM() { 
			if (range > 5) {
				if (modulation != "FM") {
					modulation = "FM";
					range -= 5;
					if (signalStrength > 90) {
						signalStrength = 100;
					}
					else {
						signalStrength += 10;
					}
				}
			}
			
		}
};
class TV {

public:
	void overloadMhz(Radio &p) {
		p.mhz -= 1;
	}
};
void changeName(Radio &a) {

	getline(cin, a.name);
}
int Radio::count;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Ââåäèòå ðàäèóñ ðàäèî:" << endl;
	Radio r1;
	Radio r2(104.5, "Radio Volga");
	Radio r3(r2);
	TV t1;
	r1.getInfo();
	r2.getInfo();
	r3.getInfo();
	r2.AMtoFM();
	r2.getInfo();
	cout << "Ñìåíèòå èìÿ ñòàíöèè: " << endl;
	changeName(r2);
	r2.getInfo();
	t1.overloadMhz(r2);
	r2.getInfo();
	++r1;
	*r1;
	cout << "Ñìåíèòå èìÿ ñòàíöèè: " << endl;
	--r1;
	r1.getInfo();
	
	return 0;
}
