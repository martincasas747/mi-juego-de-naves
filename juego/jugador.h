
class jugador{
public:

    int puntos;
    char name[30];
    int nave1=0;
    int nave2=0;
    int nave3=0;
   void setpuntos(int pts){puntos=pts;}
   void setnombre( char *n){strcpy(name,n);}
   int getpuntos(){return puntos;}
   char *getnombre(){return name;}
   void cargar(char *n,int pts){
    strcpy(name,n);
    puntos=pts;
   }
    void verpuntos(){
   cout<<"puntos :"<<getpuntos()<<endl;}
   void vernombre(){
   cout<<"jugador :"<<getnombre()<<endl;}
   void vernaves(){
   printf("%c,%c",191,218);cout<<"    "<<nave1<<endl;
   printf("%c,%c",200,188);cout<<endl;
   cout<<">>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
     printf("%c %c",200,188); cout<<"    "<<nave2<<endl;
     printf(" %c ",219); cout<<endl;
     printf(" %c ",86); cout<<endl;
     cout<<">>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
      printf("%c%c%c",195,254,180);cout<<"     "<<nave3<<endl;
   }
};








int contarRegistros(){
        FILE *p;
        p=fopen("jugador.dat", "rb");
        if(p==NULL) return -1;
        fseek(p, 0,2);
        int tam=ftell(p);
        fclose(p);
        return tam/sizeof(jugador);}



bool grabarRegistro(int pts,char *n,int c1, int c2, int c3){
    jugador reg;
    FILE *pjug;
    pjug=fopen("jugador.dat", "ab");
    if(pjug==NULL){
        return false;
    }
    go(30,15);
    reg.setnombre(n);
    reg.puntos=pts;
    reg.nave1=c1;
    reg.nave2=c2;
    reg.nave3=c3;
    bool escribio=fwrite(&reg,sizeof reg,1,pjug);
	fclose(pjug);
    return escribio;
}



int  mostrarRegistros(int *vp,int tam){
    jugador reg;
    FILE *pjug;
    pjug=fopen("jugador.dat", "rb");
    if(pjug==NULL){
        return -1;
    }
system("cls");
int t=0;
    while( fread(&reg,sizeof reg,1,pjug)==1){
   vp[t]=reg.puntos;
   t++;
}
fclose(pjug);
    int aux;
   for(int x=t;x>=0;x--){
        for(int y=t;y>=0;y--){
            if(vp[y]>vp[y-1]){
             aux=vp[y];
             vp[y]=vp[y-1];
             vp[y-1]=aux;
}}}
    return *vp;}


bool leerRegistro(int *vp){
            jugador reg;
            FILE *pjug=fopen("jugador.dat","rb");
            if(pjug==NULL){
                return false;}
           int t=0;
             while( fread(&reg,sizeof reg,1,pjug)==1){
              t++;}
              for(int x=0;x<t;x++){
                  fseek(pjug,0,0);
              while(fread(&reg, sizeof reg, 1, pjug)==1){
                if(vp[x]==reg.getpuntos()){
            reg.vernombre();
            reg.verpuntos();
            reg.vernaves();
            cout<<endl<<"---------------------------------------"<<endl;
                }
              }
              }
  fclose(pjug);
}






