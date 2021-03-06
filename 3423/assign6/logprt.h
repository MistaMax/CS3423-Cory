struct timev {
    unsigned int tv_sec;
    unsigned int tv_usec;
};

/* data prefixing each packet */
struct my_pkthdr {
    struct timev ts;
    int caplen;
    int len;
};

#define PCAP_MAGIC                  0xa1b2c3d4
#define PCAP_SWAPPED_MAGIC          0xd4c3b2a1
#define PCAP_MODIFIED_MAGIC         0xa1b2cd34
#define PCAP_SWAPPED_MODIFIED_MAGIC 0x34cdb2a1

struct pcap_file_header {
    u_int32_t magic;
    u_int16_t version_major;
    u_int16_t version_minor;
    u_int32_t thiszone;
    u_int32_t sigfigs;
    u_int32_t snaplen;
    u_int32_t linktype;
};


static unsigned int b_sec;
static unsigned int c_sec;
static int b_usec;
static int c_usec;
