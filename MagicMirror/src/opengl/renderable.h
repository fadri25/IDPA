#pragma once

#include <mat4x4.hpp>

#include "shader.h"
#include "material.h"

// Rein virtuelle Klasse (Bedeutet es ist nicht m�glich eine Instanz dieser Klasse direkt zu erstellen.
//							Es k�nnen nur Instanzen von Klassen, welche diese Klasse erweitern, erstellt werden)
// Dient dazu verschiedene Objekttypen an den Renderer senden zu k�nnen
class Renderable {



public:
	
	virtual void bind(const glm::mat4& projectionView) const = 0;
	virtual void bindWithMatrix(const glm::mat4& mvp, const glm::mat4& model) const = 0;

	virtual int getCount() const = 0;

	virtual Shader* getShader() const = 0;
	virtual Material* getMaterial() const = 0;
};