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
	Rectangle box;
	double rectWidth;
	double rectLength;

	cout << "This program will calculate the area of a rectangle. What is the width? ";
	cin >> rectWidth;
	cout << "what is the length? ";
	cin >> rectLength;

	box.setWidth(rectWidth);
	box.setLength(rectLength);
	cout << "Width: " << box.getWidth() << endl; 
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
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