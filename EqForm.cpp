#include "EqForm.h"

#include <Windows.h>

using namespace CALCLAB2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew EqForm);
    return 0;
}