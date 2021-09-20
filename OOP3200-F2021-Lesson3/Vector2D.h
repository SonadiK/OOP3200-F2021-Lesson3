#pragma once

#ifndef __VECTOR2D__
#define __VECTOR2D__
#include <string>

class Vector2D
{
public:
	// Constructors
	//Default constructor
	Vector2D();

	//Destructor
	~Vector2D();

	//Getters
	float GetX() const;
	float GetY() const;

	//Setters
	void SetX(float x);
	void SetY(float y);
	void Set(float x, float y);

	//Public Methods (Class Functions)
	std::string ToString();

//Public static methods (public class functions that )
private:
	//instance variables (Class Member Variables)
	float m_x;
	float m_y;

	//Private methods (Private class functions that are static)

};

#endif //define(__VECTOR_2D)