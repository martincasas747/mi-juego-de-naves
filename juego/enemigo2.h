 class enemigo2{
 int x,y;
 public:
    enemigo2(int _x, int _y):x(_x),y(_y){}
    int Xene(){return x+3;}
    int Yene(){return y+5;}
    void crear();
    void mover();
    void coli(class NAVE &n);
    void borrar();
    void explota();
};


void enemigo2::crear(){
go(x+3,y);printf("%c       %c",176,176);
go(x+3,y+1);printf("%c       %c",206,206);
go(x+3,y+2);printf("%c%c %c %c %c%c",200,205,187,201,205,188);
go(x+3,y+3);printf("  %c   %c    ",118,118);
go(x+3,y+4); printf("    %c  ",86);
 }


 void enemigo2::mover(){
go(x+3,y+2); printf("         ");
go(x+3,y);   printf("         ");
go(x+3,y+1); printf("         ");
go(x+3,y+3); printf("         ");
go(x+3,y+4); printf("         ");

 y++;
 if(y>25){

    x=rand()%63;

    y=4;}

crear();}
void enemigo2::explota(){


 go(x+3,y+1); printf ("  *    *  ");
 go(x+3,y+2); printf ("**  **  **");
 go(x+3,y+3); printf ("  *    *  ");
 go(x+3,y+4); printf ("    *     ");
 Sleep(200);





 go(x+3,y+1); printf ("          ");
 go(x+3,y+2); printf ("          ");
 go(x+3,y+3); printf ("          ");
 go(x+3,y+4); printf ("          ");
}

void enemigo2::coli(class NAVE &n){

    if( x+9 >= n.X()&& x < n.X()+3 && +3 && y+4 >= n.Y()&&y+4 >= n.Y()&& y+4 <= n.Y() ){
    n.muerte2();
    n.danioene2();
    n.pintar();
    explota();
    n.pintarcora();
    x=rand()%63;
    y=4;
    }

}





