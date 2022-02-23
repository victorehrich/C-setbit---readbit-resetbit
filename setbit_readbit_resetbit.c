#include <stdio.h>

unsigned char SetBit(unsigned char x,int y){
    unsigned char mask;
    mask = (0x01<<y);
    x = x | mask;
    return x;
}

unsigned char ResetBit(unsigned char x,int y){
    unsigned char mask;
    mask = ~(0x01<<y);
    x = x & mask;
    return x;
}

unsigned char ReadBit(unsigned char x,int y){
    unsigned char mask;
    mask = (0x01<<y);
    x = x & mask;
    return x;
}

void main(void){
    unsigned char entrada, resetBit, readBit, setBit;

    entrada = 0xAB;
    printf("Entrada: %x",entrada);

    setBit = SetBit(entrada,6);
    printf("\nsetBit posicao 7 (SetBit(entrada,6)): %x",setBit);

    resetBit = ResetBit(entrada,4);
    printf("\nresetBit posicao 5 (ResetBit(entrada,4)): %x",resetBit);

    readBit = ReadBit(entrada,5);
    printf("\nreadBit posicao 6 (ReadBit(entrada,5)): %x",readBit);
}
