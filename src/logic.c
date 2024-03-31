#include <logic.h>

int add(int num_1, int num_2){
    return num_1 + num_2;
}

int subtract(int num_1, int num_2){
    return num_1 - num_2;
}

int multiply(int num_1, int num_2){
    return num_1 * num_2;
}

double divide(int num_1, int num_2){
    if(num_2 != 0)
    {
        return (double) num_1 / num_2;
    }
    return -1.0;
}
