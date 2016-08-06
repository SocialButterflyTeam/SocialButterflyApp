#include <string.h>

#include "TextPacket.h"

TextPacket::TextPacket(const char* _data, int length)
        :Packet()
{
    // TODO: fix this, text packets send small portions of the text
    // and send additional packets; carry this through PacketHandler.
    if(length > 50)
    {
        _ptrToData = (char*) _data;
    }
    else{
        memcpy(_raw, _data, length);
    }
}

void TextPacket::send()
{
    // TODO
}