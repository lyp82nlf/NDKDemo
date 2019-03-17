//
// Created by dsg on 19-3-17.
//
#include "jni.h"

JNIEXPORT jint JNICALL Java_com_example_dsg_ndkdemo_JNIJavaCallC_add
        (JNIEnv *env, jobject jobj, jint intA, jint intB) {
    int a = intA + intB;
    return a;
}

JNIEXPORT jstring JNICALL Java_com_example_dsg_ndkdemo_JNIJavaCallC_getStringFromC
        (JNIEnv *env, jobject jobj) {
    char *stringFromC = "i am from c";
    //  jstring     (*NewStringUTF)(JNIEnv*, const char*);
    return (*env)->NewStringUTF(env, stringFromC);
}

