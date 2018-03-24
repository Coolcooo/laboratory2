#include <iostream>
using namespace std;
class Bot {
public:
	double HP, MP, energy, attack;
	void getHP() {
	cout << HP << endl;
	}
};
class upLVL {
public:
	int power;
};
class Human : public Bot {
public:
	Human () {
	HP = 1000;
	MP = 10;
	energy = 10;
	attack = 20;
	}

};
class Elf : public Bot {
protected:
	int speed;
public:
	Elf() {
	HP = 20;
	MP = 10;
	energy = 50;
	attack = 10;
	speed = 30;
	}
	void kick (Human &p) {
	p.HP -= attack*1.2*speed*energy*0.005;
	}

};
class BotMax : public upLVL, public Bot {
public:
	BotMax () {
	HP = 1000;
	MP = 10;
	energy = 10;
	attack = 20;
	power = 10;
	}	
	void kick (Elf &p) {
	p.HP -= attack*1.2*power*energy*0.005;
	}
};

int main () {
	Human Jorj;
	Elf Patrick;
	BotMax Volodya;
	Volodya.kick(Patrick);
	Patrick.kick(Jorj);
	Jorj.getHP();
	Patrick.getHP();
return 0;
}
