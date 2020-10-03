#include <graphics.h> 
  
// driver code 
int main() 
{ 
    // gm is Graphics mode which is a computer display.
    // DETECT is a macro defined in "graphics.h" header file 
    int gd = DETECT, gm; 
  
    // initgraph initializes the graphics system  
    initgraph(&gd, &gm, ""); 
    
    
    getch(); 
    closegraph();
   return 0; 
} 
