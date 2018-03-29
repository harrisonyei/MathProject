#include "WindowsForm.h"
#include "Matrix.h"
using namespace System;
using namespace System::Windows::Forms;
#ifdef DEBUG_M
int main() {
	Matrix m;
	m.Data.push_back({ 1,1,1 });
	m.Data.push_back({ 2,2,3 });
	m.Data.push_back({ 1,2,3 });
	Matrix m2;
	m2.Data.push_back({ 1});
	m2.Data.push_back({ 2});
	m2.Data.push_back({ 3});
	Matrix::SolveLinearSys(m, m2);
	system("PAUSE");
	return 0;
}
#else
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WindowsFormsApplication_cpp::WindowsForm windowsForm;
	Application::Run(%windowsForm);
}
#endif // DEBUG_M