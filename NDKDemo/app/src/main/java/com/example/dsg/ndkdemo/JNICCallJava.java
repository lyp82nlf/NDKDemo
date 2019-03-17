package com.example.dsg.ndkdemo;

import android.util.Log;

public class JNICCallJava {

    static {
        System.loadLibrary("cCallJava");
    }

    public native void cCallJava();

    public native void CCallJavaStatic();



}
