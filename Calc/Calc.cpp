﻿// Calc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Keypad.h"
#include "Strok.h";
int main()
{
	RenderWindow win(VideoMode(600, 800), "Calc");
	Event event;
	int i = 20;
	win.setFramerateLimit(30);
	Butt butt(300, 400, 120, 70, Color::Magenta, "9");
	KeyPad keyPad(4, 4, 600, 800);
	Strok strok;
	while (win.isOpen()) {
		while (win.pollEvent(event))  // Цикл игровых событий: нажатие клавишь, перемещение мышки и другие.
		{
			if (event.type == Event::Closed) win.close(); // Закрыть окно
			keyPad.mousePresKeyPad(win, event, strok);
		}
		win.clear();
		keyPad.print(win);
		win.display();
	}



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
