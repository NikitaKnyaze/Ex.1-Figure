// Задача 1. Фигуры. Количество сторон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using std::cout;
using std::string;

class Figure {
protected:
   short sides_count = 0;
   string name = "Фигура";
public:

   short get_sides_count() {
      return sides_count;
  }
   string get_name() {
      return name;
   }
};

class Triangle : public Figure {
public:
  
   Triangle() {
      sides_count = 3;
      name = "Триугольник";
   }
};

class Quadrangle : public Figure {
public:
   Quadrangle() {
      sides_count = 4;
      name = "Квадрат";
   }
};


int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   Figure first;
   Triangle second;
   Quadrangle third;
   cout << "Количество сторон:\n";
   cout<< first.get_name()<<": "<< first.get_sides_count()<<"\n";
  cout <<second.get_name() << ": " << second.get_sides_count()<<"\n";
   cout <<third.get_name() << ": " << third.get_sides_count()<<"\n";


   return 0;
}   
                                                         


//_______________________________________________________________________
//Второй вариант решения задачи: 

//#include <iostream>
//#include <windows.h>
//
//using std::cout;
//using std::string;
//
//class Figure {
//private:
//   short sides_count;
//   string name;
//
//protected:
//   Figure(short a, string b  ) {
//      sides_count = a;
//      name = b;
//
//   }
//
//public:
//   Figure() : Figure(0, "Фигура") {
//      
//   }
//
//   short get_sides_count() {
//      return sides_count;
//   }
//
//   string get_name() {
//      return name;
//   }
//};
//
//class Triangle : public Figure {
//
//public:
//
//   Triangle() : Figure(3, "Триугольник") {
//      
//   }
//  
//};
//
//class Quadrangle : public Figure {
//
//public:
//
//   Quadrangle() : Figure(4, "Квадрат") {
//
//   }
//
//};
//
//
//int main()
//{
//   SetConsoleCP(1251);
//   SetConsoleOutputCP(1251);
//   Figure first;
//   Triangle second;
//   Quadrangle third;
//   cout << "Количество сторон:\n";
//   cout << first.get_name() << ": " << first.get_sides_count() << "\n";
//   cout << second.get_name() << ": " << second.get_sides_count() << "\n";
//   cout << third.get_name() << ": " << third.get_sides_count() << "\n";
//
//
//   return 0;
//}