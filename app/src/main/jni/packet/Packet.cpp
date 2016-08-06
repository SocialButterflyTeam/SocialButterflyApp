#include "Packet.h"

uint64_t Packet::_packetCount = 0;

Packet::Packet()
{
    _packetId = _packetCount++;
}
