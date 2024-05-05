class snitch{
int x,y;


public:
    snitch(int _x, int _y):x(_x),y(_y){}
    int Xene(){return x;}
    int Yene(){return y;}
    void crear();
    void mover();
    void coli(class NAVE &n);
    void borrar();
    void explota();

};
void snitch::explota(){
 go(x,y);   printf ("***");

 Sleep(200);
 go(x,y);   printf ("     ");

 go(x,y);   printf ("* * *");

 Sleep(200);
 go(x,y);   printf ("     ");



}

void snitch::crear(){
go(x,y);  printf("%c%c%c",195,254,180);


}
void snitch::borrar(){

  go(x,y);   printf ("    ");


}
void snitch::mover(){
 go(x,y);   printf ("    ");

 y++;
if(x<3||y>27||y<3||x>65){
borrar();
    x=rand()%70;
    y=4;}

crear();
}
void snitch::coli(class NAVE &n){

    if( x+5 >= n.X()&& x < n.X()+3 && +3 && y+2 >= n.Y()&&y+2 >= n.Y()&& y+2 <= n.Y() ){
    n.daniosnitch();
    n.pintar();
    explota();
    n.pintarcora();
    y=rand()%71;
    x=69;
    }

}
