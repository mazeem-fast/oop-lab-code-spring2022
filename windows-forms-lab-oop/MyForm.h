#pragma once

#include "Student.h"
#include "StudentStore.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		StudentStore* student_store;

	public:
		MyForm(void)
		{
			InitializeComponent();
			ShowData();
			student_store = new StudentStore;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
				delete student_store;
			}
		}
	private:

		System::Windows::Forms::ListView^ student_list_view;
		System::Windows::Forms::ColumnHeader^ name_column;
		System::Windows::Forms::ColumnHeader^ roll_column;
		System::Windows::Forms::ColumnHeader^ marks_column;
		System::Windows::Forms::ColumnHeader^ hidden_id_column;

	private: System::Windows::Forms::Button^ delete_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ load_from_list;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->student_list_view = (gcnew System::Windows::Forms::ListView());
			this->name_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->roll_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->marks_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->load_from_list = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// student_list_view
			// 
			this->student_list_view->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->name_column,
					this->roll_column, this->marks_column
			});
			this->student_list_view->Dock = System::Windows::Forms::DockStyle::Fill;
			this->student_list_view->HideSelection = false;
			this->student_list_view->Location = System::Drawing::Point(0, 0);
			this->student_list_view->Name = L"student_list_view";
			this->student_list_view->Size = System::Drawing::Size(692, 486);
			this->student_list_view->TabIndex = 0;
			this->student_list_view->UseCompatibleStateImageBehavior = false;
			this->student_list_view->View = System::Windows::Forms::View::Details;
			this->student_list_view->FullRowSelect = true;
			// 
			// name_column
			// 
			this->name_column->Text = L"Name";
			// 
			// roll_column
			// 
			this->roll_column->Text = L"Roll Number";
			// 
			// marks_column
			// 
			this->marks_column->Text = L"Marks";
			// 
			// delete_btn
			// 
			this->delete_btn->Location = System::Drawing::Point(605, 12);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(75, 23);
			this->delete_btn->TabIndex = 1;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->UseVisualStyleBackColor = true;
			this->delete_btn->Click += gcnew System::EventHandler(this, &MyForm::delete_btn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(524, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(27, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(637, 415);
			this->panel1->TabIndex = 3;
			this->panel1->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(173, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(257, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 22);
			this->textBox1->TabIndex = 0;
			// 
			// load_from_list
			// 
			this->load_from_list->Location = System::Drawing::Point(443, 12);
			this->load_from_list->Name = L"load_from_list";
			this->load_from_list->Size = System::Drawing::Size(75, 23);
			this->load_from_list->TabIndex = 4;
			this->load_from_list->Text = L"Load From List";
			this->load_from_list->UseVisualStyleBackColor = true;
			this->load_from_list->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 486);
			this->Controls->Add(this->load_from_list);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->delete_btn);
			this->Controls->Add(this->student_list_view);
			this->Name = L"MyForm";
			this->Text = L"MyApp";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Random";
		this->BackColor = System::Drawing::Color::CadetBlue;
	}

		   void ShowData() {
			   Student students[3];
			   students[0].SetMarks(10);
			   students[0].SetName("asdas");
			   students[0].SetRollNumber(101);

			   students[1].SetMarks(10);
			   students[1].SetName("asdas");
			   students[1].SetRollNumber(101);

			   students[2].SetMarks(10);
			   students[2].SetName("asdas");
			   students[2].SetRollNumber(101);

			   for (int i = 0; i < 3; i++) {
				   this->student_list_view->Items->Add(gcnew String(students[i].GetName().c_str()));
				   this->student_list_view->Items[i]->SubItems->Add("" + students[i].GetRollNumber());
				   this->student_list_view->Items[i]->SubItems->Add("" + students[i].GetMarks());
			   }
		   }
	private: System::Void delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->student_list_view->Items->Count < 1) {
			return;
		}

		if (this->student_list_view->SelectedItems->Count < 1) {
			return;
		}

		int selected_index = this->student_list_view->FocusedItem->Index;
		this->student_list_view->Items->RemoveAt(selected_index);
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ input_name = this->textBox1->Text->ToString();
		if (!(input_name->Length == 0)) {
			this->student_list_view->Items->Add(input_name);
			this->student_list_view->Refresh();
		}
		this->panel1->Visible = false;
	}

		   void LoadDataFromList() {
			   Student* data = student_store->GetStudentList();
			   for (int i = 0; i < student_store->GetListSize(); i++) {
				   ListViewItem^ list_view_item = (gcnew ListViewItem());
				   list_view_item->Tag = i;
				   list_view_item->Text = "abc";
				   /*
				   this->student_list_view->Items->Add(gcnew String(data[i].GetName().c_str()));
				   this->student_list_view->Items[i]->SubItems->Add("" + data[i].GetRollNumber());
				   this->student_list_view->Items[i]->SubItems->Add("" + data[i].GetMarks());*/
				   this->student_list_view->Items->Add(list_view_item);
				   
				   /*
				   * Can also be done by creating a ListViewItem object and adding content to its subitems like:
				   * ListViewItem^ item = gcnew ListViewItem();
				   * item->Text = "NAME"; //First column
				   * item->SubItems->Add("" + data[i].GetRollNumber());
				   * this->student_list_view->Items->Add(item);
				   */
			   }
			   this->student_list_view->Refresh();
		   }

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDataFromList();
	}
};
}
