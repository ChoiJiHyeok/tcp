#pragma once
#include <string>
#include <iostream>

// 소켓을 사용하기 위해서 라이브러리 참조해야 한다.
#pragma comment(lib, "ws2_32")
// inet_ntoa가 deprecated가 되었는데.. 사용하려면 아래 설정을 해야 한다.
#pragma warning(disable:4996)
#include <stdio.h>
#include <vector>
#include <thread>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/videoio.hpp>
//#include <opencv2/highgui.hpp>
// 소켓을 사용하기 위한 라이브러리
#include <WinSock2.h>
// 수신 버퍼 사이즈
#define BUFFERSIZE 1024
//#define PORT 9001
using namespace std;
//using namespace cv;
#pragma once
