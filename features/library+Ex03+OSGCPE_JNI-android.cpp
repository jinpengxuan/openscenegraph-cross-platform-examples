FEATURE library.cpp/Impl
#define OSGCPE_JNI(FUNC_NAME) \
    JNIEXPORT void JNICALL Java_org_opengamestudio_ex03_library_ ## FUNC_NAME
#define OSGCPE_JNI_ARRAY(FUNC_NAME) \
    JNIEXPORT jobjectArray JNICALL Java_org_opengamestudio_ex03_library_ ## FUNC_NAME
#define OSGCPE_JNI_ARG JNIEnv *env, jobject /* this */
