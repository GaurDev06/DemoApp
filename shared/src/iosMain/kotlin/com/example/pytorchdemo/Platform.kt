package com.example.pytorchdemo

import com.soywiz.klogger.AnsiEscape
import com.soywiz.korim.bitmap.Bitmap
import com.soywiz.korim.paint.Paint
import com.soywiz.korim.vector.ShapeBuilder
import com.soywiz.korma.geom.vector.rect
import kotlinx.cinterop.CValue
import kotlinx.cinterop.cValuesOf
import platform.CoreGraphics.*
import platform.UIKit.*

actual class Platform actual constructor() {

    actual val platform: String = UIDevice.currentDevice.systemName() + " " + UIDevice.currentDevice.systemVersion
    actual fun drawRectangle(imgName: Bitmap): Bitmap {
        val scale: CGFloat = 0.0
        val rect: CValue<CGRect> = CGRectMake(0.0, 0.0, 100.0, 200.0)
        val rectSize: CValue<CGSize> = CGSizeMake(100.0, 200.0)

        UIGraphicsBeginImageContextWithOptions(rectSize,false, scale)
        val context = UIGraphicsGetCurrentContext()


        val rgb = CGColorSpaceCreateDeviceRGB()
        val values = cValuesOf(0.0, 1.0, 0.0, 1.0)
        val color = CGColorCreate(rgb, values)

        CGContextSetFillColorWithColor(context, color)
//        CGContextFillRect(context, rect)
        CGContextStrokeRect(context,rect)

        val newImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        newImage

        return imgName.toBMP32()

    }


}

