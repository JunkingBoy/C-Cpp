/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-03-02 13:38:17
 * @Description: 
 */
#include <windows.h>
#include <stdio.h>
#include <uiautomationclient.h>
#include <comutil.h>

#pragma comment(lib, "Ole32.lib")
#pragma comment(lib, "UIAutomationCore.lib")

int main()
{
    CoInitialize(NULL);

    // 获取桌面窗口句柄
    HWND desktopHandle = GetDesktopWindow();

    // 创建UI Automation对象
    // IUIAutomation *pAutomation;
}