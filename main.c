//funzione per la addizione
int somma (int a, int b)
{
    int risultato;//variabile utilizzato come accumulatore per il risultato
    
    risultato = a + b;//formula
    
    return risultato;
}
//funzione per la sottrazione
int differenza (int a, int b)
{
    int risultato;//variabile utilizzato come accumulatore per il risultato
    
    risultato = a - b;//formula
    
    return risultato;
}
//funzione per la moltiplicazione
int prodotto (int a, int b)
{
    int risultato;//variabile utilizzato come accumulatore per il risultato
    
    risultato = a * b;//formula
    
    return risultato;
}
//funzione per la divisione senza resto
float divisione (float a, float b)
{
    float risultato;//variabile utilizzato come accumulatore per il risultato
    
    risultato = a / b;//formula
    
    return risultato;   
}
//funzione per l'elavazione a potenza
int potenza (int a, int b)
{
    //
    int risultato=1;//variabile utilizzato come accumolatore dei risultati ottenuti
    int q=0;//variabile per contare l'esponente
    
    //è stato utilizzato il ciclo while per moltiplicare la base (a) per quanto è grande l'esponente (q+1; b-1)
    while (q<b) 
    {
                risultato*=a;
                q++;

    }
    
    return risultato;
}
//funzione per la divisione con il resto
float divisioneconresto (int a, int b)
{
      //variabili
      float risultato;//variabile utilizzato come accumulatore per il risultato e per il resto
      int git;//variabili utilizzata come risultato intero senz aresto
      
      risultato= (float) a/b;
      git= (int) a/b;
      risultato= (float) risultato - git;

      return risultato;     
}

int main(int argc, char** argv) {
//descrizioni delle variabili
    float a, b;//variabili per i numeri
    int operazione;
    float risultato, f;
    int q;
    
 //inizio del programma (accoglienza verso l'utente)
        printf("\nInserire primo opeando (a): ");  
        scanf("%f", &a);//mette il numero sulla variabile a
        printf("\nInserire secondo operando (b): ");  
        scanf("%f", &b);//mette il numero sulla variabile b
        //permette sulla scelta dell'operazione
        printf("\n1-moltiplicazione; \n2-divisione; \n3-elevazione a potenza; \n4-divisione normale con il resto; \n5-addizione; \n6-sottrazione\n");
        printf("Scegli l'operazione ");
        scanf("%d", &operazione);//permette di scegliere l'operazione (numero)
        //4-divisione normale con il resto utilizzando il casting
                
            switch (operazione) {
                   //caso per la moltiplicazione
                    case 1:
                        risultato = prodotto(a, b);
                        printf("%f*%f=%f\n", a, b, risultato);
                        break;
                        //caso per la divisione
                    case 2:
                        risultato = divisione(a, b);
                        printf("%f/%f=%f\n", a, b, risultato);
                        break;
                        //caso per la potenza
                    case 3:
                        risultato = potenza(a, (int)b);
                        printf("%f^%d=%f\n", a, (int)b, risultato);
                        break;
                        //caso per la divisione con il resto
                    case 4: 
                        risultato = risultato((int)a, (int)b);
                        git = git((int)a, (int)b);
                        printf("%f/%f= %d (intera) e %f (frazionale)\n", a, b, q, f);
                        break;
                        //caso per l'addizione
                    case 5:
                        risultato = somma(a, b);
                        printf("%f+%f=%f\n", a, b, risultato); 
                        break;
                        //caso per la differenza
                    case 6:
                        risultato = differenza(a, b);
                        printf("%f-%f=%f\n", a, b, risultato);
                        break;
                    default:;
            }
    return 0;
}
