// polymorphism.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "No se quin animal soc" << endl;
    }
    virtual ~Animal() {}

    void feed() {
        char menjar;
        cout << "The animals are hungry, type + to feed them: " << endl;
        cin >> menjar;
        if (menjar == '+') {
            cout << "You have fed the animals";
        }
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public: 
    void speak() {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Dog*Perro=new Dog();
    Cat* Gato = new Cat();

    Perro->speak();
    Gato->speak();

    Gato->feed();

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
