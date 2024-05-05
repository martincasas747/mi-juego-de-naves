

class lvl2{
int x,y;
int cont=1;
public:
    lvl2(int _x, int _y):x(_x),y(_y){}
    int Xene(){return x+3;}
    int Yene(){return y+3;}
    void crear();
    void mover();
    void mover2();
    void coli(class NAVE &n);
    void borrar();
    void explota();


};
void lvl2::crear(){
go(x+3,y);   printf("%c %c",200,188);
go(x+3,y+1); printf(" %c ",219);
go(x+3,y+2); printf(" %c ",86);

}


void lvl2::borrar(){
go(x+3,y);   printf ("   ");
go(x+3,y+1); printf ("   ");
go(x+3,y+2); printf ("   ");
}


void lvl2::mover(){

 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
 go(x+3,y+2); printf ("   ");

y++;
 x++;
if(y>26||x>68){
    x=rand()%71;
    y=4;}
crear();


}

void lvl2::mover2(){

 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
 go(x+3,y+2); printf ("   ");

y++;
 x--;
if(y>26||x<2){
    x=rand()%71;
    y=4;}
crear();


}


void lvl2::explota(){
 go(x+3,y);   printf ("* *");
 go(x+3,y+1); printf (" * ");
 go(x+3,y+2); printf (" * ");
 Sleep(200);
 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
 go(x+3,y+2); printf ("   ");
 go(x+3,y);   printf ("* *");
 go(x+3,y+1); printf ("* *");
 go(x+3,y+2); printf ("* *");
 Sleep(200);
 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
 go(x+3,y+2); printf ("   ");
}



void lvl2::coli(class NAVE &n){

    if( x+5 >= n.X()&& x < n.X()+3 && +3 && y+2 >= n.Y()&&y+2 >= n.Y()&& y+2 <= n.Y() ){
    n.danio();
    n.pintar();
    explota();
    n.pintarcora();
    x=rand()%71;
    y=4;
    }

}
