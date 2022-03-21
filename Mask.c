#include <stdio.h>
#include <stdarg.h>

unsigned count1(int mask,int size){
    int count = 0;
    for (int i = 0; i < size * 8; i++){
        count += !!(mask & (1 << i));
    }
    
    return count;
}


unsigned onesCount(int size, unsigned count, ...){
    unsigned cnt = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++){
        int mask = va_arg(args, int);
        cnt += count1(mask,size);
    }
    va_end(args);
    return cnt;
}

int main(){
  
   
    printf("%u\n", onesCount(3, 8, 1, 2, 3));
    return 0;
}