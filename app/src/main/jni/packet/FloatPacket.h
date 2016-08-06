#ifndef SOCIALBUTTERFLY_FLOATPACKET_H
#define SOCIALBUTTERFLY_FLOATPACKET_H

#include "Packet.h"

// Packet size: 12 bytes
class FloatPacket
        :public Packet
{
private:
    double _data;
public:
    FloatPacket(double);

    virtual void send();
};

#endif //SOCIALBUTTERFLY_FLOATPACKET_H
