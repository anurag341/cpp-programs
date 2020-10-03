#include <graphics.h> 
  
// driver code 
int main() 
{ 
    // gm is Graphics mode which is a computer display.
    // DETECT is a macro defined in "graphics.h" header file 
    int gd = DETECT, gm; 
  
    // initgraph initializes the graphics system  
    initgraph(&gd, &gm, ""); 
    int m=getmaxx();
    int n=getmaxy();
    setcolor(WHITE);
    line((m/2),0,(m/2),n);
    line(0,(n/2),m,(n/2));  
    
    getch(); 
    closegraph();
   return 0; 
} 
