@echo off
REM 一键删除当前目录下的.exe和.o文件
REM ------------------------------------
REM 执行方式：将此脚本放在目标目录下双击运行
REM 或手动指定路径（修改PATH_TO_DIR变量）

REM 方法1：直接操作当前目录
del *.exe /Q
del *.o /Q

REM 方法2：合并命令（更简洁）
REM del *.exe *.o /Q

REM （可选）显示完成提示
echo 删除完成！
pause