package com.example.pytorchdemo

import com.soywiz.korim.bitmap.Bitmap

expect class Platform() {
    val platform: String
    fun drawRectangle(imgName:Bitmap): Bitmap

}