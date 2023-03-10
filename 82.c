//Write a C program to rotate bits of a number.


#include <stdio.h>

#define INT_SIZE sizeof(int)       
#define INT_BITS INT_SIZE * 8 - 1   
int rotateLeft(int num, unsigned int rsotation);
int rotateRight(int num, unsigned int rotation);


int main()
{
    int num;
    unsigned int rotation;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter number of rotation: ");
    scanf("%u", &rotation);
    printf("%d left rotated %u times = %d\n\n",  num, rotation, rotateLeft(num, rotation));
    printf("%d right rotated %u times = %d\n", num, rotation, rotateRight(num, rotation));


    return 0;
}
int rotateLeft(int num, unsigned int rotation)
{
    int DROPPED_MSB;
    rotation %= INT_BITS;
    while(rotation--)
    {
        DROPPED_MSB = (num >> INT_BITS) & 1; 
        num = (num << 1) | DROPPED_MSB;
    }

    return num;
}
int rotateRight(int num, unsigned int rotation)
{
    int DROPPED_LSB;
    rotation %= INT_BITS;
    while(rotation--)
    {
        DROPPED_LSB = num & 1;
        num = (num >> 1) & (~(1 << INT_BITS));
        num = num | (DROPPED_LSB << INT_BITS);
    }

    return num;
}