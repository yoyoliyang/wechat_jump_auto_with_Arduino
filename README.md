# wechat_jump_auto_with_Arduino
用Arduino来玩微信跳一跳

py源码大部分取之于wechat_jump_game中的代码，用了其中的matlab分析代码和距离公式。

原理为：

py获取图像距离，发送串口数据到Arduino，通过继电器来控制触屏点击，继电器的持续时间便是点击电容屏的持续时间。

目前点击触屏的方式，我用的是从Arduino中的GND线和一个铜币来模拟点击电容屏，中间加了一个继电器：

![](https://raw.githubusercontent.com/yoyoliyang/wechat_jump_auto_with_Arduino/master/jump_arduino.jpg)

关于获取屏幕界面，老外的做法是在手机上方加一个摄像头来辅助采集画面，我试了一下，发现准确率太低，暂时还是用adb方式获取截图。

