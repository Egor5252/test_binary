#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	testbinary::MyForm form;
	System::Windows::Forms::Application::Run(% form);
}