#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <winsock2.h>
#include <windows.h>
#include "WebSocket_Encoding_HS.h"
#include "packet_generator.h"


#pragma comment (lib, "ws2_32.lib")

extern "C" __declspec(dllexport) void OnTest1();
extern "C" __declspec(dllexport) void shutdownWAS();
// extern "C" __declspec(dllexport) void Timeout();
// --> �ƹ��� ������ ���� �ʰ� ���Ḹ �����ϴ� Ŭ���̾�Ʈ�� ���� Ping�޼����� ������ ������ ���� ������ ����
// ��û�� �� ������ �ð��� �ʱ�ȭ �ؼ� ��
// �ƹ��� ������ ���� ����ä Timeout 3ȸ �̻�ð��� �Ѿ�� ������ �����Ŵ
// �߿��� ���� : �޸𸮿뷮 + �̿��ڼ��� �����ϰ� ���� �����ϱ� ���ؼ� ��������

// test.h
//extern "C" __declspec(dllexport) char* _GetAdapterDescription(int* size, UINT index/*0 : reallocate, >0 : index pointer*/)
//extern "C" __declspec(dllexport) int _SetAdapter(char ptr[133])