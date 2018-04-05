#include <SevSeg.h>
// crea un oggetto display specificando i pin e il tipo
SevSeg display (2, 3, 4, 5, 6, 7, 8, COMMON_CATHODE);

void setup () {
    // non ci sono inizializzazioni da fare

 } 

 void loop ()  {
     for (byte i=0; i<=9; i++) {
         display.print (i); // visualizza le cifre da 0 a 9
         delay (1000);
    }       
} 