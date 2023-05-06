# UDPSendData_MutiPort

使用<多个不同源ip端口>向<多个不同目标ip端口>同时发送数据的qt小程序。
因为直接开两个网络调试助手没法保证同时开始发送，所以写了个简单的qt小程序。需要把要发的数据保存在txt中，并界面上选择。勾选双网可以开启另一个发送线程。

+ 开发环境：VS2019+Qt5.12.10_msvc2017_32
+ 目录结构：UDPSendData中是VS2019的工程，UDPSendData_exe中是打包好的Qt程序（带运行库），windows下可以直接用
+ 界面示例：
<div align=center>
    <img src="/img/mainwindow.png"></img>
</div>
