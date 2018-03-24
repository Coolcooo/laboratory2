#include <iostream>
#include <string>
using namespace std;

class ShopMonitors {
private:
	
	class Monitor {
	private:
		int a, b;
	public:
		Monitor (int a, int b) {
		this -> a = a;
		this -> b = b;
		}
		string getInfo () {
		return "Ðàçðåøåíèå: " + to_string(a) + 'x' + to_string(b) ;
		}
	};
	static const int size = 5;
	Monitor monitors[size] {
	Monitor(1024,1280), Monitor(1920,1080),Monitor(145,124),Monitor(1920,1080),Monitor(145,124)};
public:
	void getMonitorsInfo() {
	for (int i = 0;i < size;i++) {
		cout << monitors[i].getInfo() << endl;
	}
	}
};
class ShopScreens {
public:
	void getScreensInfo() {
	class Screen {
	private:
		int a, b;
	public:
		Screen (int a, int b) {
		this -> a = a;
		this -> b = b;
		}
		string getInfo2 () {
		return "Ðàçðåøåíèå: " + to_string(a) + 'x' + to_string(b) ;
		}
	};
	static const int size = 5;
	Screen screens[size] {
	Screen(1024,1280), Screen(1920,1080),Screen(145,124),Screen(1920,1080),Screen(145,124)};
	for (int i = 0;i < size;i++) {
		cout << screens[i].getInfo2() << endl;
	}
	}
};

int main() {
 setlocale(LC_ALL, "Russian");
 ShopMonitors t1;
 t1.getMonitorsInfo();
 ShopScreens t2;
 cout << endl;
 t2.getScreensInfo();
return 0;
}
