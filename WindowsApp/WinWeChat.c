#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sendMessage(HWND windowHandle, const char* message);

int main()
{
    const char* className = "WeChatMainWndForPC";
    HWND wechatWindowsHandle = FindWindow(className, NULL);

    if (wechatWindowsHandle == NULL)
    {
        printf("Not Find WeChat Windows Handle!\n");
        return 1;
        getchar();
    }

    // 微信窗口最前
    SetForegroundWindow(wechatWindowsHandle);

    Sleep(1000);

    // 查找微信消息输入框窗口句柄
    HWND inputBoxHandle = FindWindowEx(wechatWindowsHandle, NULL, "发送(S)", NULL);

    if (inputBoxHandle == NULL)
    {
        printf("Not Find Input Box Handle!\n");
        return 1;
        getchar();
    }

    sendMessage(inputBoxHandle, "Hello World!");
    
    return 0;
}

void sendMessage(HWND windowHandle, const char* message)
{
    SendMessage(windowHandle, WM_SETTEXT, 0, (LPARAM)message); // 文本内容
    SendMessage(windowHandle, WM_KEYDOWN, VK_RETURN, 0); // 拿下回车
    SendMessage(windowHandle, WM_KEYUP, VK_RETURN, 0); // 释放回车
}
