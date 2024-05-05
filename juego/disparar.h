
 class disp{
 int x,y;
 public:
     disp(int _x, int _y): x(_x),y(_y){}
     int X(){return x;}
     int Y(){return y;}
     void trayectoria();
     bool borra();

 };

 void disp::trayectoria(){
      go(x,y); printf(" ");
     if(y>4){y--;}
      go(x,y); printf("%c",94);
     }
bool disp::borra(){
if(y==4){return true;}
else{ return false;}
}
