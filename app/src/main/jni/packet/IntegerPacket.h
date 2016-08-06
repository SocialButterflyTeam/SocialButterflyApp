#ifndef SOCIALBUTTERFLY_INTEGERPACKET_H
#define SOCIALBUTTERFLY_INTEGERPACKET_H

#include "Packet.h"

// Packet size: 12 bytes
class IntegerPacket
:public Packet
{
private:
    uint64_t _data;
public:
    IntegerPacket(uint64_t);

    virtual void send();
};

#endif //SOCIALBUTTERFLY_INTEGERPACKET_H
