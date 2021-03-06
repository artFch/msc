#include "mySimpleComputer.h"
#include <stdio.h>

int main()
{
    int tempValue = 0;
    int tempReg = 0;
    sc_regInit();
    sc_memorySet(3, 15);
    sc_memoryGet(3, &tempValue);
    printf("%d\n", tempValue);
    sc_memoryInit();
    sc_memoryGet(3, &tempValue);
    printf("%d\n", tempValue);
    sc_memorySave("text.txt");
    sc_memorySet(3, 15);
    sc_memoryLoad("text.txt");
    sc_memoryGet(3, &tempValue);
    printf("%d\n", tempValue);

    sc_regSet(2, 1);
    sc_regSet(3, 1);
    sc_regSet(5, 1);
    sc_regGet(2, &tempReg);
    printf("%d\n", tempReg);
    sc_regGet(3, &tempReg);
    printf("%d\n", tempReg);
    sc_regGet(4, &tempReg);
    printf("%d\n", tempReg);
}