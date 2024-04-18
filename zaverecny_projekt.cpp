#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {
    string potvrzeni = "ne";
    int vyberpostav;
    cout << "VITEJ VE HRE BOJOVNIKU" << endl;
    cout << "------------------------------------------------------------" << endl;
    while (potvrzeni == "ne") {
        cout << "Pro zacatek hry si vyber klasu sveho hrdiny z nize uvedenych: " << endl;
        cout << "1) Barbar" << endl;
        cout << "2) Assasin" << endl;
        cout << "3) Wizard" << endl;
        cout << "4) Archer" << endl;
        cout << "5) Priest" << endl;
        cin >> vyberpostav;
        switch (vyberpostav) {
        case 1: {
            int barziv = 20;
            int barmaxziv = 50;
            int barutok = 3;
            int barmaxutok = 20;
            int barenergie = 1;
            int barmaxenergie = 5;
            int barpenize = 50;
            int barlevel = 1;
            int barzkusenosti = 1;
            int barbarianskepivo = barziv + 2;
            int siladivokehosrdce = barutok + 5;

            cout << "Class: Barbar" << endl;
            cout << endl;
            cout << "Statistiky hrdiny:" << endl;
            cout << "Zivoty - " << barziv << endl;
            cout << "Max Zivoty - " << barmaxziv << endl;
            cout << "Utok - " << barutok << endl;
            cout << "Energie - " << barenergie << endl;
            cout << "Max Energie - " << barmaxenergie << endl;
            cout << "Penize - " << barpenize << endl;
            cout << "Level - " << barlevel << endl;
            cout << "Zkusenosti - " << barzkusenosti << endl;
            cout << endl;
            cout << "Schopnosti: " << endl;
            cout << "KLASICKY UTOK - uder za " << barutok << " poskozeni" << endl;
            cout << "SILA DIVOKEHO SRDCE - specialni uder, ktery prida 5 poskozeni ke Klasickemu utoku (lze pouzit kazdy treti tah)" << endl;
            cout << "BARBARIANSKE PIVO - prida hrdinovi o 2 zivoty vice (lze pouzit kazdy druhy tah)" << endl;
            break;
        }

        case 2: {
            int assasziv = 10;
            int assasmaxziv = 20;
            int assasutok = 8;
            int maxutok = 25;
            int assasenergie = 5;
            int assasmaxenergie = 15;
            int assaspenize = 60;
            cout << "Class: Assassin" << endl;
            cout << endl;
            cout << "Statistiky hrdiny:" << endl;
            cout << "Zivoty - " << assasziv << endl;
            cout << "Max Zivoty - " << assasmaxziv << endl;
            cout << "Utok - " << assasutok << endl;
            cout << "Energie - " << assasenergie << endl;
            cout << "Max Energie - " << assasmaxenergie << endl;
            break;
        }

        case 3: {
            int wizsiv = 8;
            int wizmaxziv = 20;
            int wizutok = 6;
            int wizenergie = 8;
            cout << "Class: Wizard" << endl;
            cout << endl;
            cout << "Statistiky hrdiny:" << endl;
            cout << "Zivoty - " << wizsiv << endl;
            cout << "Max Zivoty - " << wizmaxziv << endl;
            cout << "Utok - " << wizutok << endl;
            cout << "Energie - " << wizenergie << endl;
            cout << "Max Energie - 40" << endl;
            break;
        }

        case 4: {
            int archsiv = 12;
            int archmaxziv = 18;
            int archutok = 4;
            int archenergie = 6;
            cout << "Class: Archer" << endl;
            cout << endl;
            cout << "Statistiky hrdiny:" << endl;
            cout << "Zivoty - " << archsiv << endl;
            cout << "Max Zivoty - " << archmaxziv << endl;
            cout << "Utok - " << archutok << endl;
            cout << "Energie - " << archenergie << endl;
            cout << "Max Energie - 25" << endl;
            break;
        }

        case 5: {
            int priestsiv = 6;
            int priestmaxziv = 15;
            int priestutok = 2;
            int priestenergie = 10;
            cout << "Class: Priest" << endl;
            cout << endl;
            cout << "Statistiky hrdiny:" << endl;
            cout << "Zivoty - " << priestsiv << endl;
            cout << "Max Zivoty - " << priestmaxziv << endl;
            cout << "Utok - " << priestutok << endl;
            cout << "Energie - " << priestenergie << endl;
            cout << "Max Energie - " << endl;
            break;
        }

        } //switch vyberpostav
        if (vyberpostav>5) {
            cout << "Neplatny vyber, zadejte prosim cislo od 1 do 5" << endl;
            cout << endl;
            } //if
            cout << endl;
            cout << "Opravdu si prejete vybrat tohoto hrdinu? (ano, ne)" << endl;
            cin >> potvrzeni;
    } //while
    if (potvrzeni == "ano") {
        cout << "Vyborne, mate vybrano! Pojdme na to!" << endl;
    }

    return 0;
} //main
