//#pragma once
#ifndef MYSTRUCT_H
#define MYSTRUCT_H

#include <vector>
#include <string>
namespace ATMProject {
	using namespace System;
	using namespace std;

	struct UserAccount
	{
		string name, password;
		long long balance = 0;
		vector <int> transactions;
		vector<string> transactionsDate;
	};
	struct EmployeeAccount
	{
		string name, password;
	};
	

}
#endif