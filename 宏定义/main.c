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


#ifndef A  //是否没有宏定义

#define A 1

#endif     //判断结束

#define B 2

//#undef A   //取消宏定义


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
    
    
    /** 4.逻辑判断  相当于if...else if...else */
#ifdef A
    printf("define A : %d\n",A);
#elif B
    printf("define B : %d\n",B);
#else
    printf("no define\n");
#endif
    
    
    return 0;
}
