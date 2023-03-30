//
//  main.c
//  Algorithm_Chapter1_7
//
//  Created by 한설 on 2023/03/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void find_poison(void);

int main(int argc, const char * argv[]) {
    
    find_poison();
    return 0;
}

void find_poison(void){
    double alcohol;
    
    scanf("%lf", &alcohol);
    double sin = log2(alcohol);
    printf("%d", (int)sin);
    if (sin + 1 > (int)sin + 1)
        sin += 1;
    
    printf("필요한 신하는 %d", (int)sin);
}
