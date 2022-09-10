#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{   
   
    int *b = new int[NELEMENTS];  //identifier "NELEMENTS" is undefined - hiányzó '_'
 
    // a ' ' nem megfelelő -> csere: " "
    //olvashatóság miatt endl hiányzik
    std::cout << '1-100 ertekek duplazasa' //expected a ';' - hiányzó ';' a sor végén


    for (int i = 0;) //Nem megfelelő iteráció, hiányzik a feltétel vizsgálat és a lépésenként végrehajtandó számláló növelése
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //Nem megfelelő feltétel vizsgálat - esetünkben: i < N_ELEMENTS
    {
        // Az értékek nincsenek kiiratva
        //Hiányzó endl az olvashatóság miatt
        std::cout << "Ertek:" //expected a ';' - hiányzó ';' a sor végén
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //Átlagszámítás: double
    for (int i = 0; i < N_ELEMENTS, i++) //expected a ';' - hiányzó ';' az N_ELEMENTS után, a ',' nem megfelelő 
    {
        atlag += b[i] //expected a ';' - hiányzó ';' a sor végén
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
