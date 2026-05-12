#include "SFML/Graphics.hpp"
#include "glm/glm.hpp"
#include "iostream"
#include "models/Astro.h"

int main (){
    glm::vec3 corpoA(0.0f, 0.0f, 0.0f);
    glm::vec3 corpoB(10.0f, 10.0f, 10.0f);

    float dist = glm::distance(corpoA, corpoB);

    std::cout << "disntacia:" << dist <<std::endl;

    sf::RenderWindow window(sf::VideoMode(800, 600), "GraviRay Simulation");
    sf::CircleShape planet(20.0f);

    planet.setFillColor(sf::Color::Cyan);
    planet.setOrigin(20.0f, 20.0f);
    planet.setPosition(400, 300);

    while (window.isOpen())
    {
        sf::Event event;
        if (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed) window.close();
        }
        window.clear();
        window.draw(planet);
        window.display();
    }
    return 0;
}