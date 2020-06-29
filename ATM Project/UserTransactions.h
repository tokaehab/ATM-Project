#pragma once
#include "UserStruct.h"
#include <vector>
#include <string>
#include <stdlib.h>
#include <string.h>
#include<cmath>
#include <msclr\marshal_cppstd.h>

namespace ATMProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	static vector <int> currentUserTransactions;

	public ref class UserTransactions : public System::Windows::Forms::Form
	{
	public:
		UserTransactions(void)
		{
			InitializeComponent();
		}

		UserTransactions(vector <int> userTransaction)
		{
			InitializeComponent();
			currentUserTransactions = userTransaction;
		}


	protected:
		
		~UserTransactions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtShowTransactions;
	protected:

	protected:

	protected:



	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->txtShowTransactions = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtShowTransactions
			// 
			this->txtShowTransactions->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtShowTransactions->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtShowTransactions->Location = System::Drawing::Point(7, 4);
			this->txtShowTransactions->Margin = System::Windows::Forms::Padding(5);
			this->txtShowTransactions->Multiline = true;
			this->txtShowTransactions->Name = L"txtShowTransactions";
			this->txtShowTransactions->ReadOnly = true;
			this->txtShowTransactions->Size = System::Drawing::Size(413, 495);
			this->txtShowTransactions->TabIndex = 0;
			// 
			// UserTransactions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(423, 497);
			this->Controls->Add(this->txtShowTransactions);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"UserTransactions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserTransactions";
			this->Load += gcnew System::EventHandler(this, &UserTransactions::UserTransactions_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


#pragma region Methods

		void ShowTransactions()
		{
			string type;
			txtShowTransactions->Text += "Transaction Type           Transaction Amount\r\n";
			txtShowTransactions->Text += "------------------------------------------------------------------\r\n";
			for (int i = 0; i < currentUserTransactions.size(); i++)
			{

				if (currentUserTransactions[i] > 0)
					type = "Deposite";
				else
					type = "Withdraw";

				string row = type + "                                        ";
				txtShowTransactions->Text += marshal_as<String^>(row) + abs(currentUserTransactions[i]).ToString() + "\r\n";

			}
		}
#pragma endregion


#pragma region Events

	private: System::Void UserTransactions_Load(System::Object^  sender, System::EventArgs^  e) 
	{              
				 ShowTransactions();
	}

#pragma endregion

	};
}
