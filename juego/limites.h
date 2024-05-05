#ifndef LIMITES_H_INCLUDED
#define LIMITES_H_INCLUDED
 void limites(){
  for(int i=2;i<77;i++){
    go(i,3); printf("%c",205);
    go(i,30); printf("%c",205);

  }
  for(int i=4;i<30;i++){
    go(2,i); printf("%c",186);
     go(77,i); printf("%c",186);
  }
  go(2,3); printf("%c",201);
  go(2,30);printf("%c",200);
  go(77,3);printf("%c",187);
  go(77,30);printf("%c",188);


}


#endif // LIMITES_H_INCLUDED
