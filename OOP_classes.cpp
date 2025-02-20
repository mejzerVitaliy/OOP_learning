#include <iostream>

#include "Rectangle.h"

#include "Window.h"

//void Show(const Rectangle& rectangle);
//
//#include <cstring>
//class Student1
//{
//private:
//    char name[20];
//    int age;
//
//public:  
//    void Show() {
//        std::cout << "Name :" << name << std::endl;
//        std::cout << "Age :" << age << std::endl;
//    }
//    void ChangeAge(int newAge) {
//        age = newAge;
//    }
//    void ChangeName(const char* newName) {
//        strcpy_s(name, 20, newName);
//
//        if (newAge > 0) {
//            age = newAge;
//        } else {
//            std::cout << "New Age is incorrect.\n";
//        }
//    }
//};
//
//int main() {
//
//    /*Rectangle one;
//    one.setHeight(20);
//    one.setWidth(30);
//    Show(one);*/
//    Rectangle one1;
//    Rectangle& ref1 = one1;
//    Rectangle* ptr1 = &one1;
//    Rectangle arr1[3];
//
//
//    const Rectangle one1;
//    const Rectangle& ref1 = one1;
//    const Rectangle* ptr1 = &one1;
//    const Rectangle arr1[3];
//
//    const Rectangle one;
//    Show(one);
//
//    return 0;
//
//    std::cout << "Hello World!\n";
//
//    Student1 Demien;
//    Student1 olga;
//
//    Demien.ChangeAge(24);
//    Demien.ChangeName("Demien");
//
//    olga.ChangeAge(25);
//    olga.ChangeName("Olga");
//
//}
//
//void Show(const Rectangle& rectangle)
//{
//    std::cout << "Height = " << rectangle.getHeight() << std::endl;
//    //std::cout << "Width = " << rectangle.getWidth() << std::endl;
//}


int main() {
	int size = 1;
	Window* arr = new Window[size] {
		Window(),
		Window(1, 5, 6)
	};

	Window window1;
	Window window2{};

	Window window7(1, 2, 3, 4);
	Window window8{ 1, 2, 3, 4 };

	Window* window3 = new Window;
	Window* window4 = new Window();

	Window* window9 = (1, 2, 3, 4);
	Window* window10 = { 1, 2, 3, 4 };

	window11.Show();
}