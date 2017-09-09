#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

const double error = 1. / 120;

vector<string> times[365];
string intToStr(int x) {
       string result = "";
       result += (char)(x / 10 + '0');
       result += (char)(x % 10 + '0');
       return result;
}
int main() {
    ios_base::sync_with_stdio(0);
    
    for (int h = 0; h < 12; h ++)
        for (int m = 0; m < 60; m ++) {
            int angleH = 60 * h + m;
            int angleM = (6 * m) * 2;
            
            int diff = abs(angleH - angleM);
            if (diff > 360) diff = 720 - diff;
            times[diff].push_back(intToStr(h) + ":" + intToStr(m));
        }
        
    int T;
    cin >> T;
    while (T --> 0) {
          double angle;
          cin >> angle;
          int x = (int)(angle + 2 * error);
          if (abs(angle - x) < error)
             x = 2 * x;
          else
              if (abs(angle - x - 0.5) < error)
                 x = 2 * x + 1;
              else
                  x = -1;
          if (x != -1) {
             for (int i = 0; i < times[x].size(); i ++) {
                 cout << times[x][i] << endl;
             }
          }  
    }
    return 0;
}       
