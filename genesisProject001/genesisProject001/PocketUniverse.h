#pragma once
#include "UniverseLayer.h"

#include<GL\glew.h>
#include <vector>



class PocketUniverse
{
public:
	PocketUniverse();
	void createLayer(const char* vertexShader, const char* fragmentShader, glm::vec2 viewportSize, glm::vec2 pixelScale);
	void TimeStep();
	void PokeUniverse(glm::vec2 xy, int value);
	~PocketUniverse();
	GLint UTime = 0;
private:
	std::vector<UniverseLayer> ComplexityLayers;
	
};

