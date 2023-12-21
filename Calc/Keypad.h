#pragma once
#include "Button.h"
class KeyPad {
	Butt** button;
	int row;
	int column;
public:
	KeyPad(int row, int column, int width, int hieght) :row{ row }, column{column} {
		button = new Butt*[row];
		for (size_t i = 0; i < row; i++)
		{
			button[i] = new Butt[column];
			for (size_t j = 0; j < column; j++)
			{
				button[i][j].resize(width, hieght, row, column, i, j, 200);
			}
		}
		nump();

	}

	void print(RenderWindow& win) {
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < column; j++) {
				button[i][j].printButt(win);
			}
		}
	}
	void mousePresKeyPad(RenderWindow& win, Event& event, Strok& strok) {
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < column; j++) {
				button[i][j].mousePresBut(win, event, strok);
			}
		}
	}

	void nump() {
		int k = 1;
		for (size_t i = 0; i < 3; i++)
		{
			for(size_t j = 0; j < 3; j++) {
				button[i][j].rename(to_string(k));
				k++;
			}
		}
		button[3][0].rename("0");
	}

	~KeyPad(){
		for (size_t i = 0; i < row; i++)
		{
			delete[] button[i];
		}
		delete[] button;
	}
};