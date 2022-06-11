#include "mbed.h"
//===Digital Pin==//
DigitalOut A(D6);
DigitalOut B(D9);
DigitalOut C(D10);
DigitalOut D(D5);
//===Digital Pin==//

//===Digital Button==//
DigitalIn button(D12);

int flag = 0;

int main() {
    
//====Start Button===//
    while (button == 0) {//*While the button is off, stop the car.
        A = 0;
        B = 0;
        C = 0;
        D = 0;
        }
        wait(1);

//===Car Running Series===//  
//*Indentation matter, when coding this the code will read the while loop
//*that is the most outer part first.*//

        while(1){
        
        //===Foward===//
           A = 1;
           B = 0;
           wait (0.000001);
           C = 1;
           D = 0;
        
        //===Run Series===//
        if (button == 1) {
            
            if (flag == 6) {
                
                A = 0;
                B = 0;
                wait (0.0001);
                C = 0;
                D = 0;
                wait (0.01);
                break;
                
                }
                
            else {
                 
                //===Backward===//
                flag = flag++;
                A = 0;
                B = 1;
                wait (0.001);
                C = 0;
                D = 1;}
                wait (0.001);
                
                //===Right Turn===//
                A = 0;
                B = 1;
                wait (0.557);
                C = 1;
                D = 1;
                wait (0.5);
                }
            
            }
            
    
    

}



