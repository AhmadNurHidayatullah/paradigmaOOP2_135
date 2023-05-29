#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "hallo saya function dari base class";
	}
};
class derivedclass : public baseClass {
public:
	void perkenalan() {
		cout << "hallo saya function dari serived class";
	}
};