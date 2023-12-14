#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;


class Butt {
	int i = 0;
	Font font;
	
	RectangleShape butt;
	String text = to_string(i);
	Text txt;
	Color color1;
	Color color2 = Color::Blue;
	Color color3 = Color::Green;
public:
	Butt(int x, int y, int width, int height, Color color){
		butt.setPosition(x, y);
		butt.setSize(Vector2f(width, height));
		color1 = color;
		butt.setFillColor(color1);
		txt.setString(text);
		txt.setPosition(x+25, y+15);
		txt.setFillColor(Color::White);
		txt.setCharacterSize(20);
		font.loadFromFile("BankGothic Md BT Medium.otf");
		txt.setFont(font);
	}
	Butt():Butt(0,0,50, 30, Color::Cyan) {}

	void printButt(RenderWindow& win) {
		win.draw(butt);
		win.draw(txt);
	}
	void mousePresBut(RenderWindow& win, Event& event) {
		if (event.type == Event::MouseButtonPressed) {
			if (event.key.code == Mouse::Left) {
				if (butt.getGlobalBounds().contains(Mouse::getPosition(win).x, Mouse::getPosition(win).y))
				{
					
					butt.setFillColor(color3);
					i++;
					txt.setString(to_string(i));
				}

			}
		}
		else {
			if (butt.getGlobalBounds().contains(Mouse::getPosition(win).x, Mouse::getPosition(win).y))
			{
				butt.setFillColor(color2);
			}
			else {
				butt.setFillColor(color1);
			}
		}
	}
};
