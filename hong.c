#include<stdio.h>
#define HAL_ASSERT_SIZE(x,y) typedef char x##_assert_size_t[-1+10*(sizeof(x) == (y))]


int main()
{
    HAL_ASSERT_SIZE(int,7);
    //x_assert_size_t[3]='a'
    printf("hello define \n");//,x_assert_size_t);
}

