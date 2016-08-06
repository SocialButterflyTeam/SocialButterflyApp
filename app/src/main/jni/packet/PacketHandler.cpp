#include <stdlib.h>

#include "IntegerPacket.h"
#include "FloatPacket.h"
#include "CharacterPacket.h"
#include "TextPacket.h"

#include "PacketHandler.h"
#include "PacketType.h"

/*
 * class PacketHandler
 */
PacketHandler* PacketHandler::singleton = NULL;

PacketHandler::PacketHandler()
{}

Packet* PacketHandler::decodeData(PacketType _type, const char* _encodedData, int length_of_data)
{
    switch(_type)
    {
    case NUMERIC:
        return new IntegerPacket(atoi(_encodedData));
    case FLOATING_POINT:
        return new FloatPacket(atof(_encodedData));
    case SINGLE_CHAR:
        return new CharacterPacket(_encodedData[0]);
    case FIXED_STRING:
        return new TextPacket(_encodedData, length_of_data);
    }
}

PacketHandler* PacketHandler::get()
{
    return singleton;
}

void PacketHandler::initialize()
{
    singleton = new PacketHandler();
}