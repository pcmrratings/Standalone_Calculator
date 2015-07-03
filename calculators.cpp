#include <iostream>
#include "scores.cpp"

using namespace std;

char yn='x';

void fps()
{
    cout << "1: May be capped to 30 FPS" << endl << "2: May be capped to 60 FPS" << endl << "3: 60 FPS capped" << endl << "4: 60 FPS capped, potentially limitless" << endl << "5: limitless" << endl;

        cin >> scoreFPS;

            system("clear");

                cout << "You chose " << scoreFPS << endl << "Is this correct? y/n" << endl;

                    cin >> yn;

}

void resolution()
{
    cin >> scoreResolution;
}

void optimization()
{
    cin >> scoreOptimization;
}

void modSupport()
{
    cin >> scoreModSupport;
}

void servers()
{
    cin >> scoreServers;
}

void dlc()
{
    cin >> scoreDLC;
}

void total()
{
    cin >> scoreTotal;
}