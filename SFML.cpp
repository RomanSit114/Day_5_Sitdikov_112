#include <SFML/Graphics.hpp>

using namespace sf; 

int main()
{
	
	RenderWindow window(VideoMode(1000, 1000), " ");

	
	while (window.isOpen())
	{
		
		Event event;
		while (window.pollEvent(event))
		{
			
			if (event.type == Event::Closed)
				window.close(); 
		}
		
		window.clear(Color(255, 255, 255, 255));
		for (int i = 0; i < 250;)
		{

			
			RectangleShape rectangle(Vector2f((150.f)+i, 200.f));

			
			rectangle.move(165, 80);

			
			rectangle.setFillColor(Color(175, 180, 240));

			
			window.draw(rectangle);

			i++;
		}
			
			window.display();
			
		
	}

	return 0;
}