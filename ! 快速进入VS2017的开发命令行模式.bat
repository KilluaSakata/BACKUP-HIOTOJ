@echo off
color 1F
title VS2017 命令行
echo 进入VS的开发模式
echo ======================
echo 常见编译命令：cl %filename%
echo ======================
%comspec% /k "D:\Program Files\Microsoft Visual Studio\2017\Community\Common7\Tools\VsDevCmd.bat"
exit /b 0