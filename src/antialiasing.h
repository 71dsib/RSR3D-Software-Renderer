#ifndef ANTIALIASING_H_INCLUDED
#define ANTIALIASING_H_INCLUDED

namespace antiAlias{
    void runFXAA(uint32_t* colorBuffer, uint32_t* finalBuffer, int width, int height);
}

#endif
