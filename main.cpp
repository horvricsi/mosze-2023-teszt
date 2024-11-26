#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // rosszul van megadva a változó
    std::cout << '1-100 ertekek duplazasa' // '' helyett ""
    for (int i = 0;) // rosszul van megadva a for ciklus
    {
        b[i] = i * 2;
    } // hiányzó ;
    for (int i = 0; i; i++) // rosszul van megadva a for ciklus
    {
        std::cout << "Ertek:" // hiányzó ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // rosszul van definialva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // hiányzó ;
    } // hiányzó ;
    atlag /= N_ELEMENTS; // rosszul van megadva az osztás
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;

}
