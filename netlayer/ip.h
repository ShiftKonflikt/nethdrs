#ifndef ip_h
#define ip_h
#include <sys/cdefs.h>
/*
    0                   1                   2                   3
    0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |Version|  IHL  |Type of Service|          Total Length         |
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |         Identification        |Flags|      Fragment Offset    |
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |  Time to Live |    Protocol   |         Header Checksum       |
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |                       Source Address                          |
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |                    Destination Address                        |
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |                    Options                    |    Padding    |
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+*/

//congestion   
#define NECT 0
#define ECT0 2
#define ECN1 1
#define CE   3
//proto
enum proto{
HOPOPT,ICMP,IGMP,GGP,IPIIP,SP,TCP,CBT,EGP,IGP,BBNRCC,NVP,PUP,ARGUS,EMCON,XNET,CHAOS,UDP,MUX,DCNMEAS,HMP,PRM,XNSIDP,
T1,T2,L1,L2,RDP,IRTP,ISOTP4,NETBLT,MFENSP,MERITINP,DCCP,TPC,IDPR,XTP,DDP,IDPRCMTP,TPPP,IL,ipv6,SDRP,Ipv6R,IPV6F,IDRP,RSVP,GRE,DSR,BNA,ESP,AH,INLSP,SWIPE,NARP,MOBILE,
TLSP,SKIP,IPV6ICMP,IPV6NONXT,IPV6OPT,AHIP,CFTP,ALN,SATEXPAK,KRYPTOLAN,RVD,IPPC,ADFS,SATMON,VISA,IPCU,CPNX,CPHB,WSN,PVP,BRSATMON,SUNND,WBMON,WBEXPAK,ISOIP,VMTP,SVMTP,
VINES,TTP,IPTM,NSFNETIGP,DGP,TCF,EIRGP,OSPF,SPRPC,LARP,MTP,AX25,OS,MICP,SCCSP,ETHERIP,APES,GMTP,IFMP,PNNI,PIM,ARIS,SCPS,QNX,AN,IPCOMP,SNP,CMPQPEER,IPXIIP,VRRP,PGM,
A0HP,L2TP,DDX,IATP,STP,SRP,UTI,SMP,SM,PTP,ISISIPV4,FIRE,CRTP,CRUDP,SSCOPMCE,IPLT,SPS,PIPE,SCTP,FC,RSVPE2EIGNORE,MH,UDPL,MPLSIIP,MANET,HIP,SHIM6,WESP,ROHC,ETHER
};

struct __attribute__((packed)) ip4_hdr 
{
#if BYTE_ORDER == LITTLE_ENDIAN
	unsigned char	IHL:4,version:4;		
#endif
#if BYTE_ORDER == BIG_ENDIAN
	unsigned char	version:4,ihl:4;	
#endif
unsigned char qos;
unsigned char tot_len[2] ;
unsigned char Identification[2] ;
unsigned char fragmentdat[2] ;
unsigned char TTL;
unsigned char Protocol;
unsigned short checksum;
unsigned char source[4],destination[4];
};



/*ipv6 tobe added later*/


/*
struct __attribute__((packed)) ip4_hdr 
{

unsigned char version_IHL ;
unsigned char qos;
unsigned short tot_len ;
unsigned short Identification ;
unsigned short flag;
unsigned int Frag_off;
unsigned char TTL;
unsigned char Protocol;
unsigned short checksum;
unsigned char source[4];
unsigned char destination[4];
};

struct  ppkt{
struct ether_hdr eth;
struct ip4_hdr  iphdr;
unsigned char payload[];
};
*/

#endif
