#include <iostream>
#include <windows.h>
#include <string>
#include "provon.h"
using namespace std;
int main() {
     HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
     DWORD dwMode = 0;
     GetConsoleMode(hOut, &dwMode);
     SetConsoleMode(hOut, dwMode);

     int a = 0;
     cout << "\033[32mjust test <-this is string\033[0m" << endl;
     while (a == 0)
     {
          string horray = fun();
          cout << horray;
          a += 1;
     }
     return 0;
     
}