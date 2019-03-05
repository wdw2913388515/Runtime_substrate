//
//  main.cpp
//  Runtime 结构体知识c++
//
//  Created by 伟大的大伟😘 on 2019/3/5.
//  Copyright © 2019 伟大的大伟😘. All rights reserved.
//

#include <iostream>
struct Student{
    int no;
    char name[20];
    int *age;
    Student(){
        no = 114;
        strcpy(name, "lilei");//数组的一种赋值方式
        age = new int(20);    //分配int型空间，放入20 ，并将首地址给age
    }
};
/*
 *1.定义一个Sutdent1结构体
 */
struct Student1:Student{
    
};
/*
 *2.定义一个结构体变量stu2；
 */
struct : Student{
    
}stu2;
/*
 *3.定义一个Sutdent3结构体和一个结构体变量stu3；
 */
struct Student3:Student{
    
}stu3;
/*
 *4.定义一个Sutdent4结构体，并给他取个别名
 Student4 -> Stu4
 */
typedef struct Student4:Student{
    
}Stu4;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //第一种
    struct Student1 stu1;
    printf("stu1.no: %d\n",stu1.no);
    printf("stu1.name:%c%c%c%c%c",*(stu1.name),*(stu1.name+1),*(stu1.name+2),*(stu1.name+3),*(stu1.name+4));
    /** 第二种 */
    printf("stu2:on:%d\n",stu2.no);
    
    /** 第三种 */
    struct Student3 stu33;
    printf("stu33:on:%d\n",stu33.no);
    printf("stu3:on:%d\n",stu3.no);
    
    /** 第四种 */
    Stu4 stu4;
    struct Student4 stu44;
    printf("stu4.on:%d\n",stu4.no);
    printf("stu44.on:%d\n",stu44.no);
    
    
    /** 结构体指针 */
    Stu4 * pStu4 = &stu4;
    printf("pStu4->no:%d\n",pStu4->no);
    
    
    /**
     结构体位域 8位 = 1字节
     */
    struct Teeacher{
        unsigned int a:1;
        unsigned int b:2;
        unsigned int c:3;
    }tc,*ptc;
    printf("%lu\n",sizeof(Teeacher));//打印结果为四字节
    ptc = &tc;
    ptc -> a = 1; //1
    ptc -> b = 3; //11
    ptc -> c = 5; //101
    printf("Teacher->a:%u\n",ptc->a);
    printf("Teacher->b:%u\n",ptc->b);
    printf("Teacher->c:%u\n",ptc->c);
    return 0;
}
