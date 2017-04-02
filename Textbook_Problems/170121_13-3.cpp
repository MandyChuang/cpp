#include <iostream>
using namespace std;

class Rectangle
{
private:
	double width, length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};

int main()
{
	// Rectangle myRectangle;
	// Rectangle *rectPtr = nullptr;
	// rectPtr = &myRectangle;
	// rectPtr->setWidth(12.5);
	// rectPtr->setLength(4.8);

	Rectangle *rectPtr = nullptr;
	rectPtr = new Rectangle;
	rectPtr->setWidth(10.0);
	rectPtr->setLength(25.0);
	delete rectPtr;
	rectPtr = nullptr;

	
	return 0;
}

void Rectangle::setWidth(double w)
{
	width = w;
}
void Rectangle::setLength(double len)
{
	length = len;
}
double Rectangle::getWidth() const
{
	return width;
}
double Rectangle::getLength() const
{
	return length;
}
double Rectangle::getArea() const
{
	return width * length;
}