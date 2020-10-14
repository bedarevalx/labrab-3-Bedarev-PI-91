#include <iostream>

class object{
    bool deliver;
    float a, b, c;
    public: double volume, perimeter;
    void Read();
    void Display();
    void Init(float a, float b, float c, bool deliv);
    void calcvolume();
    void calcperim();
    void DisplayFinal();
};
void object::Read() {
    printf("Введите стороны объекта:\nДлина = ");
    scanf_s("%f", &a);
    printf("Ширина = ");
    scanf_s("%f", &b);
    printf("Высота = ");
    scanf_s("%f", &c);
    printf("\n**************************");
}
void object::Display() {
    printf("\nПараметры объекта\nДлина = %f\nШирина = %f\nВысота = %f", a, b, c);
    printf("\n**************************");
}
void object::Init(float lenght, float width, float height,bool deliv) {
    a = lenght;
    b = width;
    c = height;
}
void object::calcvolume() {
    volume = a * b * c;
}
void object::calcperim() {
    perimeter = 2 * (a * b + a * c + b * c);
}
void object::DisplayFinal() {
    printf("\nПараметры объекта\nДлина = %f\nШирина = %f\nВысота = %f\nОбъем = %f\nПериметр = %f", a, b, c, volume, perimeter);
    printf("\n**************************");
}

void compare(object obj1, object obj2) {
    if (obj1.volume == obj2.volume) {
        printf("\nФигуры одинакового объема");
        return;
    }
    if (obj1.volume > obj2.volume) {
        printf("\nОбъем первой фигуры больше");
    }
    if (obj1.volume < obj2.volume) {
        printf("\nОбъем второй фигуры больше");
    }
    printf("\n**************************");
}



int main()
{
    setlocale(LC_ALL, "Rus");
}
