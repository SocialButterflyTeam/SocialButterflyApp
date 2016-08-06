#ifndef SOCIALBUTTERFLY_PACKET_H
#define SOCIALBUTTERFLY_PACKET_H

#include <stdint.h>

class Packet
{
private:
    static uint64_t _packetCount;

    int _packetId;
public:
    virtual void send() = 0;
protected:
    Packet();
};

#endif //SOCIALBUTTERFLY_PACKET_H
