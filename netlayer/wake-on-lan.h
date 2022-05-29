#ifndef wol_H
#define wol_H
#include <sys/cdefs.h>
#include <string.h>

unsigned char sync[]=0xFFFFFFFFFFFF;

// a wake on lan magic packet constructor as described by AMD 

struct __attribute__((packed)) WOL{
sync;
unsigned char TMAC[96];
unsigned char pwd[];
}


struct WOL construct_wol(unsigned char a[6],int pswdsize,unsigned char pwd[]){
    struct wol a;
    int cnt=0;
    for(int i=0;i<96;i++){
        if(cnt == 5){
            cnt =0
        }
        a.TMAC[i] = a[cnt];
        cnt = cnt + 1 ; 
    }
    if(pswdsize != 4 || pswdsize != 6 || pswdsize != 0 ){
        printf("provide proper size");
    }
    else if(pswdsize !=  (sizeof(pwd) / sizeof(pwd[0]))){
        printf("size mismatch");
    }
    else{
        memcpy(a.pwd, pwd, pswdsize+1);
    }
    
}





#endif
