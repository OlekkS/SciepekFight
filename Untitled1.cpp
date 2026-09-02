#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    int snkx=10,snky=7,koniec=0,res=0,cz=0,sek=0,fps=0;


  int BX = rand() % 18 + 2;
        int BY=0;
  int BX2 = rand() % 18 + 2;
        int BY2=1;
  int BX3 = rand() % 18 + 2;
        int BY3=1;
  int BX4 = rand() % 18 + 2;
        int BY4=0;
  int BX5 = rand() % 18 + 2;
        int BY5=1;

  int RY = rand() % 8 + 2;
        int RX=20;
  int RY2 = rand() % 8 + 2;
        int RX2=20;
  int RY3 = rand() % 8 + 2;
        int RX3=20;
  int RY4 = rand() % 8 + 2;
        int RX4=20;
int RY5 = rand() % 8 + 2;
        int RX5=20;
  int RY6 = rand() % 8 + 2;
        int RX6=20;

  int AY = rand() % 2 + 4;
        int AX=1;

int AY2 = rand() % 2 + 4;
        int AX2=1;





    while(koniec==0){





    if(res==1){


BX = rand() % 18 + 2;
        BY=0;
  BX2 = rand() % 18 + 2;
        BY2=1;
  BX3 = rand() % 18 + 2;
        BY3=1;
  BX4 = rand() % 18 + 2;
        BY4=0;
  BX5 = rand() % 18 + 2;
        BY5=1;


            RY = rand() % 8 + 2;
         RX=20;
   RY2 = rand() % 8 + 2;
         RX2=20;
   RY3 = rand() % 8 + 2;
         RX3=20;
   RY4 = rand() % 8 + 2;
         RX4=20;
 RY5 = rand() % 8 + 2;
         RX5=20;
   RY6 = rand() % 8 + 2;
         RX6=20;

            AY = rand() % 2 + 4;
         AX=1;

 AY2 = rand() % 2 + 4;
         AX2=1;


    snkx=10;
    snky=7;
    res=0;

}





if(sek<10){

if(BY==10){
    BX = rand() % 18 + 2;
    BY=1;
}
if(BY2==10){
    BX2 = rand() % 18 + 2;
    BY2=1;
}
if(BY3==10){
    BX3 = rand() % 18 + 2;
    BY3=1;
}
if(BY4==10){
    BX4 = rand() % 18 + 2;
    BY4=1;
}
if(BY5==10){
    BX5 = rand() % 18 + 2;
    BY5=1;
}
}
if(sek<20){

if(RX<=1){
    RY = rand() % 8 + 2;
         RX=20;
}
if(RX2<=1){
       RY2 = rand() % 8 + 2;
         RX2=20;
}
if(RX3<=1){
       RY3 = rand() % 8 + 2;
         RX3=20;
}
if(RX4<=1){
       RY4 = rand() % 8 + 2;
         RX4=20;
}
if(RX5<=1){
       RY5 = rand() % 8 + 2;
         RX5=20;
}
if(RX6<=1){
       RY6 = rand() % 8 + 2;
         RX6=20;
}
}if(sek>23){
if(AX>=20){
    AY = rand() % 2 + 4;
         AX=1;

}
}
if(sek>23){

if(AX2>=20){
    AY2 = rand() % 2 + 4;
         AX2=1;
}

}






















if(snky==1 || snky==10 || snkx==1 || snkx==20 || snky==BY && snkx==BX || snky==BY2 && snkx==BX2 || snky==BY3 && snkx==BX3 || snky==BY4 && snkx==BX4 || snky==BY5 && snkx==BX5 ||  snky==RY && snkx==RX || snky==RY2 && snkx==RX2 || snky==RY3 && snkx==RX3 || snky==RY4 && snkx==RX4|| snky==RY5 && snkx==RX5 || snky==RY6 && snkx==RX6){
                    koniec=1;
                }
if(sek>22 && sek < 40 && (snky==2 || snky==3 || snky==6 || snky==7 || snky==8 || snky==9|| snky ==AY && snkx==AX||snky ==AY2 && snkx==AX2)){
    koniec=1;
}

    if(sek<=10){
        if(cz==10){
        cz=0;
        sek++;
        }
    }else if(sek>10 && sek <23){

    if(cz==20){
        cz=0;
    sek++;
    }

    }else if(sek>=23 && sek < 40){
    if (cz==40){
        cz=0;
        sek++;
    }

    }







    cout << "Czas:" << sek << "sekund" << endl;




    for(int i=1;i<=10;i++)
        {



        for(int j=1;j<=20;j++)
        {

                if(i==1 || i==10)
                {

                    cout << "#";

                }else if(j==1 || j==20)
                {

                cout << "#";
                }else if(i==snky && j==snkx)
                {
                    cout << "O";


                }else if(i==BY && j==BX || i==BY2 && j==BX2 || i==BY3 && j==BX3 || i==BY4 && j==BX4 || i==BY5 && j==BX5){
                cout << "V";

                }else if(i==RY && j==RX || i==RY2 && j==RX2 ||i==RY3 && j==RX3 ||i==RY4 && j==RX4||i==RY5 && j==RX5 ||i==RY6 && j==RX6){



                cout << "<";


                }else if(sek>20 && sek <22 && (i==2 || i==3 || i==6|| i==7|| i==8|| i==9)){
                    cout << "!";
                }else if(sek>22 && sek < 40 && (i==2 || i==3 || i==6|| i==7|| i==8|| i==9)){
                cout << "#";
                }else if(i==AY && j==AX || i==AY2 && j==AX2){
                cout << ">";
                }

                else
                {
                    cout << " ";
                }


    }
    cout << endl;

        }

        char ruch;
    while (_kbhit()){
{
    ruch = _getch();

    if(ruch=='w')
    {
        snky--;
    }
    if(ruch=='s')
    {
        snky++;
    }
    if(ruch=='a')
    {
        snkx--;
    }
    if(ruch=='d')
    {
        snkx++;

        }
}


        if(snky==1 || snky==10 || snkx==1 || snkx==20 || snky==BY && snkx==BX || snky==BY2 && snkx==BX2 || snky==BY3 && snkx==BX3 || snky==BY4 && snkx==BX4 || snky==BY5 && snkx==BX5 ||  snky==RY && snkx==RX || snky==RY2 && snkx==RX2 || snky==RY3 && snkx==RX3 || snky==RY4 && snkx==RX4|| snky==RY5 && snkx==RX5 || snky==RY6 && snkx==RX6){
                    koniec=1;
                }
if(sek>22 && sek < 50 && (snky==2 || snky==3 || snky==6 || snky==7 || snky==8 || snky==9 || snky ==AY && snkx==AX||snky ==AY2 && snkx==AX2)){
    koniec=1;
}
    }
    if(sek<11){
        Sleep(100);
        cz++;
    }else if(sek >= 11 && sek < 21){
    Sleep(50);
    cz++;
    }else{
        Sleep(25);
    cz++;
    }


if(sek<11){
BY++;
BY2++;
BY3++;
BY4++;
BY5++;
}
if(sek>11 && sek<21){
    RX--;
    RX2--;
    RX3--;
    RX4--;
    RX5--;
    RX6--;
}
if(sek>23 && sek<40){
AX++;
}
if(sek>26 && sek<40){
AX2++;
}
    system("cls");








if(koniec==1){

    cout << "GAME OVER" << endl << sek << " sekund" << endl << endl << "1 - play again?" << endl << "2 - play stage II" << endl << "3 - play stage III" << endl;



    cout << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⠟⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣳⠖⠳⣄⡀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⡤⠒⠀⠂⡾⠉⠀⠀⠀⠀⠉⢳⡄⣄⡀⠀⠀" << endl;
    cout << "⠀⠀⠀⢸⡥⠀⣀⡼⢁⠀⢰⡄⠀⡄⠀⠀⣧⠀⠙⡆⠀" << endl;
    cout << "⠀⢀⣠⠼⠗⠚⠉⠠⠋⠀⠀⢷⣠⣧⠀⠀⠈⠳⢤⣇⠀" << endl;
    cout << "⠀⣾⣟⠒⠦⣄⠀⠀⠀⣠⡴⠋⠁⢈⠛⢦⣄⣠⣴⣾⣷" << endl;
    cout << "⢀⡟⠙⢶⣤⠬⠷⣼⡏⠉⠉⢩⡍⠹⠦⢤⣿⣤⣨⣿⠈" << endl;
    cout << "⣡⠆⠁⠀⠀⠀⢠⡀⠀⠀⠀⢱⡀⠀⠂⠙⠎⠻⡅⠀" << endl;
    cout << "⢿⠁⠒⣤⠤⣤⣀⠀⢧⠀⠀⠀⣸⠃⠀⠀⠀⡶⣤⣽⠀" << endl;
    cout << "⠈⠳⣴⡇⠀⠀⠈⠛⢦⣄⣠⠾⢿⣄⣀⣠⠾⣡⠞⠁⠀" << endl;
    cout << "⠀⠀⠈⠉⠉⠉⠁⢧⢠⠟⣽⠀⢿⠀⢧⢰⡈⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠐⢫⠏⢸⠁⠀⠈⢳⠘⢧⣙⢦⠀" << endl << endl;






    char e= _getch();


Sleep(500);
    if(e=='1'){
cout << "Procesing...";
Sleep(1000);
        koniec=0;
        res=1;
            cz=0;
    sek=0;
    }else if(e=='2'){
    cout << "Procesing...";
Sleep(1000);
        koniec=0;
        res=1;
        sek=11;
        cz=0;
    }else if(e=='3'){
    cout << "Procesing...";
Sleep(1000);
        koniec=0;
        res=1;
        sek=21;
        cz=0;
    }

}


}
}












