#include <iostream>
#include "scores.cpp"

using namespace std;

void reset()
{
    system("clr");
}

int curFunc;

int reaction();

int restartFunction();

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

            system("clr");

                cout << "You chose " << scoreFPS << endl << "Is this correct? y/n" << endl;

                    cin >> yn;
                    
                        reaction;
                        
                            scoreFPS = scoreFPS * 8;
                            
                            scoreTotal = scoreTotal + scoreFPS;
}

void resolution()
{
    curFunc == 2;
    
    cout << "1: Does not support 1080p or higher" <<
    endl << "2: May support up to 1080p" <<
    endl << "3: Supports 1080p. No multi-monitor support" <<
    endl << "4: Supprts 1080p, may include multi-monitor support" <<
    endl << "5: 4K or beyond, includes multi-monitor support" << 
    endl;
    
        cin >> scoreResolution;
    
            system("clr");
            
                cout << "You chose " << scoreResolution << 
                endl << "Is that correct?" <<
                endl;
            
                    cin >> yn;
                    
                        reaction;
                        
                            scoreResolution = scoreResolution * 7;
                            
                                scoreTotal = scoreTotal + scoreResolution;
}

void optimization()
{
    curFunc == 3;
    
    cout << "1: Poorly optimized" <<
    endl << "2: Passably optimized" <<
    endl << "3: Well optimized" <<
    endl << "4: Greatly optimized" <<
    endl << "5: Gloriously optimized" <<
    endl;
    
    cin >> scoreOptimization;
    
        system("clr");
        
            cout << "You chose" << scoreOptimization << 
            endl << "Is that correct?" << 
            endl;
            
                cin >> yn;
                
                    reaction();
                    
                        scoreOptimization = scoreOptimization * 9;
                        
                            scoreTotal = scoreTotal + scoreOptimization;
}

void modSupport()
{
    curFunc == 4;
    
    cout << "1: No support, mods may result in online bans" <<
    endl << "2: Possible unofficial support, may be heavily restricted" <<
    endl << "3: May not have official support, possibly restricted to cosmetic changes" <<
    endl << "4: Some support, possibly restricted to cosmetic changes" <<
    endl << "5: Complete support" <<
    endl;
    
    cin >> scoreModSupport;
    
        system("clr");
        
            cout << "You chose " << scoreModSupport <<
            endl << "Is that correct?" <<
            endl;
            
            cin >> yn;
            
                reaction();
                
                    scoreModSupport = scoreModSupport * 3;
                    
                        scoreTotal = scoreTotal + scoreModSupport;
}

void servers()
{
    curFunc == 5;
    
    cout << "1: Possibly weak, unreliable servers" <<
    endl << "2: Possibly weak servers, but occasionally reliable" <<
    endl << "3: Possibly some server issues a high volume, but no options available" <<
    endl << "4: Acceptable servers with dedicated or custom servers optional" <<
    endl << "5: Strong servers with dedicated or custom servers optional" <<
    endl;
    
    cin >> scoreServers;
    
    system("clr");
    
    cout << "You chose " << scoreServers <<
    endl << "Is that correct?" <<
    endl;
    
        cin >> yn;
    
            reaction;
            
                scoreServers = scoreServers * 5;
                
                    scoreTotal = scoreTotal + scoreServers;
}

void dlc()
{
    curFunc == 6;
    
    cout << "1: Possible Day 1 DLC, affects entire game balance" <<
    endl << "2: Possible Day 1 DLC[" <<
    endl << "3: Possible Day 1 DLC, does not affect game balance online" <<
    endl << "4: No Day 1 DLC, or DLC is purely cosmetic" <<
    endl << "5: No Day 1 DLC, or DLC is free" <<
        endl;
    
    cin >> scoreDLC;
    
    
        system("clr");
    
    cout << "You chose " << scoreDLC << 
    endl << "Is that correct?" <<
    endl;
    
        cin >> yn;
    
            reaction();
            
                scoreDLC = scoreDLC * 4;
                
                    scoreTotal = scoreTotal + scoreDLC;
}

void glitches()
{
    curFunc == 7;
    
    cout << "1: Possible excess of glitches, likely game breaking" <<
    endl << "2: Possible excess of glitches, but not game breaking" <<
    endl << "3: Some glitches, but usually not game game breaking" <<
    endl << "4: Few glitches, but rarely do they affect enjoyment" <<
    endl << "5: Nearly none, or to a limited and rare amount" <<
    endl;
    
    cin >> scoreGlitches;
    
    system("clr");
    
    cout << "You chose " << scoreGlitches << 
    endl << "Is that correct?" <<
    endl;
    
        cin >> yn;
        
            reaction;
            
                scoreGlitches = scoreGlitches * 6;
                
                    scoreTotal = scoreTotal + scoreGlitches;
 }

void settings()
{
    curFunc == 8;
    
    cout << "1: None, or very limited settings" <<
    endl << "2: Limited settings" <<
    endl << "3: Limited settings, short range on video settings" <<
    endl << "4: Acceptable settings, medium range on video settings" <<
    endl << "5: Full settings, wide range on video settings" <<
    endl;
    
    cin >> scoreSettings;
        
    system("clr");
    
        cout << "You chose " << scoreSettings <<
        endl << "Is that correct?" <<
        endl;
        
            cin >> yn;
        
                reaction;
                
                    scoreSettings = scoreSettings * 2;
                    
                        scoreTotal = scoreTotal + scoreSettings;
}

void controls()
{
    curFunc == 9;
    
    cout << "1: Un-configurable controls, no gamepad support" <<
    endl << "2: Sensitivity options, no control mapping, no gamepad support" <<
    endl << "3: Keyboard remap-able, gamepad support, sensitivity options" <<
    endl << "4: All devices remap-able, gamepad support, sensitivity options" <<
    endl << "5: All devices remap-able, alternate controls, gamepad support, sensitivity options" <<
    endl;
    
    cin >> scoreControls;
    
        system("clr");
    
    cout << "You chose " << scoreControls <<
    endl << "Is this correct" <<
    endl;
    
        cin >> yn;
    
            reaction;
            
                scoreTotal = scoreTotal + scoreControls;
}

int restartFunction()
{
    if(curFunc=1)
    {
        fps();
    }
    
    else if(curFunc=2)
    {
        resolution();
    }
    
    else if(curFunc=3)
    {
        optimization();
    }
    
    else if(curFunc=4)
    {
        modSupport();
    }
    
    else if(curFunc=5)
    {
        servers();
    }
    
    else if(curFunc=6)
    {
        dlc();
    }
    
    else if(curFunc=7)
    {
        glitches();
    }
    
    else if(curFunc=8)
    {
        settings();
    }
    
    else if(curFunc=9)
    {
        controls();
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
        system("clr");

        restartFunction;
    }
}
