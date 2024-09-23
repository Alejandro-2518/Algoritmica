#include <iostream>
#include <string>

int main()
{
    std::string nombre;
    int AnioNacimiento;
    int AnioActual = 2024;

    std::cout << "Introduce tu nombre: ";
    std::cin >> nombre;
    std::cout << "Introduce tu fecha de nacimiento: ";
    std::cin >> AnioNacimiento;

    int edad = AnioActual - AnioNacimiento;

    std::cout << "Hola " << nombre << ", tu edad es " << edad << "." << std::endl;

    return 0;
}
