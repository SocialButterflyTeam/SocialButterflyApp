#ifndef SOCIALBUTTERFLY_CHARACTERPACKET_H
#define SOCIALBUTTERFLY_CHARACTERPACKET_H

#include "Packet.h"

// Packet size: 8 bytes (padded)
class CharacterPacket
        :public Packet
{
private:
    char _data;
    char padding[3];
public:
    CharacterPacket(char);

    virtual void send();
};

#endif //SOCIALBUTTERFLY_CHARACTERPACKET_H
