#pragma pack(1) //Isso diz para compilador nao otimizar structs (n fzr padding)

typedef struct BitmapHeader{
    unsigned char signature[2];
    unsigned int size;
    char reserved[4];
    unsigned int offset;
} BitmapHeader;