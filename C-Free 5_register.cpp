//this code is for software "C-Free 5"
//using be course CSYE6205
//

#include "stdlib.h" 
#include "stdio.h"

int main(int argc, char* argv[]) 
{ 
         char chKey[128] = {0}; 
         int i = 0; 
         unsigned int unXORCode, unRemainder, unQuotient, unTmp, unMachineCode; 
         printf("Please Key in the Machine Code:\n"); 
         scanf("%d", &unMachineCode);

         unXORCode    = unMachineCode ^ 0x90909090; 
         unRemainder = unXORCode % 0x25; 
         unQuotient   = unXORCode; 
         if (unRemainder < 0x11) 
         { 
                 unRemainder += 0x11; 
         } 
         while (unQuotient != 0) 
         { 
                 unTmp           = unQuotient % unRemainder; 
                 unQuotient /= unRemainder; 
                 if (unTmp >= 0xa) 
                 { 
                         unTmp = unTmp + 0x61 + 0xf6; 
                         unTmp &= 0x0ff; 
                         chKey[i] = unTmp; 
                 } 
                 else 
                 { 
                         chKey[i] = unTmp + 0x30; 
                 } 
                 i++; 
         } 
         printf("Key is: \n"); 
         while (i &gt;= 0) 
         { 
                 printf("%c", chKey[i]); 
                 i--; 
         } 
         printf("\n"); 
         getch(); 
         return 0; 
}
