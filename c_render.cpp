#include "c_render.h"

void renderScreen(wstring screen)
{
    //wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight + 1]; // Массив для записи в буфер
    fwrite(&screen, sizeof(wstring), 1, stderr);
}