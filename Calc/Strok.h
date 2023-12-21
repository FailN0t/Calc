#pragma once
#include "iostream"
#include <string>
using namespace std;
class Strok {
	string str;
	string a;
	string b;
	string z;
public:
	Strok() {
		str = "";
	}

	void add(string str) {
		if (str != "="
			and str != "+"
			and str != "-"
			and z.empty() ){
			a += str;
			this->str += str;
		}
		else if ((str == "+"
			or str == "-")
			and b.empty()) {
			if (z.empty()) {
				z = str;
				this->str += str;
			}
			else {
				z = str;
				this->str[this->str.length() - 1] = str[0];
			}
			

		}
		else if (str != "="
			and str != "+"
			and str != "-"
			and !z.empty()) {
			b += str;
			this->str += str;

		}
		cout << this->str << endl;
	}
};