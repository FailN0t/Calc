#pragma once
#include "iostream"
#include <string>
using namespace std;
class Strok {
	string str;
	string a;
	string b;
	string z;
	bool chitst = false;
public:
	Strok() {
		str = "";
	}

	void add(string str) {
		if (chitst) { 
			this->str = ""; 
			chitst = false;
		}
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
		else if (str == "=") {
			if (b.empty()) {
				this->str = a;
				a = "";
				b = "";
				z = "";
				chitst = true;
			}
			else {
				switch (z[0])
				{
				case '+':
					this->str = to_string(stof(a) + stof(b));
					break;
				case '-':
					this->str = to_string(stof(a) - stof(b));
					break;
				default:
					break;
				}
				a = "";
				b = "";
				z = "";
				chitst = true;
			}
		}

		cout << this->str << endl;
	}
};