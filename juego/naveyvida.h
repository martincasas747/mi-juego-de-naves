
#include <iostream>
# include<cstdlib>
# include<cstring>
#define AR 87
#define AB 83
#define IZ 65
#define DE 68
#define IZQUIERDA 75
#define DERECHA 77
#define ARRIBA 72
#define ABAJO 80
#define MORI 49

class NAVE{
    int x,y;
    int corazones;

public:
    int vidas;
   NAVE(int _x,int _y,int _corazones,int _vidas):x(_x),y(_y),corazones(_corazones),vidas(_vidas) {}
    int X(){return x;}
    int Y(){return y;}
    void danio(){ corazones--; }
    void danioene2(){ vidas--; }
    void daniosnitch(){corazones--;}
    void pintar();
    void borrar();
    void mover();
    void pintarcora();
    void name();
    void muerte();
    void muerte2();
    void muertefinal();

    };


void NAVE::name(){


}


 void NAVE::pintar(){
 go(x,y); printf("  %c",182);
 go(x,y+1); printf(" %c%c%c",40,206,41);
 go(x,y+2); printf("%c%c %c%c",201,205,205,187);

 }
 void NAVE::borrar(){

     go(x,y);   printf("      ");
     go(x,y+1); printf("      ");
     go(x,y+2); printf("      ");
}
 void NAVE::mover(){
 if(kbhit()){
    char tecla =getch();
    borrar();
    if(tecla==IZQUIERDA && x>4){x--;}
    if(tecla==DERECHA && x+6<77){x++;}
    if(tecla==ARRIBA && y>4){y--;}
    if(tecla==ABAJO && y+3<30){y++;}
    if(tecla==MORI){corazones--;}
    pintar();
    pintarcora();
 }}

 void NAVE::pintarcora(){
    go(50,2); printf ("VIDAS %d",vidas);

    go(64,2); printf("salud");
    go(70,2); printf("      ");
    for(int i = 0;i<corazones;i++){
         go(70+i,2); printf("%c",254);

    }

 }
 void NAVE::muerte(){


 if(corazones==0){
    borrar();
    go(x,y);  printf("  **  ");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("  **  ");
    Sleep(200);
    borrar();
    go(x,y);  printf("* ** *");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("* ** *");
    Sleep(200);
    borrar();
    vidas--;

    corazones=3;
    pintarcora();
    pintar();

 }
 }
  void NAVE::muerte2(){



    borrar();
    go(x,y);  printf("  **  ");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("  **  ");
    Sleep(200);
    borrar();
    go(x,y);  printf("* ** *");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("* ** *");
    Sleep(200);
    borrar();
    corazones=3;
    pintarcora();
    pintar();


 }

 void NAVE::muertefinal(){
 if(vidas==0){
    borrar();
    go(x,y);  printf("  **  ");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("  **  ");
    Sleep(200);
    Beep(100,5);
    Beep(200,5);
    Beep(300,5);
    Beep(100,5);
    Beep(200,5);
    Beep(300,5);
    borrar();
    go(x,y); printf("  %c",182);
    go(x,y+1); printf(" %c%c%c",40,206,41);
    go(x,y+2); printf("%c%c %c%c",201,205,205,187);
    Sleep(200);
    borrar();
    go(x,y);  printf("  **  ");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("  **  ");
    Beep(200,20);
    Beep(300,20);
    Beep(100,20);
    Beep(200,20);
    Beep(300,20);
    Sleep(200);
    borrar();
    go(x,y); printf("  %c",182);
    go(x,y+1); printf(" %c%c%c",40,206,41);
    go(x,y+2); printf("%c%c %c%c",201,205,205,187);
      Beep(100,5);
    Beep(200,20);
    Beep(300,20);
    Beep(100,20);
    Beep(200,20);
    Beep(300,20);
    Sleep(200);


    borrar();
    go(x,y);  printf("  **  ");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("  **  ");

Beep(100,20);
    Beep(200,20);
    Sleep(50);
    Beep(300,20);
    Sleep(50);
    Beep(100,20);
    Sleep(50);
    Beep(200,20);
    Sleep(50);
    Beep(300,20);
     Sleep(50);

    borrar();
    go(x,y);  printf("* ** *");
    go(x,y+1);printf(" **** ");
    go(x,y+2);printf("* ** *");

    borrar();
    go(30,17); printf("FIN DEL JUEGO");


 }
 }











