#include <iostream>

typedef struct
{
    int x;
    float y;
    char z;
} Data;

uintptr_t serealize(Data * ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserealize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main ()
{
    Data * a = new Data();
    Data * b;
    uintptr_t raw;

    a->x = 0;
    a->y = 3.23;
    a->z = 'k';
    raw = serealize(a);

    std::cout << "adress data A:\t\t" << a << std::endl;
    std::cout << "A: " << a->x << "\t" << a->y << "\t" << a->z << std::endl;
    std::cout << "raw: " << raw << std::endl;
    std::cout << "adress serialize A:\t" << &raw  << std::endl;
    b = deserealize(raw);
    std::cout << "adress deserialize raw:\t" << b  << std::endl;
    std::cout << b->x  << "\t" << b->y << "\t" << b->z << std::endl;

    delete a;
    return (0);
}