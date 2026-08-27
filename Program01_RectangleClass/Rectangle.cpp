#include "Rectangle.h"
Rectangle::Rectangle()
{   
	length = 0.0;
	width = 0.0;

}
Rectangle::Rectangle(double newLength, double newWidth)
{
	setLength(newLength);
	setWidth(newWidth);
}
