package com.example.dsg.ndkdemo;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.Button;

import butterknife.BindView;
import butterknife.ButterKnife;
import butterknife.OnClick;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.


    @BindView(R.id.btn_add)
    Button btnAdd;
    @BindView(R.id.btn_getString)
    Button btnGetString;
    @BindView(R.id.CCallJava_doST)
    Button CCallJavaDoST;
    @BindView(R.id.btn_cCallJavaStatic)
    Button btnCCallJavaStatic;

    private JNIJavaCallC javaCallC = new JNIJavaCallC();
    private JNICCallJava jnicCallJava = new JNICCallJava();


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ButterKnife.bind(this);

        // Example of a call to a native method
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */


    @OnClick({R.id.btn_add, R.id.btn_getString, R.id.CCallJava_doST, R.id.btn_cCallJavaStatic})
    public void onViewClicked(View view) {
        switch (view.getId()) {
            case R.id.btn_add:
                Log.e("main1", javaCallC.add(1, 2) + "");
                break;
            case R.id.btn_getString:
                Log.e("main1", javaCallC.getStringFromC());
                break;
            case R.id.CCallJava_doST:
                jnicCallJava.cCallJava();
                break;
            case R.id.btn_cCallJavaStatic:
                jnicCallJava.CCallJavaStatic();
                break;
        }
    }

    public void cCallJava(){
        Log.e("main1","i am called by c");
    }

    public static void cCallJavaStatic(){
        Log.e("main1","i am static function called by c");
    }

}
