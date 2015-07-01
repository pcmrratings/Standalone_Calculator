#include <iostream>

using namespace std;

int x(0); // Number that holds the value of the users choice for FPS rating

void fps(); // The function to determine the score the game is rated on Frames Per Second

int main()
{
  fps();
  
  cin >> x;
  
  return 0;
}

void fps()
{
  cout << "1: May be capped to 30 FPS" << endl << "2: May be capped to 60 FPS" << "60 FPS capped" << "60 FPS capped, potentially limitless" << endl;
}
