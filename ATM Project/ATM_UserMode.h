#pragma once
#include "UserStruct.h"
#include <string>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "UserTransactions.h"
#include <ctime>

namespace ATMProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	static struct UserAccount currentUserAccount;
	static vector < pair < string , int> > transferData;
	/// <summary>
	/// Summary for ATM_UserMode
	/// </summary> 
	public ref class ATM_UserMode : public System::Windows::Forms::Form
	{
	public:
		ATM_UserMode(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int numberOfUsers;
		array<String ^> ^ userNames;
		ATM_UserMode(UserAccount currentUser, array<String ^> ^ usernames , int numOfUsers)
		{
			InitializeComponent();
			currentUserAccount = currentUser;
			numberOfUsers = numOfUsers;
			userNames = gcnew array<String ^>(numberOfUsers);
			userNames = usernames;
		}

		UserAccount	GetCurrentUser()
		{
			return currentUserAccount;
		}

		vector< pair <string, int> > GetTransferData()
		{
			return transferData;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ATM_UserMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtAmount;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnWithdraw;
	private: System::Windows::Forms::Button^  btnDeposite;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblBalance;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  BtnSafety;
	private: System::Windows::Forms::ComboBox^  cbTransferTo;
	private: System::Windows::Forms::TextBox^  txtTransferAmount;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnTransfer;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ATM_UserMode::typeid));
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnWithdraw = (gcnew System::Windows::Forms::Button());
			this->btnDeposite = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BtnSafety = (gcnew System::Windows::Forms::Button());
			this->cbTransferTo = (gcnew System::Windows::Forms::ComboBox());
			this->txtTransferAmount = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnTransfer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtAmount
			// 
			this->txtAmount->Location = System::Drawing::Point(221, 194);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(106, 22);
			this->txtAmount->TabIndex = 0;
			this->txtAmount->TextChanged += gcnew System::EventHandler(this, &ATM_UserMode::txtAmount_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(234, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Amount";
			// 
			// btnWithdraw
			// 
			this->btnWithdraw->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnWithdraw->Enabled = false;
			this->btnWithdraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWithdraw->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnWithdraw->Location = System::Drawing::Point(177, 238);
			this->btnWithdraw->Name = L"btnWithdraw";
			this->btnWithdraw->Size = System::Drawing::Size(94, 30);
			this->btnWithdraw->TabIndex = 2;
			this->btnWithdraw->Text = L"Withdraw";
			this->btnWithdraw->UseVisualStyleBackColor = false;
			this->btnWithdraw->Click += gcnew System::EventHandler(this, &ATM_UserMode::btnWithdraw_Click);
			// 
			// btnDeposite
			// 
			this->btnDeposite->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnDeposite->Enabled = false;
			this->btnDeposite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeposite->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDeposite->Location = System::Drawing::Point(293, 238);
			this->btnDeposite->Name = L"btnDeposite";
			this->btnDeposite->Size = System::Drawing::Size(90, 30);
			this->btnDeposite->TabIndex = 3;
			this->btnDeposite->Text = L"Deposite";
			this->btnDeposite->UseVisualStyleBackColor = false;
			this->btnDeposite->Click += gcnew System::EventHandler(this, &ATM_UserMode::btnDeposite_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(164, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Your Balance is";
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBalance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblBalance->Location = System::Drawing::Point(367, 72);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(0, 25);
			this->lblBalance->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(164, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Welcome";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblName->Location = System::Drawing::Point(367, 20);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(0, 25);
			this->lblName->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(221, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 30);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Transactions";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ATM_UserMode::button1_Click);
			// 
			// BtnSafety
			// 
			this->BtnSafety->BackColor = System::Drawing::SystemColors::ControlText;
			this->BtnSafety->ForeColor = System::Drawing::SystemColors::Control;
			this->BtnSafety->Location = System::Drawing::Point(783, 318);
			this->BtnSafety->Name = L"BtnSafety";
			this->BtnSafety->Size = System::Drawing::Size(75, 32);
			this->BtnSafety->TabIndex = 11;
			this->BtnSafety->Text = L"Safety";
			this->BtnSafety->UseVisualStyleBackColor = false;
			this->BtnSafety->Click += gcnew System::EventHandler(this, &ATM_UserMode::BtnSafety_Click);
			// 
			// cbTransferTo
			// 
			this->cbTransferTo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbTransferTo->FormattingEnabled = true;
			this->cbTransferTo->Location = System::Drawing::Point(615, 194);
			this->cbTransferTo->Name = L"cbTransferTo";
			this->cbTransferTo->Size = System::Drawing::Size(121, 24);
			this->cbTransferTo->TabIndex = 12;
			// 
			// txtTransferAmount
			// 
			this->txtTransferAmount->Location = System::Drawing::Point(430, 194);
			this->txtTransferAmount->Name = L"txtTransferAmount";
			this->txtTransferAmount->Size = System::Drawing::Size(146, 22);
			this->txtTransferAmount->TabIndex = 13;
			this->txtTransferAmount->TextChanged += gcnew System::EventHandler(this, &ATM_UserMode::txtTransferAmount_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(427, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Transfer Amount";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(620, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Transfer To";
			// 
			// btnTransfer
			// 
			this->btnTransfer->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnTransfer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTransfer->ForeColor = System::Drawing::SystemColors::Control;
			this->btnTransfer->Location = System::Drawing::Point(566, 253);
			this->btnTransfer->Name = L"btnTransfer";
			this->btnTransfer->Size = System::Drawing::Size(82, 32);
			this->btnTransfer->TabIndex = 16;
			this->btnTransfer->Text = L"Transfer";
			this->btnTransfer->UseVisualStyleBackColor = false;
			this->btnTransfer->Click += gcnew System::EventHandler(this, &ATM_UserMode::btnTransfer_Click);
			// 
			// ATM_UserMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(870, 362);
			this->Controls->Add(this->btnTransfer);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtTransferAmount);
			this->Controls->Add(this->cbTransferTo);
			this->Controls->Add(this->BtnSafety);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblBalance);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnDeposite);
			this->Controls->Add(this->btnWithdraw);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAmount);
			this->Name = L"ATM_UserMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ATM_UserMode";
			this->Load += gcnew System::EventHandler(this, &ATM_UserMode::ATM_UserMode_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma region Methods 

		bool CheckIfNumber(String^ input)
		{
			string s = marshal_as<string>(input);
			bool isNumber = true;
			for (char cc : s)
			{
				if (Char::IsLetter(cc))
				{
					isNumber = false;
					break;
				}

			}
			if (!isNumber)
			{
				MessageBox::Show("You must enter a number", "Error");
			}

			return isNumber;

		}


		void DepositeOrWithdraw(int value)
		{
			string date;
			time_t now = time(0);
			string dt = ctime(&now);
			dt.pop_back();
			date = dt;
			date.erase(10, 9);

			if (currentUserAccount.balance + value < 0)
			{
				MessageBox::Show("Please Enter valid amount");
				return;
			}

			currentUserAccount.balance += value;
			currentUserAccount.transactions.push_back(value);
			currentUserAccount.transactionsDate.push_back(date);
			lblBalance->Text = (currentUserAccount.balance).ToString();

		}


		void LimitAmount(int value)
		{
			
				if (value > 5000)
				   MessageBox::Show("ENTER VALUE LESS THAN 5000");
				
		}

		vector <int> GetLastFiveTransaction(vector <int> lastFiveTransaction)
		{
			int start = currentUserAccount.transactions.size() - 5;
			if (start < 0)
				start = 0;

			for (int i = start; i < currentUserAccount.transactions.size(); i++)
			{
				lastFiveTransaction.push_back(currentUserAccount.transactions[i]);
			}
			return lastFiveTransaction;

		}

#pragma endregion


#pragma region Events
private: System::Void txtAmount_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

				 if (txtAmount->Text == String::Empty)
				 {
					 btnDeposite->Enabled = false;
					 btnWithdraw->Enabled = false;
				 }
				 else
				 {
					 btnDeposite->Enabled = true;
					 btnWithdraw->Enabled = true;
					 if (!CheckIfNumber(txtAmount->Text))
						 txtAmount->Text = "";
				 }


	}
private: System::Void ATM_UserMode_Load(System::Object^  sender, System::EventArgs^  e) 
{
			 transferData.clear();

			 lblName->Text = marshal_as<String^> (currentUserAccount.name);
			 lblBalance->Text = currentUserAccount.balance.ToString();

			 cbTransferTo->Items->AddRange(userNames);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
			 vector <int> lastFiveTransaction;
			 lastFiveTransaction = GetLastFiveTransaction(lastFiveTransaction);
			 UserTransactions ^ transactionsData = gcnew  UserTransactions(lastFiveTransaction);
			 transactionsData->ShowDialog();
}
private: System::Void btnWithdraw_Click(System::Object^  sender, System::EventArgs^  e) 
{  
			 int value = Convert::ToInt32(txtAmount->Text);
			 LimitAmount(value);
			 value *= -1;
			 DepositeOrWithdraw(value);
			 txtAmount->Text = "";
}
private: System::Void btnDeposite_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 int value = Convert::ToInt32(txtAmount->Text);
			 DepositeOrWithdraw(value);
			 txtAmount->Text = "";
}
private: System::Void BtnSafety_Click(System::Object^  sender, System::EventArgs^  e)
{
			 PlaySound(L"C:\\Users\\lenovo\\Documents\\Visual Studio 2013\\Projects\\ATM Project\\ATM Project\\Red Alert.wav", 0, SND_ASYNC);
}
private: System::Void txtTransferAmount_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
			 if (txtTransferAmount->Text != String::Empty)
			 {
	 
				 if (!CheckIfNumber(txtTransferAmount->Text))
					 txtAmount->Text = "";
			 }
			
              
}
private: System::Void btnTransfer_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 if (txtTransferAmount->Text != String::Empty && cbTransferTo->Text != String::Empty)
			 {
				 int value = Convert::ToInt32(txtTransferAmount->Text);
				 value *= -1;
				 DepositeOrWithdraw(value);
				 value *= -1;
				 transferData.push_back(make_pair (marshal_as<string>(cbTransferTo->Text), Convert::ToInt32(txtTransferAmount->Text)));
				 txtTransferAmount->Text = "";
			 }
			 else
				 MessageBox::Show("Please enter transfer amount and choose a user to transfer");
}
#pragma endregion
};
}
