//---------------------------------------------------------------------------


#pragma hdrstop

#include "Student.h"

#include "Unit1.h"

Student::Student(){}
int Student::addStudent()
{
	if (Form1->Edit1->Text == "" || Form1->ComboBox1->Text =="" ||
	Form1->Edit2->Text == "" || Form1->Edit3->Text == "") {
		 ShowMessage("Вы не заполнили все поля!");
		return 0;
	}
	else{
	AnsiString studentName = Form1->Edit1->Text;
	AnsiString studentGroupNumber = Form1->ComboBox1->Text.c_str();
	double studentScore= StrToFloat(Form1->Edit2->Text);
	double studentIncome= StrToFloat(Form1->Edit3->Text);
	TStringList *list = new TStringList();
	list->Add(studentName);
	list->Add(studentGroupNumber);
	list->Add((AnsiString)FloatToStr(studentScore));
	list->Add((AnsiString)FloatToStr(studentIncome));
	TStringList *result = new TStringList();
	result->LoadFromFile("Students information.txt");
	result->Add((AnsiString)"***************************************");
	result->Text = result->Text + list->Text;
	result->SaveToFile("Students information.txt");
	delete list;
	delete result;
	return 1;
	}
}//---------------------------------------------------------------------------

#pragma package(smart_init)
