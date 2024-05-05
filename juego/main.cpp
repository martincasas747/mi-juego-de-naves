#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <list>
#include <fstream>
#include<conio.h>
#include "movimiento.h"
#include "limites.h"
#include "naveyvida.h"
#include "enemigo.h"
#include "enemigo2.h"
#include "disparar.h"
#include "snitch.h"
#include "lvl2.h"

#define IZQUIERDA 75
#define DERECHA 77
#define ARRIBA 72
#define ABAJO 80


void cargarCadena(char *palabra, int tamano);

using namespace std;
#include "jugador.h"


int contiros=0;


int main(){
///----------------------------------------------int main-------------------------------------------------------------
int cont1=0;
int cont2=0;
int cont3=0;
///-------------------
int cont=0;

char nombre[25];
int puntos=0;
int p;

go(30,12); printf("NOMBRE DEL JUGADOR : ");
cargarCadena(nombre,24);
snitch sni(10,4);
enemigo2 ene(10,15);
lvl2 ene1(10,5),ene2(15,8);
int opc;
limites();
go(30,13); printf("1:JUGAR");
go(30,14); printf("2:RANK");
cout<<" "<<endl;
go(39,16); cin>>opc;

switch(opc){

    case 1:{
system("cls");
cout<<"  MODO FACIL"<<endl;
limites();


enemigo2 ene(10,10);

cursor();
  NAVE N(36,27,3,3);

  N.pintar();



 N.pintarcora();
list<enemigo2*>grande;
list<enemigo2*>::iterator gran;

list<snitch*>sni;
list<snitch*>::iterator snit;

list<lvl2*> enemigo3;
list<lvl2*>::iterator n3;

list<lvl2*> enemigo33;
list<lvl2*>::iterator n33;

list<enemigo*> e;
list<enemigo*>::iterator n;
///SNITCH
for(int i=0;i<1;i++){
    sni.push_back(new snitch( rand()%70+3, rand()%26));}
///NAVE GRANDE
for(int i=0;i<1;i++){
    grande.push_back(new enemigo2( rand()%70, rand()%5+3));}
///NAVE HORIZONTAL DERECHA
for(int i=0;i<2;i++){
    enemigo3.push_back(new lvl2( rand()%70+3, rand()%5+3));}
///NAVE HORIZONTAL IZQUIERDA
for(int i=0;i<2;i++){
    enemigo33.push_back(new lvl2( rand()%70+3, rand()%5+3));}
///NAVE NORMAL
for(int i=0;i<4;i++){
    e.push_back(new enemigo( rand()%75, rand()%5+4));
}
 list <disp*> d;
 list <disp*>::iterator este;
bool perdiste=false;
    while(!perdiste){
go(2,2); printf("PUNTOS :""%d",puntos );
if(puntos<=95){
        go(30,1); printf("NIVEL 1");
 for(n=e.begin();n!=e.end();n++){
  (*n)->mover();
   (*n)->coli(N);
  }
for(n=e.begin();n!=e.end();n++){
    for(este=d.begin();este!=d.end();este++){
            if((*n)->Xene()==(*este)->X()-1||(*n)->Xene()==(*este)->X()-2||(*n)->Xene()==(*este)->X()&&( (*n)->Yene()==(*este)->Y()+1||(*n)->Yene()==(*este)->Y()  )){
             contiros++;
            go((*este)->X(),(*este)->Y()); printf("  ");
            delete(*este);
            este=d.erase(este);
            e.push_back(new enemigo(rand()%74,4));
            go((*n)->Xene(),(*n)->Yene()); (*n)->explota();
            delete (*n);
            n=e.erase(n);
            puntos +=5;
            cont1++;
            contiros=0;
            p+=5;
            }
    }
}}

  if(p==100&&cont==0){ system("cls");
  go(5,15); printf("LOGRASTE CRUZAR LA PRIMER LINEA DE ATAQUE ENEMIGA");
  go(5,16); printf("AL SER DESTRUIDOS TAN RAPIDO NO PUDIMOS REUNIR INFORMACION");
  go(5,17); printf("SOBRE EL TIPO DE NAVES ENEMIGAS. MUCHO CUIDADO Y ");
  go(5,18); printf("DESTRUYE TODO LO QUE SE MUEVA... ");
Sleep(10000);
 system("cls");
 cont++;
 N.pintar();
}

if(puntos>=100&&puntos<200){
        go(30,1); printf("NIVEL 2");
for(n3=enemigo3.begin();n3!=enemigo3.end();n3++){
  (*n3)->mover();
   (*n3)->coli(N);
  }

for(n33=enemigo33.begin();n33!=enemigo33.end();n33++){
  (*n33)->mover2();
   (*n33)->coli(N);
  }

for(n3=enemigo3.begin();n3!=enemigo3.end();n3++){
    for(este=d.begin();este!=d.end();este++){
            if((*n3)->Xene()==(*este)->X()-1||(*n3)->Xene()==(*este)->X()-2||(*n3)->Xene()==(*este)->X()&&( (*n3)->Yene()==(*este)->Y()+1||(*n3)->Yene()==(*este)->Y()  )){

            go((*este)->X(),(*este)->Y()); printf("  ");

            delete(*este);
            este=d.erase(este);
            enemigo3.push_back(new lvl2(rand()%74,4));
            go((*n3)->Xene(),(*n3)->Yene()); (*n3)->explota();
            delete (*n3);
            n3=enemigo3.erase(n3);
            puntos +=10;
            cont2++;
            p+=10;
            }
    }
}
for(n33=enemigo33.begin();n33!=enemigo33.end();n33++){
    for(este=d.begin();este!=d.end();este++){
            if((*n33)->Xene()==(*este)->X()-1||(*n33)->Xene()==(*este)->X()-2||(*n33)->Xene()==(*este)->X()&&( (*n33)->Yene()==(*este)->Y()+1||(*n33)->Yene()==(*este)->Y()  )){

            go((*este)->X(),(*este)->Y()); printf("  ");

            delete(*este);
            este=d.erase(este);
            enemigo33.push_back(new lvl2(rand()%74,4));
            go((*n33)->Xene(),(*n33)->Yene()); (*n33)->explota();
            delete (*n33);
            n3=enemigo3.erase(n33);
            puntos +=10;
            cont2++;
            p+=10;
            }
    }
}
}
  if(p==200&&cont==1){ system("cls");
  go(5,15); printf("PARECE QUE LOGRASTE SOBREVIVIR A LA SEGUNDA LINEA DE ATAQUE");
  go(5,16); printf("SIN INFORMACION SOBRE LOS ENEMIGOS LOGRASTE ABRIRTE PASO");
  go(5,17); printf("PERO PARECE QUE AUN QUEDA UNA LINEA DE ATAQUE ENEMIGA MAS");
  go(5,18); printf("SOBREVIVE SOLO UN POCO Y ESCAPA CON VIDA...");
Sleep(10000);
 system("cls");
 cont++;
 N.pintar();
}
if(puntos>=200&&puntos<400){

for(gran=grande.begin();gran!=grande.end();gran++){
  (*gran)->mover();
   (*gran)->coli(N);
  }
for(gran=grande.begin();gran!=grande.end();gran++){
    for(este=d.begin();este!=d.end();este++){
            if((*gran)->Xene()==(*este)->X()-1||(*gran)->Xene()==(*este)->X()-2||(*gran)->Xene()==(*este)->X()&&( (*gran)->Yene()==(*este)->Y()+1||(*gran)->Yene()==(*este)->Y()  )){
            go((*este)->X(),(*este)->Y()); printf("  ");
            delete(*este);
            este=d.erase(este);
            e.push_back(new enemigo(rand()%74,4));
            go((*gran)->Xene(),(*gran)->Yene()); (*gran)->explota();
            delete (*gran);
            gran=grande.erase(gran);
            puntos +=5;
            p+=5;
        }
    }
}

        go(30,1); printf("NIVEL 3");
for(snit=sni.begin();snit!=sni.end();snit++){
  (*snit)->mover();
   (*snit)->coli(N);
  }

for(snit=sni.begin();snit!=sni.end();snit++){
    for(este=d.begin();este!=d.end();este++){
            if((*snit)->Xene()==(*este)->X()-1||(*snit)->Xene()==(*este)->X()-2||(*snit)->Xene()==(*este)->X()&&( (*snit)->Yene()==(*este)->Y()+1||(*snit)->Yene()==(*este)->Y()  )){

            go((*este)->X(),(*este)->Y()); printf("  ");
            delete(*este);
            este=d.erase(este);
            sni.push_back(new snitch(rand()%74,4));
            go((*snit)->Xene(),(*snit)->Yene()); (*snit)->explota();
            delete (*snit);
            snit=sni.erase(snit);
            puntos +=30;
            cont3++;
            p+=30;
}}}
}
///----------------------
  if(p>=400&&cont==2){ system("cls");
  go(5,15); printf("AL DESTRUIR TANTOS RADARES SE PERCATARON DE TU LOCALIZACION");
  go(5,16); printf("LOS DEMAS ENEMIGOS IRAN A BUSCARTE");
  go(5,17); printf("BUENA SUERTE...");
  Sleep(10000);
 system("cls");
 cont++;
 N.pintar();}
if(puntos>=400){

for(gran=grande.begin();gran!=grande.end();gran++){
  (*gran)->mover();
   (*gran)->coli(N);
  }
for(gran=grande.begin();gran!=grande.end();gran++){
    for(este=d.begin();este!=d.end();este++){
            if((*gran)->Xene()==(*este)->X()-1||(*gran)->Xene()==(*este)->X()-2||(*gran)->Xene()==(*este)->X()&&( (*gran)->Yene()==(*este)->Y()+1||(*gran)->Yene()==(*este)->Y()  )){

            go((*este)->X(),(*este)->Y()); printf("  ");
            delete(*este);
            este=d.erase(este);
            e.push_back(new enemigo(rand()%74,4));
            go((*gran)->Xene(),(*gran)->Yene()); (*gran)->explota();
            delete (*gran);
            gran=grande.erase(gran);
            puntos +=5;
        }
    }
}

        go(30,1); printf("NIVEL 4");
for(snit=sni.begin();snit!=sni.end();snit++){
  (*snit)->mover();
   (*snit)->coli(N);
  }

for(snit=sni.begin();snit!=sni.end();snit++){
    for(este=d.begin();este!=d.end();este++){
            if((*snit)->Xene()==(*este)->X()-1||(*snit)->Xene()==(*este)->X()-2||(*snit)->Xene()==(*este)->X()&&( (*snit)->Yene()==(*este)->Y()+1||(*snit)->Yene()==(*este)->Y()  )){

            go((*este)->X(),(*este)->Y()); printf("  ");
            delete(*este);
            este=d.erase(este);
            sni.push_back(new snitch(rand()%74,4));
            go((*snit)->Xene(),(*snit)->Yene()); (*snit)->explota();
            delete (*snit);
            snit=sni.erase(snit);
            puntos +=30;
            cont3++;
}}}
for(n3=enemigo3.begin();n3!=enemigo3.end();n3++){
  (*n3)->mover();
   (*n3)->coli(N);
  }
for(n33=enemigo33.begin();n33!=enemigo33.end();n33++){
  (*n33)->mover2();
   (*n33)->coli(N);
  }
for(n3=enemigo3.begin();n3!=enemigo3.end();n3++){
    for(este=d.begin();este!=d.end();este++){
            if((*n3)->Xene()==(*este)->X()-1||(*n3)->Xene()==(*este)->X()-2||(*n3)->Xene()==(*este)->X()&&( (*n3)->Yene()==(*este)->Y()+1||(*n3)->Yene()==(*este)->Y()  )){

            go((*este)->X(),(*este)->Y()); printf("  ");

            delete(*este);
            este=d.erase(este);
            enemigo3.push_back(new lvl2(rand()%74,4));
            go((*n3)->Xene(),(*n3)->Yene()); (*n3)->explota();
            delete (*n3);
            n3=enemigo3.erase(n3);
            puntos +=10;
            cont2++;
            p+=puntos;
            }
    }
}
}

if(kbhit()){

        char tecla=getch();
        if(tecla=='a'||tecla=='A')
            d.push_back(new disp(N.X()+2 , N.Y()-1)); }
            for(este=d.begin();este != d.end();este++){

                (*este) -> trayectoria();
                if((*este)->borra()){
                    go((*este)->X(),(*este)->Y() ); printf(" ");
                    delete (*este);
                    este=d.erase(este);
                } }

limites();
N.muerte();
N.mover();
Sleep(100);
if(N.vidas==0){N.muertefinal();perdiste=true;}
  }
system("cls");
limites();

grabarRegistro(puntos,nombre,cont1,cont2,cont3);

break;}

    case 2:{
        int tam2=contarRegistros();
        int *v;

        v=new int[tam2];

       system("cls");
       if(contarRegistros()<0){cout<<"NO HAY NINGUN JUGADOR RGISTRADO"<<endl;}

       *v=mostrarRegistros(v,tam2);

       leerRegistro(v);
       delete v;
break;}}
return 0;}


void cargarCadena(char *palabra, int tamano){
    int i=0;
    fflush(stdin);
    for (i=0; i<tamano; i++){
        palabra[i]=cin.get();
        if (palabra[i]=='\n'){
            break;
        }
    }
    palabra[i]='\0';
    fflush(stdin);
}
