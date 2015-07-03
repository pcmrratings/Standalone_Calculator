#include <iostream>
#include <cstdlib>
#include "calculators.cpp"

using namespace std;

//SCORE CALCULATORS//

void fps(); // Function that determines the score of FPS

void resolution(); // Function that determines the score of Resolution

void optimization();

void modSupport();

void servers();

void dlc();

void glitches();

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
                
                resolution();
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

