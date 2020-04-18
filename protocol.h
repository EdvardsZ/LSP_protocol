#ifndef PROTOCOL_H_INCLUDED
#define PROTOCOL_H_INCLUDED

struct Coordinates
{
    float x;
    float y;
};
struct Game
{
    int status;
    char name[20];
    int WinnerPlayerID;
};
struct Player_info
{
    int ID; /*Spēlētāja ID*/
    char name[30];/* Spēlētāja vārds */
    struct Coordinates position; /* Spēlētāja koordinātas */
    float angle; /* Spēlētāja leņķis */
    float speed; /*Spēlētāja ātrums*/
    float acceleration; /*Spēlētāja paātrinājums*/
    int laps; /* Cik reizes spēlētājs jau apbraucis apkārt kartei */
};
struct Field
{
    int ID; //* Laukuma ID *
    char name[20]; //* Laukuma nosaukums *
    int Width; //* Skaitlis, kas raksturo laukuma platumu  *
    int Height; //* Skaitlis, kas raksturo laukuma augstumu  *
    // MainLine: * Līnija, kas raksturo galveno sienu *
    //StartLine: * Līnija, kas raksturo mašīnu sacīkstes sākuma līniju *
    // ExtraLines: * Saraksts ar līnijām (sienām), kurās var ietriekties  *
};
struct Lines{
    struct Coordinates beggining;
    struct Coordinates end;
}



#endif
