#include <stdint.h>
#include <cstdio>
#include <complex>



#undef __STRICT_ANSI__
#include <cmath>
#ifndef M_PI
#endif

#define STEG_HEADER_SIZE sizeof(uint32_t) * 8

enum ImageType {
    PNG, JPG, BMP
};

struct Font;


struct Image {
    uint8_t* data = NULL;
    size_t size = 0;
    int w;
    int h;
    int channels;

    Image(const char* filename, int channel_force = 0);
    Image(int w, int h, int channels = 3);
    Image(const Image& img);
    ~Image();

    bool read(const char* filename, int channel_force = 0);
    bool write(const char* filename);

    ImageType get_file_type(const char* filename);

    Image& encodeMessage(const char* message);
    Image& decodeMessage(char* buffer, size_t* messageLength);


};

