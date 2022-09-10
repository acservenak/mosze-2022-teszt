#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{   
   
    int *b = new int[N_ELEMENTS];  
 
    // a ' ' nem megfelelő -> csere: " "
    //olvashatóság miatt endl hiányzik
    std::cout << "1-100 ertekek duplazasa" << std::endl; //expected a ';' - hiányzó ';' a sor végén


    for (int i = 0; i < N_ELEMENTS; i++) //Nem megfelelő iteráció, hiányzik a feltétel vizsgálat és a lépésenként végrehajtandó számláló növelése
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //Nem megfelelő feltétel vizsgálat - esetünkben: i < N_ELEMENTS
    {
        // Az értékek nincsenek kiiratva
        //Hiányzó endl az olvashatóság miatt
        std::cout << "Ertek: " << b[i] << std::endl; //expected a ';' - hiányzó ';' a sor végén
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; //Átlagszámítás: double
    for (int i = 0; i < N_ELEMENTS; i++) //expected a ';' - hiányzó ';' az N_ELEMENTS után, a ',' nem megfelelő 
    {
        atlag += b[i]; //expected a ';' - hiányzó ';' a sor végén
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Csapatnev: syntaxError"<<std:endl;
    return 0;
}
