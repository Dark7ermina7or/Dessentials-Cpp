//txt to vector of strings
/*
std::vector<std::string> readFileToList(const std::string& filePath) {
	std::vector<std::string> lines;
	std::ifstream file(filePath);

	if (file.is_open()) {
		std::string line;
		while (std::getline(file, line)) {
			lines.push_back(line);
		}
		file.close();
	}
	else {
		std::cerr << "Unable to open file: " << filePath << std::endl;
	}

	return lines;
}
*/

/*
Abstraction:
Hide complex implementation details from the user.
Provide simple interfaces for interaction.
*/

//------------------------------------------------------------------------------------
//Class Declaration

class ClassName {
private:
    // Private members

public:
    // Public members

    // Constructors
    ClassName();  // Default constructor
    ClassName(int param1, double param2);  // Parameterized constructor

    // Destructor
    ~ClassName();

    // Member functions
    void memberFunction1();
    int memberFunction2(double param);
    
    // Getter and Setter methods
    int getAttribute() const;
    void setAttribute(int value);
};


//------------------------------------------------------------------------------------
//Constructor & Deconstructor

ClassName::ClassName() {
    // Constructor implementation
}

ClassName::ClassName(int param1, double param2) {
    // Parameterized constructor implementation
}

ClassName::~ClassName() {
    // Destructor implementation
}


//------------------------------------------------------------------------------------
//Member Function Definitions

void ClassName::memberFunction1() {
    // Implementation of memberFunction1
}

int ClassName::memberFunction2(double param) {
    // Implementation of memberFunction2
    return someValue;
}


//------------------------------------------------------------------------------------
//Access Specifiers

private: Members can only be accessed within the class.
public: Members can be accessed from outside the class.


//Encapsulation

Use private members to encapsulate internal details.
Provide public methods (getters and setters) to access and modify private members.


//------------------------------------------------------------------------------------
//Inheritance

class DerivedClass : public BaseClass {
    // Derived class definition
};


//------------------------------------------------------------------------------------
//Function Overloading

class Example {
public:
    void process(int value);
    void process(double value);
};

//Virtual Functions (Runtime Overload)

class Base {
public:
    virtual void virtualFunction();
};

class Derived : public Base {
public:
    void virtualFunction() override;
};


//------------------------------------------------------------------------------------
//Static Members

class Example {
public:
    static int staticMember;  // Declaration
};

// Definition
int Example::staticMember = 0;


//------------------------------------------------------------------------------------
//Friend Function

class Example {
    friend void friendFunction(Example& obj);
};

//------------------------------------------------------------------------------------
//Operator Overloading

class Complex {
public:
    double real, imag;

    Complex operator+(const Complex& obj) const;
};


//------------------------------------------------------------------------------------

#include <iostream>
#include <stdexcept>

// 1. Class Declaration
class ClassName {
private:
    // Private members

public:
    // Public members

    // Constructors
    ClassName();  // Default constructor
    ClassName(int param1, double param2);  // Parameterized constructor

    // Destructor
    ~ClassName();

    // Member functions
    void memberFunction1();
    int memberFunction2(double param);

    // Getter and Setter methods
    int getAttribute() const;
    void setAttribute(int value);
};

// 2. Constructor and Destructor
ClassName::ClassName() {
    // Constructor implementation
}

ClassName::ClassName(int param1, double param2) {
    // Parameterized constructor implementation
}

ClassName::~ClassName() {
    // Destructor implementation
}

// 3. Member Function Definitions
void ClassName::memberFunction1() {
    // Implementation of memberFunction1
}

int ClassName::memberFunction2(double param) {
    // Implementation of memberFunction2
    return 0;
}

// 4. Access Specifiers
// - Private members can only be accessed within the class.
// - Public members can be accessed from outside the class.

// 5. Encapsulation
// - Use private members to encapsulate internal details.
// - Provide public methods (getters and setters) to access and modify private members.

// 6. Inheritance
class DerivedClass : public ClassName {
    // Derived class definition
};

// 7. Polymorphism
// - Function Overloading
class Example {
public:
    void process(int value);
    void process(double value);
};

// - Virtual Functions (for runtime polymorphism)
class Base {
public:
    virtual void virtualFunction();
};

class Derived : public Base {
public:
    void virtualFunction() override;
};

// 8. Abstraction
// - Hide complex implementation details from the user.
// - Provide simple interfaces for interaction.

// 9. Static Members
class StaticExample {
public:
    static int staticMember;  // Declaration
};

// - Definition
int StaticExample::staticMember = 0;

// 10. Friend Function
class FriendExample {
    friend void friendFunction(FriendExample& obj);
};

// 11. Operator Overloading
class Complex {
public:
    double real, imag;

    Complex operator+(const Complex& obj) const;
};

// 12. Exception Handling
void exampleFunction() {
    try {
        // Code that might throw exceptions
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}

int main() {
    // Example usage of the above concepts
    return 0;
}

//------------------------------------------------------------------------------------
//Full code example

#include <iostream>

class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    // Virtual function for polymorphism
    virtual double calculateArea() const {
        return width * height;
    }

    // Getter and Setter methods
    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    // Overriding the virtual function
    double calculateArea() const override {
        return width * height;
    }
};

// Example of operator overloading
bool operator==(const Shape& shape1, const Shape& shape2) {
    return shape1.calculateArea() == shape2.calculateArea();
}

int main() {
    // Creating objects
    Rectangle rectangle1(5.0, 10.0);
    Rectangle rectangle2(3.0, 7.0);

    // Using getter and setter methods
    std::cout << "Width of rectangle1: " << rectangle1.getWidth() << std::endl;
    std::cout << "Height of rectangle1: " << rectangle1.getHeight() << std::endl;

    rectangle1.setWidth(8.0);
    rectangle1.setHeight(15.0);

    std::cout << "Updated width of rectangle1: " << rectangle1.getWidth() << std::endl;
    std::cout << "Updated height of rectangle1: " << rectangle1.getHeight() << std::endl;

    // Calculating and comparing areas
    std::cout << "Area of rectangle1: " << rectangle1.calculateArea() << std::endl;
    std::cout << "Area of rectangle2: " << rectangle2.calculateArea() << std::endl;

    if (rectangle1 == rectangle2) {
        std::cout << "Both rectangles have the same area." << std::endl;
    } else {
        std::cout << "The rectangles have different areas." << std::endl;
    }

    return 0;
}