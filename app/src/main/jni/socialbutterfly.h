#include <jni.h>

#ifndef SOCIALBUTTERFLY_SOCIALBUTTERFLY_H
#define SOCIALBUTTERFLY_SOCIALBUTTERFLY_H
#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

/*
 * Class:       net_butterflyteam_socialbutterfly_ButterflyActivity
 * Method:      nativeSendPacket
 * Signature:   (ILjava/lang/String;I)V
*/
JNIEXPORT void JNICALL Java_net_butterflyteam_socialbutterfly_ButterflyActivity_nativeSendPacket
    (JNIEnv*, jclass, jint, jstring, jint);

#ifdef __cplusplus
}
#endif //__cplusplus
#endif //SOCIALBUTTERFLY_SOCIALBUTTERFLY_H
