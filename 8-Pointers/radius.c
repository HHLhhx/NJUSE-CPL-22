#include <stdio.h>

int main()
{
    /*********************************** On radius ***********************************/
    int radius = 10;
    // type: int ; value: 10 ; address: &radius (&: address-of operator)
    printf("radius = %d\n", radius);
    printf("The address of radius is %p\n", &radius);
    // %p: 输出地址

    radius = 20;
    // radius as a lvalue (space, memory, storage, address)
    double circumference = 2 * 3.14 * radius;
    // radius as a rvalue (value)
    printf("radius = %d ; circumference = %f\n\n", radius, circumference);
    /*********************************** On radius ***********************************/


    /******************************** On ptr_radius1 ********************************/
    int *ptr_radius1 = &radius;
    // type: int * ; value: &radius ; address: &ptr_radius1
    printf("The address of ptr_radius1 is %p\n\n", &ptr_radius1);
    /******************************** On ptr_radius1 ********************************/


    /******************************** On *ptr_radius1 ********************************/
    // *ptr_radius1 as a lvalue
    *ptr_radius1 = 100;
    // *ptr_radius1 behaves like radius
    // *: indirection/dereference (间接寻址/解引用 运算符)
    // 解引用: 顺着指针找到被指向的变量
    // 即: 可以使用一个指针变量+解引用(*____),间接访问被指向的变量所在的空间,修改里面的值
    // 等同于 radius = 100;
    printf("The value of radius is %d\n", radius);

    // *ptr_radius1 as a rvalue
    circumference = 2 * 3.14 * (*ptr_radius1);
    printf("circumference = %f\n\n", circumference);
    /******************************** On *ptr_radius1 ********************************/


    /******************************* On ptr_radius1 again *******************************/
    int radius_1 = 1000;
    int *ptr_radius_1 = &radius_1;
    ptr_radius1 = ptr_radius_1;
    *ptr_radius1 = 2000;
    printf("The value of radius_1 is %d\n", *ptr_radius_1);
    /******************************* On ptr_radius1 again *******************************/


    /********************************* On array names *********************************/
    // 数组名不是变量, 如下:
    int arr[] = {1, 2, 3};
    // arr++ 是错误的
    // 数组名是指向数组第一个数的指针,不能改变

    // 若要实现arr++,则需要自己声明一个指针变量,让它先等于arr,再用这个指针变量来++
    int *ptr_arr = arr;
    /********************************* On array names *********************************/


    /********************************* On malloc/free *********************************/
    int array[5] = {0};
    // free(array) 是错误的
    // 能释放的空间是曾经malloc得到的空间
    /********************************* On malloc/free *********************************/


    /*********************************** On const ***********************************/
    const int *const_radius = &radius;
    // 从后往前读: const_radius是指向int型的指针,且它是只读的(const)
    // 只读(const): 不能解引用指针来修改,不代表不能修改变量本身
    // const_radius不可修改,但radius仍可以修改
    radius = 20; // 可以
    // *const_radius = 20 不行
    int *radius_4 = const_radius;
    *radius_4 = 20;
    // 这样就修改了const_radius,但会警告

    int const *const_radius1 = &radius;
    // 等于 const int *

    int *const const_radius2 = &radius;
    // 从后往前读: 指针是const型的,不允许指向其他地方
    // 即: 指针本身不能被修改

    const int *const const_radius3 = &radius;
    /*********************************** On const ***********************************/

    return 0;
}