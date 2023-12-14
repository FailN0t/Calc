#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;


class Butt {
	RectangleShape butt;
	String text = '0';
	Text txt;
public:
	Butt(int x, int y, int width, int height, Color color){
		butt.setPosition(x, y);
		butt.setSize(Vector2f(width, height));
		butt.setFillColor(color);
	}
	Butt():Butt(0,0,50, 30, Color::Cyan) {}

	void printButt(RenderWindow& win) {
		win.draw(butt);
	}
	void 
};
