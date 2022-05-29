#ifndef arp_h
#define arp_h
#include <sys/cdefs.h>


//Hardware type
#define ETHER    1
#define IEEE802  6
#define ARCNET   7
#define FRAMER   15
#define ATM      16
#define HDLC     17
#define FIBRCHNL 18    
#define ATM      19
#define SL       20
//op codes
#define ARP    1
#define ARPR   2
#define RARP   3
#define RARPR  4
#define DRARP  5
#define DRARPR 6
#define DRARPR 7
#define InRARP 8
#define InRARPR 9

struct __attribute__((packed)) arp{

unsigned short HTYPE;
unsigned short PTYPE;
unsigned char  HLN;
unsigned char  PLN;
unsigned char  OP[2];
unsigned char SHA[];
unsigned char SPA[];
unsigned char THA[];
unsigned char TPA[];


};













#endif