#include <windows.h>
#include <tchar.h>
#include "Buttons.h"

HWND CreateWelcomeButton(HWND hwnd,HINSTANCE hInst) {
    HWND Button;
    Button = CreateWindow(
        _T("button"),
        _T("Start"),
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        575, 500,
        100, 50,
        hwnd,
        (HMENU)1001,
        hInst,
        NULL);
    return Button;
}

HWND CreateSitButton(HWND hwnd,HINSTANCE hInst) {
    HWND Button;
    Button = CreateWindow(
        _T("button"),
        _T("����"),
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        350, 100,
        100, 50,
        hwnd,
        (HMENU)1002,
        hInst,
        NULL
    );
    return Button;
}

HWND CreateStandButton(HWND hwnd,HINSTANCE hInst) {
    HWND Button;
    Button = CreateWindow(
        _T("button"),
        _T("����"),
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        850, 100,
        100, 50,
        hwnd,
        (HMENU)1003,
        hInst,
        NULL
    );
    return Button;
}

HWND CreateEatButton(HWND hwnd,HINSTANCE hInst) {
    HWND Button;
    Button = CreateWindow(
        _T("button"),
        _T("ι�Ե�"),
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        350, 400,
        100, 50,
        hwnd,
        (HMENU)1004,
        hInst,
        NULL
    );
    return Button;
}

HWND CreatePlayButton(HWND hwnd,HINSTANCE hInst) {
    HWND Button;
    Button = CreateWindow(
        _T("button"),
        _T("������"),
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        850, 400,
        100, 50,
        hwnd,
        (HMENU)1005,
        hInst,
        NULL
    );
    return Button;
}

HWND CreateAboutButton(HWND hwnd,HINSTANCE hInst) {
    HWND Button;
    Button = CreateWindow(
        _T("button"),
        _T("����"),
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        0, 0,
        100, 50,
        hwnd,
        (HMENU)1006,
        hInst,
        NULL
    );
    return Button;
}