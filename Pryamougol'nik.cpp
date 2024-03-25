#include <iostream>
#include <cmath> 
`
using namespace std;

int main() {
    double width, height;
    
    // Ввод ширины и высоты прямоугольника
    cout << "Введите ширину прямоугольника: ";
    cin >> width;
    cout << "Введите высоту прямоугольника: ";
    cin >> height;
    
    // Вычисление периметра
    double perimeter = 2 * (width + height);
    // Вычисление площади
    double area = width * height;
    // Вычисление длины диагонали
    double diagonal = sqrt(width * width + height * height);
    
    // Вывод результатов
    cout << "Периметр прямоугольника: " << perimeter << endl;
    cout << "Площадь прямоугольника: " << area << endl;
    cout << "Длина диагонали прямоугольника: " << diagonal << endl;
    int end;
    cin>>end;
    
    return 0;
}
