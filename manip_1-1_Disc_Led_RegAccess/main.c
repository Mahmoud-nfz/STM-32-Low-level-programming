#include <stdint.h>

#define   Reg_Enable_RCC     (uint32_t*) .......... // adresse du registre APBxENR (pour activer les GPIOs utils�s)
#define   GPIOC_CRL		     (uint32_t*) .......... // adresse du registre (GPIO C)
#define   GPIOC_CRH		     (uint32_t*) .......... // adresse du registre (GPIO C)
#define   Reg_BSRR_Led	     (uint32_t*) .......... // adresses du registre permettant la mise � 1 des bits du GPIO C
#define   Reg_BRR_Led	     (uint32_t*) .......... // adresses du registre permettant la mise � 0 des bits du GPIO C



main ()
{
 int i;
 
 // activer l'horloge du port C (reli� aux leds)
 *Reg_Enable_RCC  =  ......;

 // Configurer les bits reli�s aux leds
 *GPIOC_CRH = ......;
 
 while (1)
  {
    // allumer les deux leds
 *Reg_BSRR_Led = ......;
 
  for(i=0xFFFFF; i != 0; i--); // Delay
  
  // Eteindre les deux leds.
 *Reg_BRR_Led = ......; 
 
 for(i=0xFFFFF; i != 0; i--); // Delay
   }
}
