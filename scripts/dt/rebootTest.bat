@echo off 
set /a count=0
echo ============��������=============
:A
echo ============�ȴ��豸=============
adb -s %1 wait-for-device
echo =======��ǰ���Ի���Ϊ%1=========
echo =======�豸���ӳɹ�׼������=======
adb -s %1 reboot
ping localhost -n 50 >nul
set /a count+=1
echo ��������Ϊ%count%
goto A
