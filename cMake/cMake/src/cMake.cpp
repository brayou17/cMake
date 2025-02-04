// cMake.cpp : définit le point d'entrée de l'application.
//

#include "cMake.h"
#include "../library/tools.h"
#include "SFML/Graphics.hpp"
//#include ""

using namespace std;


int main()
{
	float delta = 0.0f, sPosx = 0.0f, ePosx = 10.0f;

	cout << randomFloat(sPosx,ePosx) << std::endl;

	sf::Vector2f vec2f;

	cout << "Hello CMake." << endl;
	system("pause");
	return EXIT_SUCCESS;
}
