#ifndef SOCIALBUTTERFLY_TEXTPACKET_H
#define SOCIALBUTTERFLY_TEXTPACKET_H

#include "Packet.h"

// Packet size: 54 bytes (padded)
class TextPacket
        :public Packet
{
private:
    union
    {
        char _raw[50];
        char* _ptrToData;
    };
public:
    TextPacket(const char*, int);

    virtual void send();
};

#endif //SOCIALBUTTERFLY_TEXTPACKET_H
