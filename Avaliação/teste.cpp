//sorteia matriz (entre A e Z)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.c>
#include <ctype.h>

#define tam 25
#define maxpal 100 

FILE *arqpal;

char palavra[tam];
char tab[tam][tam];
char tab2[tam][tam];
int direcao,col,lin,p,x,y,tampal;


bool abreArquivo();
void leArquivo();
void sorteiaTab();
void mostraTab(int tempo, bool tudo);
void sorteiaDirecao();
void atualizaTabs(int dir);
void procuraPalavra();
void display(bool tudo);
void alteraColLin(int tip, int p, char* substr);

//---------------------------------------------
int main () {
char continua;  
  srand(time(NULL));
  if (abreArquivo()==false)
    return 0;
  do{
    system("cls");
    leArquivo();
    sorteiaTab();
    sorteiaDirecao();
    mostraTab(5,true);
    procuraPalavra();
    display(true);
    mostraTab(0,false);
    gotoxy(55,24);
    printf("Continuar? ");
    continua=toupper(getch());
  }  
  while (continua=='S');
  return 0;
}
//---------------------------------------------
bool abreArquivo(){
  arqpal = fopen("palavras.txt", "r"); //leitura
  if (arqpal == NULL)
  {  // Se houve erro na leitura do arquivo
     printf("Problemas na leitura do arquivo\n");
     system("pause");
     return false; //não conseguiu abrir o arquivo
  }   
  else
  {
     fclose(arqpal);
     return true; //conseguiu abrir o arquivo
  }   
}
//---------------------------------------------
void leArquivo(){
int palsort=rand()%maxpal;
   arqpal = fopen("palavras.txt", "r"); //leitura
   for (x=0; x<=palsort; x++)
      fgets(palavra,tam,arqpal);
   palavra[strlen(palavra)-1]='\0';
   fclose(arqpal);
}
//---------------------------------------------
void sorteiaTab(){
char vog[6]="AEIOU";
char con[22]="BCDFGHJKLMNPQRSTVXWYZ";
int cont=1;
  for (int x=0; x<tam; x++)
    for (int y=0; y<tam; y++){
      tab2[x][y]=' ';
      if (cont==1 || cont==3)
         tab[x][y]=vog[rand()%5];
      else
         tab[x][y]=con[rand()%21];
      cont++;
      if (cont>3)
        cont=1;
    }
}
//---------------------------------------------
void atualizaTabs(int dir){
  p=0;
  for (x=0; x<tam; x++)
    for (y=0; y<tam; y++)
      tab2[x][y]=' ';
         
switch (dir){
     case 1: //baixo
          for (x=lin; x<lin+tampal; x++){  
            tab[col][x]=palavra[p];
            tab2[col][x]=palavra[p];
            p++;
            }
          break;
     case 2: //cima
          for (x=lin; x>lin-tampal; x--){
            tab[col][x]=palavra[p];
            tab2[col][x]=palavra[p];
            p++;
            }
          break;
     case 3://esquerda
          for (x=col; x>col-tampal; x--){
            tab[x][lin]=palavra[p];
            tab2[x][lin]=palavra[p];
            p++;
            }
          break;
     case 4://direita
          for (x=col; x<col+tampal; x++){ 
           tab[x][lin]=palavra[p];
            tab2[x][lin]=palavra[p];
            p++;
            }
          break;
  }
}
//---------------------------------------------     
void display(bool tudo){
char displaydir[4][15]={"Para baixo","Para cima", "Para esquerda","Para direita"};
  textcolor(15);
  gotoxy(55,04); printf("     Palavra:");
  gotoxy(55,05); printf("Tam. palavra:");
  if (tudo){
    gotoxy(55,06); printf(" Localizacao:");
    gotoxy(55,07); printf("     Direcao:");
  }  
  textcolor(14);
  gotoxy(69,04); printf("%s          ",palavra);
  gotoxy(69,05); printf("%i",tampal);
  if (tudo){
    gotoxy(69,06); printf("col %i lin %i",col,lin);
    gotoxy(69,07); printf("%s",displaydir[direcao-1]);
  }
  textcolor(7);
}
//---------------------------------------------     
void sorteiaDirecao(){
bool ok;  
  direcao=(rand()%4)+1; 
  //1 para baixo
  //2 para cima
  //3 para esquerda
  //4 para direita  
  do{
    ok=true;
    col=(rand()%tam);  
    lin=(rand()%tam);
    tampal=strlen(palavra);
     
    if ((direcao==1) && (tampal>(tam-1-lin)))
      ok=false;  //baixo
    if ((direcao==2) && (lin-tampal<0))
      ok=false;  //cima
    if ((direcao==3) && (tampal<(tam-1-col)))
      ok=false;  //esquerda
    if ((direcao==4) && (col+tampal>tam))  
      ok=false; //direita
  }
  while (ok==false);
  display(false);
  atualizaTabs(direcao);
}
//---------------------------------------------
void mostraTab(int tempo, bool tudo){
  char tab3[tam][tam];
  int x,y,tot=0,ct;  
  bool jafoi;
  _setcursortype(_NOCURSOR);
  
  for (x=0; x<tam; x++)
     for (y=0; y<tam; y++)
       tab3[x][y]=' ';
  
  for (tot=1; tot<=(tam*tam); tot++){
      do{
        jafoi=false;
        x=rand()%tam;
        y=rand()%tam;
        if (tab3[x][y]=='*')
           jafoi=true;             
      }
      while (jafoi);
      tab3[x][y]='*';              
      ct=(rand()%14)+1;
      if (tab2[x][y]==' ' || tudo==true){
             textcolor(ct);
             textbackground(0);     
             }
           else{
             textbackground(15);
             textcolor(0);
             }
        
        gotoxy((x+1)*2,y+1);
        Sleep(tempo);
        if (tudo)
           printf("%c",tab[x][y]);
           else
             if (tab2[x][y]!=' ')    
               printf("%c",tab[x][y]);
  }
  gotoxy(1,25);
  textcolor(7);
  _setcursortype(_NORMALCURSOR);
}
//----------------------------------------------------
void alteraColLin(int tip, int p, char* substr){
  strcpy(palavra,substr);
  tampal=strlen(substr);
  direcao=tip;
  
  if (tip==4 || tip==3){
    lin=p/tam;
    if (lin>0)
      col=(p%tam);
    else
      col=(p+tam)%tam;
  }
  if (tip==1 || tip==2){
    col=p/tam;
    if (col>0)
      lin=(p%tam);
    else
      lin=(p+tam)%tam;
  }
  atualizaTabs(direcao); 
}
//----------------------------------------------------
void procuraPalavra(){
char palavraProc[tam];
  bool achou;
  char bigstring[(tam*tam)+1]; 
  char tmp[2];
  int i,j,tampaltmp;
  
  bigstring[tam*tam]='\0';
  tmp[1]='\0';
  do{
    gotoxy(55,12);
    printf("Palavra a procurar (Min 4): ");
    gets(palavraProc);
  }while (strlen(palavraProc)<4);  
  tampaltmp=strlen(palavraProc); 
  strupr(palavraProc);
  //procurando para direita
  strcpy(bigstring,"");
  for (int x=0; x<tam; x++)
    for (int y=0; y<tam; y++){
      tmp[0]=tab[y][x];
      strcat(bigstring,tmp); 
    }
  
  for (i = 0; i <= (tam*tam) - tampaltmp; i++) {
    achou = true;
    for (j = 0; j < tampaltmp; j++) 
      if (bigstring[i+j] != palavraProc[j]) {
        achou = false;
        break;
      }
    if (achou){ 
      alteraColLin(4,i,palavraProc);
      return;
    }  
  }
  //procurando para esquerda
  for (i = (tam*tam)-1; i >= tampaltmp-1; i--) {
    achou = true;
    for (j = tampaltmp-1; j >=0; j--) 
      if (bigstring[i-j] != palavraProc[j]) {
        achou = false;
        break;
      }
   if (achou){ 
     alteraColLin(3,i,palavraProc);
     return;
   }  
  }
  //procurando para BAIXO
  strcpy(bigstring,"");
  for (int x=0; x<tam; x++)
    for (int y=0; y<tam; y++){
      tmp[0]=tab[x][y];
      strcat(bigstring,tmp); 
    }
  
  for (i = 0; i <= (tam*tam) - tampaltmp; i++) {
    achou = true;
    for (j = 0; j < tampaltmp; j++) 
      if (bigstring[i+j] != palavraProc[j]) {
        achou = false;
        break;
      }
    if (achou){ 
      alteraColLin(1,i,palavraProc);
      return;
    }  
  }
  //procurando para CIMA
  for (i = (tam*tam)-1; i >= tampaltmp-1; i--) {
    achou = true;
    for (j = tampaltmp-1; j >=0; j--) 
      if (bigstring[i-j] != palavraProc[j]) {
        achou = false;
        break;
      }
    if (achou){ 
      alteraColLin(2,i,palavraProc);
      return;
    }  
  }
  return; //nao encontrou 
}
