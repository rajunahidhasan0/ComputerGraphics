/** Random length random color line */
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
    int i,j,x,y=rand()%6,cn=0;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    while(1){
        setcolor(rand()%16);
        line(rand()%500,rand()%500,rand()%500,rand()%500);
        delay(rand()%1000);
        cn++;
        if(cn>=10){
            cleardevice();
            y=rand()%6;
            cn=0;
        }
    }
    getch();
    closegraph();
}

