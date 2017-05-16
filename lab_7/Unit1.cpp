//---------------------------------------------------------------------------

#include <vcl.h>
#include <list>
#include <iostream>
#pragma hdrstop

#include "Unit1.h"
#include "Student.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
list<Student> students;
int stSize;
const double minimumWage = 400.0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	 int result = Student::addStudent();
	 if (result) {
		AnsiString studentName = Form1->Edit1->Text;
		AnsiString studentGroupNumber = Form1->ComboBox1->Text.c_str();
		double studentScore= StrToFloat(Form1->Edit2->Text);
		double studentIncome= StrToFloat(Form1->Edit3->Text);
		Student st;
		st.fullName = studentName;
		st.groupNumber = studentGroupNumber;
		st.averageScore = studentScore;
		st.income = studentIncome;
		if (studentIncome > minimumWage) {
			st.priority = 1;
		}
		else
			st.priority = 0;
		students.push_back(st);
		stSize++;
	 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	ComboBox1->Items->Add("653503");
	ComboBox1->Items->Add("210501");
	ComboBox1->Items->Add("653501");
	ComboBox1->Items->Add("653502");
	ComboBox1->Items->Add("653504");
	ComboBox1->Items->Add("653505");
	ComboBox1->Items->Add("353503");
	ComboBox1->Items->Add("270401");
	ComboBox1->Items->Add("305503");
	ComboBox1->Items->Add("402101");
	ComboBox1->Items->Add("470378");
	ComboBox1->Sorted = 1;




	AnsiString studentName;
	AnsiString studentGroupNumber;
	double studentScore;
	double studentIncome;
	Student st;
	try
	{
		TStringList *list = new TStringList();
		list->LoadFromFile("Students information.txt");
		int amount = list->Count;
		for (int i = 1; i < amount; i++) {
			 studentName = list->Strings[i];
			 i++;
			 studentGroupNumber = list->Strings[i];
			 i++;
			 studentScore = StrToFloat(list->Strings[i]);
			 i++;
			 studentIncome = StrToFloat(list->Strings[i]);
			 i++;
			 st.fullName = studentName;
			 st.groupNumber = studentGroupNumber;
			 st.averageScore = studentScore;
			 st.income = studentIncome;
             if (studentIncome > minimumWage) {
				st.priority = 1;
			 }
			 else
				st.priority = 0;
			 students.push_back(st);
		}
		stSize = students.size();
		//Memo1->Lines->Add(IntToStr(stSize));
	}
	catch(...)
	{
		ShowMessage("Файл «Students information.txt» не найден!");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	/*try
	{
		TStringList *list = new TStringList();
		list->LoadFromFile("Students information.txt");
		Memo1->Clear();
		Memo1->Text = list->Text;
	}
	catch(...)
	{
		ShowMessage("Файл «Students information.txt» не найден!");
	} */
	Memo1->Clear();
	list<Student>::iterator i;
	for (i = students.begin(); i != students.end(); ++i )
	{
		Student st = *i;
		Memo1->Lines->Add("ФИО: " + st.fullName);
		Memo1->Lines->Add("Номер группы: " + st.groupNumber);
		Memo1->Lines->Add("Средний балл: " + FloatToStr(st.averageScore));
		Memo1->Lines->Add("Доход: " + FloatToStr(st.income));
		Memo1->Lines->Add("***************************************");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if (Edit4->Text == "") {
		ShowMessage("Вы не ввели ФИО!");
	}
	else
	{
		int flag = 0;
		Memo1->Clear();
		AnsiString name = Edit4->Text;
		list<Student>::iterator i;
		for (i = students.begin(); i != students.end(); ++i )
		{
			Student st = *i;
			if (st.fullName == name) {
				Memo1->Lines->Add("ФИО: " + st.fullName);
				Memo1->Lines->Add("Номер группы: " + st.groupNumber);
				Memo1->Lines->Add("Средний балл: " + FloatToStr(st.averageScore));
				Memo1->Lines->Add("Доход: " + FloatToStr(st.income));
				flag = 1;
			}
		}
		if (!flag) {
			  Memo1->Lines->Add("Студент не найден");
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{

	if (Edit5->Text == "") {
		ShowMessage("Вы не ввели значение!");
	}
	else
	{
		int flag = 0;
		Memo1->Clear();
		double income = StrToFloat(Edit5->Text);
		list<Student>::iterator i;
		for (i = students.begin(); i != students.end(); ++i )
		{
			Student st = *i;
			if (st.income >= income) {
				Memo1->Lines->Add("ФИО: " + st.fullName);
				Memo1->Lines->Add("Номер группы: " + st.groupNumber);
				Memo1->Lines->Add("Средний балл: " + FloatToStr(st.averageScore));
				Memo1->Lines->Add("Доход: " + FloatToStr(st.income));
				Memo1->Lines->Add("***************************************");
				flag = 1;
			}
		}
		if (!flag) {
			  Memo1->Lines->Add("Студенты не найдены");
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if (Edit6->Text == "") {
		ShowMessage("Вы не ввели значение!");
	}
	else
	{
		int flag = 0;
		Memo1->Clear();
		double score = StrToFloat(Edit6->Text);
		list<Student>::iterator i;
		for (i = students.begin(); i != students.end(); ++i )
		{
			Student st = *i;
			if (st.averageScore < score) {
				Memo1->Lines->Add("ФИО: " + st.fullName);
				Memo1->Lines->Add("Номер группы: " + st.groupNumber);
				Memo1->Lines->Add("Средний балл: " + FloatToStr(st.averageScore));
				Memo1->Lines->Add("Доход: " + FloatToStr(st.income));
				Memo1->Lines->Add("***************************************");
				flag = 1;
			}
		}
		if (!flag) {
			  Memo1->Lines->Add("Студенты не найдены");
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
		int flag = 0;
		Memo1->Clear();
		list<Student>::iterator i;
		for (i = students.begin(); i != students.end(); ++i )
		{
			Student st = *i;
			if (st.priority) {
				Memo1->Lines->Add("ФИО: " + st.fullName);
				Memo1->Lines->Add("Номер группы: " + st.groupNumber);
				Memo1->Lines->Add("Средний балл: " + FloatToStr(st.averageScore));
				Memo1->Lines->Add("Доход: " + FloatToStr(st.income));
				Memo1->Lines->Add("***************************************");
				flag = 1;
			}
		}
		if (!flag) {
			  Memo1->Lines->Add("Студенты не найдены");
		}

}
//---------------------------------------------------------------------------

