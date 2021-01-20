#include <stdio.h>
#include <stdbool.h>


bool menuQuit = false;
unsigned short selection;

void pmenu() {
    do {
        // Printing
        printf("\n1)--> Menu_Entry 1");
        printf("\n2)--> Menu_Entry 2");
        /*...
        < Add your menu entries here... >
        ...*/
        printf("\n\n- Digit 0 (ZERO) to quit\n\n");

        // Selecting action
        printf("\n|>> ");   //cursor
        scanf("%hd", &selection);
        
        //Launch selected program
        switch(selection) {

            default : printf("\n\nWrong Digit\n\n"); break;

            case 0 :
                menuQuit = true;   //quit
                break;
            
            case 1 :
                //do something...
                break;
            
            case 2 :
                //do another thing...
                break;
            
            // < Add as many cases as you need... >
        }

    } while(!menuQuit);
}
