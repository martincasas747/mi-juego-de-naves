#ifndef MOVIMIENTO_H_INCLUDED
#define MOVIMIENTO_H_INCLUDED
void go(int x,int y){
        HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
SetConsoleCursorPosition(hCon , dwPos);
}
void cursor(){
        HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor;
    cursor.dwSize=2;
    cursor.bVisible=FALSE;
    SetConsoleCursorInfo(hCon , &cursor );
    }

#endif // MOVIMIENTO_H_INCLUDED
