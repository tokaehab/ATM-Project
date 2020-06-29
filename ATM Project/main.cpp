#include "LogInScreen.h"
#include "ATM_UserMode.h"
#include "UserStruct.h"
#include <vector>
#include <string>
#include <stack>
#include <fstream>


namespace ATMProject {
	using namespace System;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	int main(array<System::String ^> ^args)
	{

	 Application::Run(gcnew LogInScreen);
	
		return 0;
	}

}