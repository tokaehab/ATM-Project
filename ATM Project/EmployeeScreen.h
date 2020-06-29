#pragma once
#include "UserStruct.h"
#include <string>
#include <stdlib.h>
#include <string.h>
#include<cmath>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include <string>
#include <stack>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include<iostream>
#include<windows.h>
#include <ctime>
#include "UserTransactions.h"

namespace ATMProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	

	/// <summary>
	/// Summary for EmployeeScreen
	/// </summary>
	public ref class EmployeeScreen : public System::Windows::Forms::Form
	{
	public:
		EmployeeScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button1;
	public:
		int numberOfUsers;
		EmployeeScreen(int a)
		{
			InitializeComponent();
			numberOfUsers = a;
		}

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtDailyTransaction;
	private: System::Windows::Forms::ComboBox^  cbAllUsersName;
	private: System::Windows::Forms::Button^  btnUserTransaction;
	private: System::Windows::Forms::Label^  label1;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeScreen::typeid));
			this->txtDailyTransaction = (gcnew System::Windows::Forms::TextBox());
			this->cbAllUsersName = (gcnew System::Windows::Forms::ComboBox());
			this->btnUserTransaction = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDailyTransaction
			// 
			this->txtDailyTransaction->BackColor = System::Drawing::Color::Black;
			this->txtDailyTransaction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDailyTransaction->ForeColor = System::Drawing::Color::White;
			this->txtDailyTransaction->Location = System::Drawing::Point(462, 1);
			this->txtDailyTransaction->Multiline = true;
			this->txtDailyTransaction->Name = L"txtDailyTransaction";
			this->txtDailyTransaction->ReadOnly = true;
			this->txtDailyTransaction->Size = System::Drawing::Size(409, 433);
			this->txtDailyTransaction->TabIndex = 0;
			// 
			// cbAllUsersName
			// 
			this->cbAllUsersName->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cbAllUsersName->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbAllUsersName->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cbAllUsersName->FormattingEnabled = true;
			this->cbAllUsersName->Location = System::Drawing::Point(167, 36);
			this->cbAllUsersName->Name = L"cbAllUsersName";
			this->cbAllUsersName->Size = System::Drawing::Size(197, 24);
			this->cbAllUsersName->TabIndex = 1;
			this->cbAllUsersName->SelectedIndexChanged += gcnew System::EventHandler(this, &EmployeeScreen::cbAllUsersName_SelectedIndexChanged);
			// 
			// btnUserTransaction
			// 
			this->btnUserTransaction->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnUserTransaction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUserTransaction->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnUserTransaction->Location = System::Drawing::Point(167, 120);
			this->btnUserTransaction->Name = L"btnUserTransaction";
			this->btnUserTransaction->Size = System::Drawing::Size(197, 35);
			this->btnUserTransaction->TabIndex = 2;
			this->btnUserTransaction->Text = L"Show User Transactions";
			this->btnUserTransaction->UseVisualStyleBackColor = false;
			this->btnUserTransaction->Click += gcnew System::EventHandler(this, &EmployeeScreen::btnUserTransaction_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(24, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"User Names";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(27, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Safety";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EmployeeScreen::button1_Click);
			// 
			// EmployeeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(872, 427);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnUserTransaction);
			this->Controls->Add(this->cbAllUsersName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtDailyTransaction);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"EmployeeScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Employee Screen";
			this->Load += gcnew System::EventHandler(this, &EmployeeScreen::EmployeeScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Methods
		long long toint(string s)
		{
			long long ret = stoll(s);
			return ret;
		}

		void GetDataFromFile(UserAccount account[])
		{
			int lineNum, id = -1, cntr;
			string line, temp;
			stack <string> stk;
			ifstream atm;
			atm.open("atmproject.txt");
			while (getline(atm, line))
			{
				stk.push(line);
				temp = stk.top();
				if (temp == "*")
				{
					id++;
					cntr = 0;
					stk.pop();
					continue;
				}
				if (cntr == 0)
					account[id].name = temp, cntr++;
				else if (cntr == 1)
					account[id].password = temp, cntr++;
				else if (cntr == 2)
					account[id].balance = toint(temp), cntr++;
				else
				{
					if (cntr % 2 != 0)
						account[id].transactionsDate.push_back(temp);
					else
						account[id].transactions.push_back(toint(temp));

					cntr++;
				}


				stk.pop();

			}
			numberOfUsers = id;
			atm.close();
		}

		void DisplayDailyReport(UserAccount allUserAccounts[])
		{

			string date;
			time_t now = time(0);
			string dt = ctime(&now);
			dt.pop_back();
			date = dt;
			date.erase(10, 9);

			string type;
			txtDailyTransaction->Text += "Name             Transaction Type             Transaction Amount\r\n";
			txtDailyTransaction->Text += "-----------------------------------------------------------------------------\r\n";

			for (int i = 0; i < numberOfUsers; i++)
			{

				for (int j = 0; j < allUserAccounts[i].transactions.size(); j++)
				{

					if (allUserAccounts[i].transactionsDate[j] == date)
					{

						if (allUserAccounts[i].transactions[j] > 0)
								type = "Deposite";
							else
								type = "Withdraw";

							string row = allUserAccounts[i].name + "             "+ type + "             ";
							txtDailyTransaction->Text += marshal_as<String^>(row) +abs(allUserAccounts[i].transactions[j]).ToString() + "\r\n";

					}
				}
			}
		}

		void fillCombobox(UserAccount allUserAccounts[])
		{
			array<String ^> ^ names = gcnew array<String ^>(numberOfUsers);

			for (int i = 0; i < numberOfUsers; i++)
			{
				names[i] = marshal_as<String^>(allUserAccounts[i].name);
			}

			cbAllUsersName->Items->AddRange(names);
		}

		int GetCurrentUserIndex(UserAccount allUserAccounts[])
		{
			int indx = 0;
			for (int i = 0; i < numberOfUsers; i++)
			{
				if (marshal_as<String^>(allUserAccounts[i].name) == cbAllUsersName->Text)
				{
					indx = i;
					break;
				}
			}
			return indx;
		}
#pragma endregion

#pragma region Events
private: System::Void EmployeeScreen_Load(System::Object^  sender, System::EventArgs^  e) 
	{
				 UserAccount allUserAccounts[100];
			     GetDataFromFile(allUserAccounts);
				 DisplayDailyReport(allUserAccounts);
				 fillCombobox(allUserAccounts);
	}
private: System::Void btnUserTransaction_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			 int indx;
				 UserAccount allUserAccounts[100];
			 if (cbAllUsersName->Text != String::Empty)
			 {
				 GetDataFromFile(allUserAccounts);
				indx = GetCurrentUserIndex(allUserAccounts);
			 }
			 else
			 {
				 MessageBox::Show("Please select a user first");
				 return;
			 }

			 UserTransactions ^ userTransactionsForm = gcnew UserTransactions(allUserAccounts[indx].transactions);
			 userTransactionsForm->ShowDialog();
	}
private: System::Void cbAllUsersName_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
			 PlaySound(L"C:\\Users\\lenovo\\Documents\\Visual Studio 2013\\Projects\\ATM Project\\ATM Project\\Red Alert.wav", 0, SND_ASYNC);
}
#pragma endregion

};

}
