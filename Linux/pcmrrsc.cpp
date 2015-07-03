#include <iostream>
#include <cstdlib>

using namespace std;

char yn='x'; // Value of users choice y/n

//SCORES//
int scoreFPS(0); // Holds the value of the user's choice for FPS rating

int scoreResolution(0); // Holds the value of the user's choice for Resolution rating

int scoreOptimization(0); // Holds the value of the user's choice for Optimization rating

int scoreModSupport(0); // Holds the value of the user's choice for Mod Support rating

int scoreServers(0); // Holds the value of the user's choice for Servers rating

int scoreDLC(0); // Holds the value of the user's choice for DLC rating

int scoreGlitches(0); // Holds the value of the user's choice for Glitches rating

int scoreSettings(0); // Holds the value of the user's choice for Settings rating

int scoreControls(0); // Holds the value of the user's choice for Controls rating

int scoreTotal(0); // Holds the value of the total score of the game

//SCORE CALCULATORS//

void fps(); // Function that determines the score of FPS

void resolution(); // Function that determines the score of Resolution

void optimization();

void modSupport();

void servers();

void dlc();

void  glitches();

void settings();

void controls();

void total(); // The function to determine the total score the game is rated dependent on users input

void rating() // Displays ratings so far and total
{
        cout << "|FPS:         |" << scoreFPS << "|" << endl;
            cout << "|Resolution:  |" << scoreResolution << "|" << endl;
                cout << "|Optimization:|" << scoreOptimization << "|" << endl;
                    cout << "|Mod Support  |" << scoreModSupport << "|" << endl;
                        cout << "|Servers:     |" << scoreServers << "|" << endl;
                            cout << "|DLC:         |" << scoreDLC << "|" << endl;
                                cout << "|Glitches:    |" << scoreGlitches << "|" << endl;
                                    cout << "|Settings:    |" << scoreSettings << "|" << endl;
                                        cout << "|Controls:    |" << scoreControls << "|" << endl;
                                            cout << "|Total:       |" << scoreTotal << "|" << endl;
}

int reactionFPS(); // Determines whether users choice was correct and reacts accordingly

int main()
{
  fps();

  reactionFPS();

  rating();

  return 0;
}

#include <iostream>
using namespace std;

void fps()
{
  cout << "1: May be capped to 30 FPS" << endl << "2: May be capped to 60 FPS" << endl << "3: 60 FPS capped" << endl << "4: 60 FPS capped, potentially limitless" << endl << "5: limitless" << endl;

    cin >> scoreFPS;

        system("reset");

            cout << "You chose " << scoreFPS << endl << "Is this correct? y/n" << endl;

                cin >> yn;

                    reactionFPS();
}

void resolution()
{
}

void optimization()
{
}

void modSupport()
{
}

void total()
{
}

int reactionFPS()
{
    if(yn=='y')
    {
        return 0;
    }

    else if (yn=='n')
    {
        system("reset");

        fps();
    }
}
