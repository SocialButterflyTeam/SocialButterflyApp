package net.butterflyteam.socialbutterfly;

public enum PacketType
{
    NUMERIC(0),
    FLOATING_POINT(1),
    SINGLE_CHAR(2),
    FIXED_STRING(3),
    VARIABLE_STRING(4);

    // ew enums are weird in Java; can't directly cast to int
    private final int v;

    PacketType(int v)
    {
        this.v = v;
    }

    int get()
    {
        return v;
    }
}
