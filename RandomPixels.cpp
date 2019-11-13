/* Showing Pixels on screen*/

#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
    int i,j,x,y=rand()%6,cn=0;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int n,d=5, it=100;
    while(it--){
        setcolor(rand()%16);
        int a=100+rand()%600,b=100+rand()%600;
        //putpixel(a,b,rand()%16);              ///Using putpixel() function
        rectangle(a,b,a+d,b+d);                 ///Using Rectangle() function
        delay(rand()%1000);
        if(cn>=y){
            //cleardevice();
            y=rand()%6;
        }
    }
    getch();
    closegraph();
}


