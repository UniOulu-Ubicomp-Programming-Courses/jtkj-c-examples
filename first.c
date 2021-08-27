/**************************************
 * Ensimmäinen c-ohjelma                         
 **************************************/

/*
 * Esikääntäjäkäskyt
 */
// Kirjasto stdio mukaan ohjelmaan
#include <stdio.h> 

// Vakion PI esittely
#define PI 3.14159 

/*
 * Ohjelman sisäisten muuttujien ja funktioiden esittely
 */

// Esitellään oma funktio laske_ala prototyypin avulla
float laske_ala(float sade);  

/*
 * Pääohjelman main toteutus 
 */
int main() { 

   // Pääohjelman sisäisten muuttujien esittely (ja alustus)
   float ympyran_ala = 0.0, ympyran_sade = 0.0;

   // Pääohjelman toiminnallisuus
   printf("Anna ympyrän säde: "); 
   scanf("%f", &ympyran_sade);  
   ympyran_ala = laske_ala(ympyran_sade);
   printf("Ympyrän pinta-ala on: %.2f\n", ympyran_ala);

   // Pääohjelman (funktion) palautusarvo
   return 0;  
}  

/*
 * Funktio: laske_ala, laskee ympyrän alan annetusta säteestä
 * Argumentit: sade, ympyrän säde
 */
float laske_ala(float sade)  {

   // Funktion sisäisten muuttujien esittely (ja alustus)
   float pinta_ala = 0.0;

   // Funktion toiminnallisuus
   pinta_ala = PI * sade * sade;

   // unktion palautusarvo
   return pinta_ala;  
}
