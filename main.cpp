#include <iostream>
#include <cstdlib>
#include "calculators.cpp"

using namespace std;

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
    
          rating();
                
                resolution();
                
                    rating();
                    
                        optimization();
                        
                            rating();
                                
                                modSupport();
                                
                                    rating();
                                
                                        servers();
                                        
                                            rating();
                                        
                                                dlc();
                                                
                                                    rating();
                                                        
                                                        glitches();
                                                        
                                                            rating();
                                                                
                                                                settings();
                                                                
                                                                    rating();
                                                                    
                                                                        controls();
                                                                        
                                                                            rating();
                                    
                                        
                                
                            
}

