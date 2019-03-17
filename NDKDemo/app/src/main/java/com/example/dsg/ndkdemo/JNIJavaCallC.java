package com.example.dsg.ndkdemo;

public class JNIJavaCallC {

    static {
        System.loadLibrary("javaCallC");
    }

    public native int add(int a, int b);

    public native String getStringFromC();

}
