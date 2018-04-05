// includo la libreria LiquidCristal
#include <LiquidCrystal.h>

//crea un oggetto lcd inizializzandolo con i pin relativi
//Nell'ordine RS EN D4 D5 D6 D7
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
// variabile utilizzata per il conteggio dei cicli
int contatore = 0;

void setup () {
    // imposta colonne e righe del display
    lcd. begin (16, 2);
    // stampa un messaggio
    lcd.print ("Hello˽World!!!");
  } 

  void loop ()  {
      // sposta il cursore alla linea 1, colonna 0
      lcd.setCursor (0, 1);
      // incrementa e stampa il numero di cicli
      contatore++;
      lcd.print (contatore);
      // aspetto un secondo
      delay (1000);
 }      
