#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct SoalGampang {
    char iniGampang[20];
    char apaIni[12];
} 
SoalGampang;

void obfuscatedHelloWorld(SoalGampang *);

int main (void){
    SoalGampang gampang;

    strcpy(gampang.iniGampang, "GAMPANG BANGET!");

    obfuscatedHelloWorld( & gampang);

    printf("%s\n%s", gampang.iniGampang, gampang.apaIni);
    return 0;
}
void obfuscatedHelloWorld(SoalGampang * ez){
    uint64_t data = 0x77E435B0B;
    size_t i;
    for (i=0; data; i++){
        ez -> apaIni[i] = 0x726F6c6564574820 >> (((data>>=3)&7)<<3)&0xFF;
    }
    ez -> apaIni[i] = '\0';
}
