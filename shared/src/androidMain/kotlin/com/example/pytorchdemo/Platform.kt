package com.example.pytorchdemo

import android.R.attr.bitmap
import android.graphics.*

import com.soywiz.korim.bitmap.Bitmap
import com.soywiz.korim.bitmap.Bitmap32
import com.soywiz.korim.format.toAndroidBitmap


actual class Platform actual constructor() {
    actual val platform: String = "Android ${android.os.Build.VERSION.SDK_INT}"
    actual fun drawRectangle(imgName: com.soywiz.korim.bitmap.Bitmap): Bitmap {

             val rect: RectF =  RectF(0f, 0f,
                 100f, 200f)
             val paint: Paint = Paint(Paint.ANTI_ALIAS_FLAG or Paint.DITHER_FLAG)

                paint.let {
                    it.color = Color.GREEN
                    it.setStyle(Paint.Style.FILL)
                }
                val c = Canvas(imgName.toAndroidBitmap())
                val r = rect

                c.drawRect(r.left, r.top, r.right, r.bottom, paint)

        return  imgName

    }


}