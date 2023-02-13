#include <SFML\Graphics.hpp>
#include <iostream>


using namespace std;
using namespace sf;

int main() {

	RenderWindow window(VideoMode(512, 512), "SFML tutorial", Style::Default);
	RectangleShape player();


	while (window.isOpen())
	{
		Event evt;
		while (window.pollEvent(evt))
		{
			switch (evt.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::Resized:
				printf("New window width: %d New window height: %d\n", evt.size.width, evt.size.height);
				break;
			case Event::TextEntered:
				if (evt.text.unicode < 128)
				{
					printf("%c", evt.text.unicode);
				/*	break;*/
				}
			}
		}
	}
	return 0;
}