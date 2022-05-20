#include <iostream>

class Shape
{
public:
    virtual void Draw() = 0;
};

class Rectangle : public Shape
{
public:
    Rectangle(){ }
    ~Rectangle(){  }

    void Draw()
    {
        std::cout << "rectangle drawn"
                  << "\n";
    }

    void MyName() {
        
    }
};

class Square : public Shape
{
public:
    void Draw()
    {
        std::cout << "rectangle drawn"
                  << "\n";
    }

    void MyShape() {

    }
};

Shape* GetShape(std::string choice) {
    if (choice == "square") {
        return new Square();
    }

    if (choice == "rectangle") {
        return new Rectangle();
    }
}

int main()
{
    Square* square = (Square*) GetShape("square");
    Rectangle* rectangle = (Rectangle*) GetShape("rectangle"); 
}