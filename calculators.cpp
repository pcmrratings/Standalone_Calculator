#include <iostream>
#include "scores.cpp"

using namespace std;

char yn;

void fps()
{
    curFunc == 1;
    
    cout << "1: May be capped to 30 FPS" <<
    endl << "2: May be capped to 60 FPS" << 
    endl << "3: 60 FPS capped" << 
    endl << "4: 60 FPS capped, potentially limitless" << 
    endl << "5: limitless" << 
    endl;

        cin >> scoreFPS;

            system("clear");

                cout << "You chose " << scoreFPS << endl << "Is this correct? y/n" << endl;

                    cin >> yn;
                        
                        scoreFPS = scoreFPS * 5;

}

void resolution()
{
    cout << "1: Does not support 1080p or higher" <<
    endl << "2: May support up to 1080p" <<
    endl << "3: Supports 1080p. No multi-monitor support" <<
    endl << "4: Supprts 1080p, may include multi-monitor support" <<
    endl << "5: 4K or beyond, includes multi-monitor support" << 
    endl;
    
        cin >> scoreResolution;
    
            system("clear");
    
    
}

void optimization()
{
    cout << "1: Poorly optimized" <<
    endl << "2: Passably optimized" <<
    endl << "3: Well optimized" <<
    endl << "4: Greatly optimized" <<
    endl << "5: Gloriously optimized" <<
    endl;
    
    cin >> scoreOptimization;
    
        system("clear")
        
            cout << "You chose" << scoreOptimization << 
            endl << "Is that correct?"
            
                cin >> yn;
                
                    reaction
}

void modSupport()
{
    cout << "1: No support, mods may result in online bans" <<
    endl << "2: Possible unofficial support, may be heavily restricted" <<
    endl << "3: May not have official support, possibly restricted to cosmetic changes" <<
    endl << "4: Some support, possibly restricted to cosmetic changes" <<
    endl << "5: Complete support" <<
    endl;
    
    cin >> scoreModSupport;
}

void servers()
{
    cout << "1" <<
    endl << "2" <<
    endl << "3" <<
    endl << "4" <<
    endl << "5" <<
    endl;
    
    cin >> scoreServers;
}

void dlc()
{
    cout << "1" <<
    endl << "2" <<
    endl << "3" <<
    endl << "4" <<
    endl << "5" <<
        endl;
    
    cin >> scoreDLC;
}

void glitches()
{
    cout << "1" <<
    endl << "2" <<
    endl << "3" <<
    endl << "4" <<
    endl << "5" <<
    endl;
    
    cin >> scoreGlitches;
}

void total()
{
    cin >> scoreTotal;
}

int curFunc(0);

int restartFunction()
{
    if (curFunc == 1)
    {
        fps();
    }
    
    if (curFunc == 2)
    {
        resolution();
    }
    
    if (curFunc == 3)
    {
        optimization();
    }
    
}


int reaction() // Determines whether users choice was correct and reacts accordingly
{
    if(yn=='y')
    {
        return 0;
    }

    else if (yn=='n')
    {
        system("reset");

        restartFunction;
    }
}