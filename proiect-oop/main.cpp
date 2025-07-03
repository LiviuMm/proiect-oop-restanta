#include <iostream>
#include "mall.h"
#include "cosmetica.h"
#include "fast_food.h"
#include "produs.h"
#include "administrator.h"
#include "vanzator.h"
#include "agent_curatenie.h"
#include "agent_paza.h"
#include "zona.h"
#include "client.h"
#include "hypermarket.h"
#include "electronic.h"

int main() {
    Mall mall("MegaMall", "Bucuresti");

    Zona* zona1 = new Zona(1);
    Zona* zona2 = new Zona(2);
    Zona* zona3 = new Zona(3);
    Zona* zona4 = new Zona(4);
    Zona* zona5 = new Zona(5);


    Administrator* admin1 = new Administrator("Andrei Popescu", "1234567890123", 40, 11000, 8);


    Cosmetica* Sephora = new Cosmetica("Sephora", admin1);
    Cosmetica* ProBeauty = new Cosmetica("ProBeauty", admin1);

    Fast_food* Kfc = new Fast_food("KFC", admin1);
    Fast_food* McDonalds = new Fast_food("MC", admin1);

    Electronic* Samsung = new Electronic("Samsung", admin1);
    Electronic* iStyle = new Electronic("iStyle", admin1);

    Hypermarket* Auchan = new Hypermarket("Auchan", admin1);
    Hypermarket* MegaImage = new Hypermarket("MegaImage", admin1);


    mall.AdaugaMagazine(Sephora);
    mall.AdaugaMagazine(ProBeauty);
    mall.AdaugaMagazine(Kfc);
    mall.AdaugaMagazine(McDonalds);
    mall.AdaugaMagazine(Samsung);
    mall.AdaugaMagazine(iStyle);
    mall.AdaugaMagazine(Auchan);
    mall.AdaugaMagazine(MegaImage);

    admin1->AdaugaMagazin(Sephora);
    admin1->AdaugaMagazin(ProBeauty);
    admin1->AdaugaMagazin(Kfc);
    admin1->AdaugaMagazin(McDonalds);
    admin1->AdaugaMagazin(Samsung);
    admin1->AdaugaMagazin(iStyle);
    admin1->AdaugaMagazin(Auchan);
    admin1->AdaugaMagazin(MegaImage);


    Produs* p1 = new Produs("C001", "Parfum", 249.9, "02.2025", Sephora);
    Produs* p2 = new Produs("C002", "Machiaj", 104.9, "01.2025", Sephora);

    Produs* p3 = new Produs("C003", "Placa de par", 467.9, "06.2025", ProBeauty);
    Produs* p4 = new Produs("C004", "Machiaj", 104.9, "07.2025", ProBeauty);

    Produs* p5 = new Produs("F001", "Crispy", 18.5, "07.2025", Kfc);
    Produs* p6 = new Produs("F002", "Cartofi", 9.0, "07.2025", Kfc);

    Produs* p7 = new Produs("F003", "Burger", 21.9, "07.2025", McDonalds);
    Produs* p8 = new Produs("F004", "Cartofi", 12.0, "07.2025", McDonalds);

    Produs* p9 = new Produs("E001", "Samsung S21", 5499.9, "04.2024", Samsung);
    Produs* p10 = new Produs("E002", "Samsung A52", 1609.9, "02.2024", Samsung);

    Produs* p11 = new Produs("E003", "Iphone 16 Pro MAX", 7059.5, "02.2025", iStyle);
    Produs* p12 = new Produs("E004", "Iphone 15 Pro", 4689.9, "07.2024", iStyle);

    Produs* p13 = new Produs("H001", "Peste", 33.4, "07.2024", Auchan);
    Produs* p14 = new Produs("H002", "Faina", 3.9, "07.2024", Auchan);

    Produs* p15 = new Produs("H003", "Coca Cola", 5.9, "02.2024", MegaImage);
    Produs* p16 = new Produs("H004", "Lays Max", 8.9, "03.2024", MegaImage);

    


    Sephora->AdaugaProdus(p1);
    Sephora->AdaugaProdus(p2);

    ProBeauty->AdaugaProdus(p3);
    ProBeauty->AdaugaProdus(p4);

    Kfc->AdaugaProdus(p5);
    Kfc->AdaugaProdus(p6);

    McDonalds->AdaugaProdus(p7);
    McDonalds->AdaugaProdus(p8);

    Samsung->AdaugaProdus(p9);
    Samsung->AdaugaProdus(p10);

    iStyle->AdaugaProdus(p11);
    iStyle->AdaugaProdus(p12);

    Auchan->AdaugaProdus(p13);
    Auchan->AdaugaProdus(p14);

    MegaImage->AdaugaProdus(p15);
    MegaImage->AdaugaProdus(p16);


    Vanzator* v1 = new Vanzator("Maria Garbovan", "1980706223344", 30, 4500, 8, Sephora);
    Vanzator* v2 = new Vanzator("Clara Marinescu", "1237y42787567", 24, 3400, 8, ProBeauty);
    Vanzator* v3 = new Vanzator("Andrei Cristescu", "1235464346554", 19, 2800, 8, Kfc);
    Vanzator* v4 = new Vanzator("Mihai Constantin", "3646535653464", 18, 2500, 8, McDonalds);
    Vanzator* v5 = new Vanzator("Cristian Enescu", "2752747574275", 21, 2900, 8, Samsung);
    Vanzator* v6 = new Vanzator("Alexandru Iliescu", "1648146848641", 42, 4800, 8, iStyle);
    Vanzator* v7 = new Vanzator("Ionel Stefan", "5371357575315", 34, 4000, 8, Auchan);
    Vanzator* v8 = new Vanzator("Marian Parvan", "2468268842648", 24, 3100, 8, MegaImage);

    Agent_paza* paznic1 = new Agent_paza("Ion Vasilescu", "1900101000000", 45, 2500, 40, zona1, Kfc);
    Agent_curatenie* curatator1 = new Agent_curatenie("Ana Dumitru", "2910505111111", 38, 2400, 40, zona2, McDonalds);
    Agent_paza* paznic2 = new Agent_paza("Ion Marinescu", "1900101000000", 45, 2500, 40, zona4);



    Sephora->AdaugaAngajat(v1);
    ProBeauty->AdaugaAngajat(v2);
    Kfc->AdaugaAngajat(v3);
    McDonalds->AdaugaAngajat(v4);
    Samsung->AdaugaAngajat(v5);
    iStyle->AdaugaAngajat(v6);
    Auchan->AdaugaAngajat(v7);
    MegaImage->AdaugaAngajat(v8);

    Kfc->AdaugaAngajat(paznic1);
    McDonalds->AdaugaAngajat(curatator1);

    mall.AdaugaAngajati(v1);
    mall.AdaugaAngajati(v2);
    mall.AdaugaAngajati(v3);
    mall.AdaugaAngajati(v4);
    mall.AdaugaAngajati(v5);
    mall.AdaugaAngajati(v6);
    mall.AdaugaAngajati(v7);
    mall.AdaugaAngajati(v8);

    mall.AdaugaAngajati(paznic1);
    mall.AdaugaAngajati(curatator1);
    mall.AdaugaAngajati(paznic2);

    Client c1("George Petrescu", "3573577357573", 24);
    Client c2("Stefan Petrescu", "1357573757357", 19);
    Client c3("Cosmin Petrescu", "2354244624643", 28);
    std::cout << "            Clienti\n";

    c1.Afiseaza();
    c2.Afiseaza();
    c3.Afiseaza();
    std::cout << "\n";

    std::cout << "            Magazine\n";

    Sephora->Afiseaza();
    ProBeauty->Afiseaza();
    Kfc->Afiseaza();
    McDonalds->Afiseaza();
    Samsung->Afiseaza();
    iStyle->Afiseaza();
    Auchan->Afiseaza();
    MegaImage->Afiseaza();
    std::cout << "\n";

    std::cout << "             Administrator\n";

    admin1->Afiseaza();
    std::cout << "\n";

    std::cout << "             Inventar mall \n";

    std::cout << mall.InventarMall() << " lei\n";


    std::cout << "In mall sunt "<<mall.NumarMagazine() << " magazine"<<" cu "<< mall.NumarAngajati() << " angajati.\n";


    return 0;
}
