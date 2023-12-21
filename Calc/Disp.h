#pragma once

#include "Strok.h";
#include <SFML/Graphics.hpp>
using namespace sf;
class Disp {
	Strok str;
	Text txt;
	Font font;
public:
	Disp() {
		font.loadFromFile("BankGothic Md BT Medium.otf");
		txt.setFont(font);
		txt.setString()
	}
};