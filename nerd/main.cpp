#include <SFML/Graphics.hpp>
#include "Circle.h"
#include "mWindow.h"
int main()
{
    //sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "SFML works!");
    MySolution::mWindow win;
     
    MySolution::Circle shape(100.f);


    while (win.isOpen())
    {
        while (const std::optional event = win.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                win.close();
        }

        win.clear();
        win.draw(shape);
        win.display();

        for (int i = 0; i < 1000; i++)
        {
            if (i % 7 == 0)
                shape.hide();
            else
                shape.show();
        }
    }
}