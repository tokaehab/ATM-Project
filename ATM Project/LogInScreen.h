#pragma once
#include "UserStruct.h"
#include "ATM_UserMode.h"
#include "EmployeeScreen.h"
#include <vector>
#include <string>
#include <stack>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include<iostream>
#include<windows.h>
//#include<mmsystem.h>
//#include<stdlib.h>
namespace ATMProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for LogInScreen
	/// </summary>
	public ref class LogInScreen : public System::Windows::Forms::Form
	{
	public:
		LogInScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
       
		int wrongPasswordCounter = 0;
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnLogIn;
	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::TextBox^  txtPassword;
	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::RadioButton^  rdUser;
	private: System::Windows::Forms::RadioButton^  rdEmloyee;

	private: System::Windows::Forms::Button^  BtnSafety;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LogInScreen::typeid));
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rdUser = (gcnew System::Windows::Forms::RadioButton());
			this->rdEmloyee = (gcnew System::Windows::Forms::RadioButton());
			this->BtnSafety = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnLogIn
			// 
			this->btnLogIn->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnLogIn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLogIn->Location = System::Drawing::Point(231, 309);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(93, 31);
			this->btnLogIn->TabIndex = 0;
			this->btnLogIn->Text = L"Log In";
			this->btnLogIn->UseVisualStyleBackColor = false;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &LogInScreen::btnLogIn_Click);
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(231, 191);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(206, 22);
			this->txtUser->TabIndex = 1;
			
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(231, 256);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(206, 22);
			this->txtPassword->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(117, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"User Name";
			
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(117, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// rdUser
			// 
			this->rdUser->AutoSize = true;
			this->rdUser->BackColor = System::Drawing::SystemColors::Desktop;
			this->rdUser->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rdUser->Location = System::Drawing::Point(120, 93);
			this->rdUser->Name = L"rdUser";
			this->rdUser->Size = System::Drawing::Size(63, 21);
			this->rdUser->TabIndex = 1;
			this->rdUser->TabStop = true;
			this->rdUser->Text = L"User";
			this->rdUser->UseVisualStyleBackColor = false;
			// 
			// rdEmloyee
			// 
			this->rdEmloyee->AutoSize = true;
			this->rdEmloyee->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdEmloyee->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdEmloyee->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rdEmloyee->Location = System::Drawing::Point(120, 44);
			this->rdEmloyee->Name = L"rdEmloyee";
			this->rdEmloyee->Size = System::Drawing::Size(98, 23);
			this->rdEmloyee->TabIndex = 0;
			this->rdEmloyee->TabStop = true;
			this->rdEmloyee->Text = L"Employee";
			this->rdEmloyee->UseVisualStyleBackColor = false;
			this->rdEmloyee->CheckedChanged += gcnew System::EventHandler(this, &LogInScreen::rdEmloyee_CheckedChanged);
			// 
			// BtnSafety
			// 
			this->BtnSafety->BackColor = System::Drawing::SystemColors::ControlText;
			this->BtnSafety->ForeColor = System::Drawing::SystemColors::Control;
			this->BtnSafety->Location = System::Drawing::Point(527, 385);
			this->BtnSafety->Name = L"BtnSafety";
			this->BtnSafety->Size = System::Drawing::Size(75, 32);
			this->BtnSafety->TabIndex = 7;
			this->BtnSafety->Text = L"Safety";
			this->BtnSafety->UseVisualStyleBackColor = false;
			this->BtnSafety->Click += gcnew System::EventHandler(this, &LogInScreen::BtnSafety_Click);
			// 
			// LogInScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(611, 426);
			this->Controls->Add(this->rdUser);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->rdEmloyee);
			this->Controls->Add(this->BtnSafety);
			this->Controls->Add(this->btnLogIn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"LogInScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LogInScreen";
			this->Load += gcnew System::EventHandler(this, &LogInScreen::LogInScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		 
#pragma region Methods


		int toint(string s)
		{
			int ret = stoll(s);
			return ret;
		}

		int numberOfUsers;
		void GetDataFromFile(UserAccount account[])
		{
			int  id = -1,  cntr;
			string line, temp;
			ifstream atm;
			atm.open("atmproject.txt");
			while (getline(atm, line))
			{
				temp = line;
				if (temp == "*")
				{
					id++;
					cntr = 0;
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

			}
			numberOfUsers = id;
			atm.close();
		}

		void overwriteFile(UserAccount account[])
		{
			// clean
			ofstream atm;
			atm.open("atmproject.txt", ios::out | ios::trunc);
			///overwrite
			atm << '*' << '\n';
			for (int i = 0; i < numberOfUsers; i++)
			{
				atm << account[i].name << '\n' << account[i].password << '\n' << account[i].balance << '\n';
				for (int j = 0; j < account[i].transactions.size(); j++)
				{
					atm << account[i].transactionsDate[j] << '\n';
					atm << account[i].transactions[j] << '\n';
				}

				atm << '*' << '\n';
			}
			atm.close();
		}


		int GetAllEmployees(EmployeeAccount employeeAccounts[])
		{
			int cnt = 0;
			ifstream employee;
			employee.open("atmEmp.txt");
			while (!employee.eof())
			{
				employee >> employeeAccounts[cnt].name >> employeeAccounts[cnt].password;
				cnt++;
			}
			employee.close();
			return cnt;
		}
     
		int checkUser(UserAccount userAccounts[])
		{
			int indx = -1;
			for (int i = 0; i < numberOfUsers; i++)
			{
				if (marshal_as<string>(txtUser->Text) == userAccounts[i].name && marshal_as<string>(txtPassword->Text) == userAccounts[i].password)
				{
					indx = i;
					break;
				}

			}
			return indx;
		}

		void Alert()
		{
			PlaySound(L"C:\\Users\\lenovo\\Documents\\Visual Studio 2013\\Projects\\ATM Project\\ATM Project\\Red Alert.wav", 0, SND_ASYNC);
		}

		
		bool checkEmloyee(EmployeeAccount employeeAccounts[], int numb)
		{
			for (int i = 0; i < numb; i++)
			{
				
				if (marshal_as<string>(txtUser->Text) == employeeAccounts[i].name && marshal_as<string>(txtPassword->Text) == employeeAccounts[i].password)
					return true;
			}
			return false;
		}

		void FillTransferData(UserAccount userAccounts[], vector< pair <string, int> > transferData)
		{
			string date;
			time_t now = time(0);
			string dt = ctime(&now);
			dt.pop_back();
			date = dt;
			date.erase(10, 9);
			for (int i = 0; i < numberOfUsers; i++)
			{
				for (int j = 0; j < transferData.size(); j++)
				{
					if (userAccounts[i].name == transferData[j].first)
					{
						userAccounts[i].balance += transferData[j].second;
						userAccounts[i].transactions.push_back(transferData[j].second);
						userAccounts[i].transactionsDate.push_back(date);
					}
				}
				
			}
		}

#pragma endregion

#pragma region Events

private: System::Void rdEmloyee_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
				 if (rdEmloyee->Checked)
					 label1->Text = "Employee Name";
				 else
					 label1->Text = "User Name";
					
				 txtUser->Text = "";
				 txtPassword->Text = "";
	}			   
private: System::Void LogInScreen_Load(System::Object^  sender, System::EventArgs^  e)
{
			 
			 
			 
		
}
private: System::Void btnLogIn_Click(System::Object^  sender, System::EventArgs^  e)
{
			 UserAccount userAccounts[100];
			 int indx;
			 GetDataFromFile(userAccounts);
			 EmployeeAccount employeeAccounts[100];
			 int numberEmployees = GetAllEmployees(employeeAccounts);

			 if (txtUser->Text == String::Empty || txtPassword->Text == String::Empty)
				 MessageBox::Show("Please enter your user name and password");
			 else 
			 {
				 if (rdUser->Checked)
				 {
					 indx = checkUser(userAccounts);

					 if (indx == -1)
					 {
						 MessageBox::Show("Invalid user or password");
						 wrongPasswordCounter++;
						 txtPassword->Text = "";
						 txtUser->Text = "";
					 }
					 else
					 {
						 array<String ^> ^ names = gcnew array<String ^>(numberOfUsers);
						 for (int i = 0; i < numberOfUsers; i++)
							 names[i] = marshal_as<String^>(userAccounts[i].name);
						 

						 ATM_UserMode ^ ATM_UserForm = gcnew ATM_UserMode(userAccounts[indx], names, numberOfUsers);
						 ATM_UserForm->ShowDialog();
						 userAccounts[indx] = ATM_UserForm->GetCurrentUser();
						 vector< pair <string, int> > transferData = ATM_UserForm->GetTransferData();
						 FillTransferData(userAccounts, transferData);
						 transferData.clear();
						 txtUser->Text = "";
						 txtPassword->Text = "";
						 overwriteFile(userAccounts);

					 }

				 }
				 else
				 {

					 if (checkEmloyee(employeeAccounts, numberEmployees))
					 {
						 EmployeeScreen ^ employeeForm = gcnew EmployeeScreen(numberOfUsers);
						 employeeForm->ShowDialog();
					 }
					 else
					 {
						 MessageBox::Show("Invalid user or password");
						 wrongPasswordCounter++;
						 txtPassword->Text = "";
						 txtUser->Text = "";
					 }
				 }

				 if (wrongPasswordCounter == 3)
				 {
					 Alert();
					 wrongPasswordCounter = 0;
				 }

			 }
}
private: System::Void BtnSafety_Click(System::Object^  sender, System::EventArgs^  e)
{
			 Alert();
}

#pragma endregion
};
}
