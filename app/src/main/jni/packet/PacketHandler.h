#ifndef SOCIALBUTTERFLY_PACKETHANDLER_H
#define SOCIALBUTTERFLY_PACKETHANDLER_H

#include "PacketType.h"
class Packet;

class PacketHandler
{
private:
    static PacketHandler* singleton;
    PacketHandler();

public:
    Packet* decodeData(PacketType, const char*, int);

    static PacketHandler* get();
    static void initialize();
};

#endif //SOCIALBUTTERFLY_PACKETHANDLER_H
