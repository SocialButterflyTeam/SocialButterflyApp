#include <jni.h>

#include "packet/PacketHandler.h"
#include "packet/Packet.h"

static JavaVM* JVM_inst = NULL;

JNIEXPORT void JNICALL Java_net_butterflyteam_socialbutterfly_ButterflyActivity_nativeSendPacket(JNIEnv *env, jobject instance, jint _packetType, jstring _encodedData, jint _datalength)
{
    const char *encodedData = env->GetStringUTFChars(_encodedData, 0);

    PacketHandler::get()->decodeData((PacketType) _packetType, encodedData, _datalength)->send();

    env->ReleaseStringUTFChars(_encodedData, encodedData);
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    JVM_inst = vm;

    PacketHandler::initialize();

    return JNI_VERSION_1_2;
}