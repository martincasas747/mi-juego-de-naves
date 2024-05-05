
class enemigo{
int x,y;


public:
    enemigo(int _x, int _y):x(_x),y(_y){}
    int Xene(){return x+3;}
    int Yene(){return y+3;}
    void crear();
    void mover();
    void coli(class NAVE &n);
    void borrar();
    void explota();

};
void enemigo::explota(){
 go(x+3,y);   printf ("**");
 go(x+3,y+1); printf ("**");
 Sleep(200);
 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
 go(x+3,y);   printf ("* *");
 go(x+3,y+1); printf ("* *");
 Sleep(200);
 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
}
void enemigo::crear(){
go(x+3,y);printf("%c,%c",191,218);
go(x+3,y+1); printf("%c,%c",200,188);

}


void enemigo::borrar(){
 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
}
void enemigo::mover(){
 go(x+3,y);   printf ("   ");
 go(x+3,y+1); printf ("   ");
 y++;
if(y>26){
    x=rand()%71;
    y=4;}
crear();
}

void enemigo::coli(class NAVE &n){

    if( x+5 >= n.X()&& x < n.X()+3 && +3 && y+2 >= n.Y()&&y+2 >= n.Y()&& y+2 <= n.Y() ){
    n.danio();
    n.pintar();
    explota();
    n.pintarcora();
    x=rand()%71;
    y=4;
    }

}



