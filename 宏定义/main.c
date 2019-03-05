//
//  main.c
//  宏定义
//
//  Created by 伟大的大伟😘 on 2019/3/5.
//  Copyright © 2019 伟大的大伟😘. All rights reserved.
//

#include <stdio.h>
/** 1.宏定义 */
#define PI 3.141592654  //自动识别成double

/** 2.宏定义方法 */
#define swap(x,y)\
x = x + y;\
y = x - y;\
x = x - y;


/** 3.宏定义代码 */
#define LOG\
 int a = 3;\
 int b = 4;\
printf("a: %d\n",a);\
printf("b: %d\n",b);



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("PI:%.9f\n",PI);
    
    int x = 10;
    int y = 20;
    printf("交换之前：x->%d, x->%d\n",x,y);
    swap(x, y);
    printf("交换之后：x->%d, x->%d\n",x,y);
    
    
    
    LOG;
    
    
    printf("a = %d , b = %d \n",a,b);
    printf("%.5f\n",PI);
    
    
    
    return 0;
}
