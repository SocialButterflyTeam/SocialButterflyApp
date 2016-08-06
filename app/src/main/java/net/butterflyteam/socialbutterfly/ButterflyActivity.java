package net.butterflyteam.socialbutterfly;

import android.app.NativeActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import net.butterflyteam.socialbutterfly.PacketType;

public class ButterflyActivity extends NativeActivity
{
    // App widgets
    private Button sendPacketButton;
    private EditText numericPacketDataText;
    // Native functions
    private native void nativeSendPacket(int _packetId, String _encodedData, int _dataLength);

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_butterfly);

        numericPacketDataText = (EditText) findViewById(R.id.numericPacketData);
        sendPacketButton = (Button) findViewById(R.id.btnSendPacket);

        sendPacketButton.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View view)
            {
                prepareSendPacket(numericPacketDataText, PacketType.NUMERIC);
            }
        });
    }

    private void prepareSendPacket(EditText packetDataSource, PacketType _dataType)
    {
        // TODO: this is bad code, but should work for now.
        nativeSendPacket(_dataType.get(), packetDataSource.toString(), packetDataSource.toString().length());
    }

    static
    {
        System.loadLibrary("socialbutterfly");
    }
}
