#include "MyForm.h"
#include "Providers.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}

System::Void Project1::MyForm::ProvidersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Providers^ f2 = gcnew Providers();
	f2->Show();
}
