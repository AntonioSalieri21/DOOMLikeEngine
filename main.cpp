#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include "c_render.h"
using namespace std;

//map variables
int nMapWidth = 10;
int nMapHeight = 10;

//screen variables
int nScreenWidth = 160;
int nScreenHeight = 120;

//player variables
float fPlayerX = 1.0f;
float fPlayerY = 1.0f;
float fPlayerA = 0.0f;

//camera variables
float fFOV = M_PI / 3;
float fDepgth = 30.f;



int main()
{
    std::wstring map; // Строковый массив
    map += L"################";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"################";    

    renderScreen(map);

    return 0;
}