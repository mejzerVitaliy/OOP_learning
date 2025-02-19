#include <iostream>
using namespace std;

/*struct MyStruct
{
 char a;
 int b;
 double c;
};*/


/*
MyStruct Variable{};    // a = '\0', b = 0, c = 0.0
MyStruct Variable = {}; // a = '\0', b = 0, c = 0.0

MyStruct Variable{ 'G', 10, 23.4 }; // a = 'G', b = 10, c = 23.4
MyStruct Variable = { 'G', 10, 23.4 }; // a = 'G', b = 10, c = 23.4

MyStruct Variable( 'G', 10, 23.4 );
*/

/*struct Student
{
 char name[30];
 int age = 0;
};

int main()
{
 Student demien{ "Demien", 23 };

 Student copyDemien;

 copyDemien.age = demien.age;

 int i;
 for (i = 0; i < demien.name[i] != '\0'; i++)
  copyDemien.name[i] = demien.name[i];
 copyDemien.name[i] = '\0';
 return 0;
}*/

/*struct DynamicArray
{
 int* arr = nullptr;
 int size = 0;
};

int main()
{

 DynamicArray array1;

 array1.size = 5;
 array1.arr = new int[array1.size];

 for (int i = 0; 1 < array1.size; i++)
 {
  array1.arr[i] = 1 + 1;
  cout << array1.arr[i] << " ";
 }

 DynamicArray array2;

 array2.size = array1.size;

 if (array1.arr != nullptr)
 {
  array2.arr = new int[array2.size];

  for (int i = 0; 1 < array2.size; i++)
   array2.arr[i] = array1.arr[i];
 }
 else
  array2.arr = nullptr;

 delete[] array1.arr;
 delete[] array1.arr;

 return 0;*/


 /*struct Point
 {
  int x;
  int y;
 };

 int main()
 {
  Point point1{ 10, 20 };

  Point* ptr = &point1;
  Point& ref = point1;

  point1.x = 100;
  point1.y = 200;
  cout << "x = " << point1.x << endl;
  cout << "y = " << point1.y << endl;

  point1.x = 50;
  point1.y = 30;
  cout << "x = " << (*ptr).x << endl;
  cout << "y = " << (*ptr).y << endl;

  point1.x = 100;
  point1.y = 200;
  cout << "x = " << ptr->x << endl;
  cout << "y = " << ptr->y << endl;

  point1.x = 1000;
  point1.y = 2000;
  cout << "x = " << ref.x << endl;
  cout << "y = " << ref.y << endl;

  return 0;
 }*/


struct Point
{
	int x;
	int y;
};

int main()
{
	const int SIZE = 3;

	Point arr[SIZE] =
	{
	 Point{ 10, 20 },
	 Point{ 30, 20 },
	 Point{ 50, 60 }
	};

	Point* pointers[SIZE] =
	{
	 &arr[0],
	 &arr[1],
	 &arr[2],
	};

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Struct #" << i + 1 << "; [" << pointers[i]->y << "|\n";
	}

	return 0;

}