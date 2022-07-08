package com.example.pytorchdemo

import com.soywiz.korim.bitmap.Bitmap
import com.soywiz.korim.format.GifDec.read_image

class Greeting {
    fun greeting(): String {
        return "Hello, ${Platform().platform}!"
    }

}