#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <ctime>


#define M_PI       3.14159265358979323846





namespace MySolution 
{
    class Circle : public sf::CircleShape
    {
    public:
        float radius;
        sf::Color org;
        Circle(float r) : CircleShape(r)
        {
            radius = r;
            org = sf::Color(rand() % 256, rand() % 256, rand() % 256, 255);
            this->setFillColor(org);
        }

        void show();
        void hide();
        void draw();

        bool operator>(float _r);
        bool operator>(const Circle& other);

        bool operator<(float _r);
        bool operator<(const Circle& other);

        bool operator==(const Circle& other);

        float getRadius() const { return radius; }
        float getArea() const;

        void setColor(uint8_t, uint8_t, uint8_t, uint8_t);
    };
}
