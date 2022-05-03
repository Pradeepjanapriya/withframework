#define WINVER 0x0500
#include <Windows.h>
#include <pdh.h>
#include "tchar.h"

#include <array>
#include <iostream>
#include <string>
#include <stdexcept>

#include <QDateTime>
#include <QString>


#include "stdlib.h"
#include <jni.h>

#include <memory>
#include <functional>

using std::string;
using std::function;
using std::unique_ptr;
using std::shared_ptr;
using std::cout;
using std::endl;

using namespace std;


#include "HelloWorld.h"

QString a = "";

QString Name() { return "hello"; }


JNIEXPORT void JNICALL Java_HelloWorld_print(JNIEnv *, jobject)
{

 cout << "I AM FROM VOID METHOD." << endl;

return;
}