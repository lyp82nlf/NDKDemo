//
// Created by dsg on 19-3-17.
//
#include "jni.h"

JNIEXPORT void JNICALL
Java_com_example_dsg_ndkdemo_JNICCallJava_cCallJava(JNIEnv *env, jobject jobj) {
//      1.获取类
//  jclass      (*FindClass)(JNIEnv*, const char*);
    char *className = "com/example/dsg/ndkdemo/MainActivity";
    jclass clazz = (*env)->FindClass(env, className);
//      2.获取方法id
//    jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
    jmethodID jmethodID1 = (*env)->GetMethodID(env, clazz, "cCallJava", "()V");
//      3.获取方法签名
//      4.实例化对象
//    jobject     (*AllocObject)(JNIEnv*, jclass);
    jobject jobject1 = (*env)->AllocObject(env, clazz);
//      5.调用方法
//    void        (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
    (*env)->CallVoidMethod(env, jobject1, jmethodID1);
}

JNIEXPORT void JNICALL
Java_com_example_dsg_ndkdemo_JNICCallJava_CCallJavaStatic(JNIEnv *env, jobject jobj) {
//      1.获取类
//  jclass      (*FindClass)(JNIEnv*, const char*);
    char *className = "com/example/dsg/ndkdemo/MainActivity";
    jclass clazz = (*env)->FindClass(env, className);
//      2.获取方法id
//    jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
    jmethodID jmethodID1 = (*env)->GetStaticMethodID(env, clazz, "cCallJavaStatic", "()V");
//      3.获取方法签名
//      4.实例化对象
//      5.调用方法
//    void        (*CallStaticVoidMethod)(JNIEnv*, jclass, jmethodID, ...);

    (*env)->CallStaticVoidMethod(env, clazz, jmethodID1);
}

