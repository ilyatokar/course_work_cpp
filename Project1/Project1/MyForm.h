#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  магазиныToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;
	private: System::Windows::Forms::ListView^  listView1;



	private: System::Windows::Forms::ToolStripMenuItem^  удалитьВыбранныеЭлементыToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^  columnId;
	private: System::Windows::Forms::ColumnHeader^  columnName;
	private: System::Windows::Forms::ToolStripMenuItem^  поставщикиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  поступлениеТоваровToolStripMenuItem;








	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->магазиныToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьВыбранныеЭлементыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnId = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnName = (gcnew System::Windows::Forms::ColumnHeader());
			this->поставщикиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поступлениеТоваровToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->магазиныToolStripMenuItem,
					this->поставщикиToolStripMenuItem, this->поступлениеТоваровToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(655, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// магазиныToolStripMenuItem
			// 
			this->магазиныToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->создатьToolStripMenuItem,
					this->удалитьВыбранныеЭлементыToolStripMenuItem
			});
			this->магазиныToolStripMenuItem->Name = L"магазиныToolStripMenuItem";
			this->магазиныToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->магазиныToolStripMenuItem->Text = L"Магазины";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(243, 22);
			this->создатьToolStripMenuItem->Text = L"создать";
			// 
			// удалитьВыбранныеЭлементыToolStripMenuItem
			// 
			this->удалитьВыбранныеЭлементыToolStripMenuItem->Name = L"удалитьВыбранныеЭлементыToolStripMenuItem";
			this->удалитьВыбранныеЭлементыToolStripMenuItem->Size = System::Drawing::Size(243, 22);
			this->удалитьВыбранныеЭлементыToolStripMenuItem->Text = L"Удалить выбранные элементы";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnId, this->columnName });
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(655, 526);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnId
			// 
			this->columnId->Text = L"id";
			this->columnId->Width = 30;
			// 
			// columnName
			// 
			this->columnName->Text = L"Название";
			// 
			// поставщикиToolStripMenuItem
			// 
			this->поставщикиToolStripMenuItem->Name = L"поставщикиToolStripMenuItem";
			this->поставщикиToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->поставщикиToolStripMenuItem->Text = L"Поставщики";
			// 
			// поступлениеТоваровToolStripMenuItem
			// 
			this->поступлениеТоваровToolStripMenuItem->Name = L"поступлениеТоваровToolStripMenuItem";
			this->поступлениеТоваровToolStripMenuItem->Size = System::Drawing::Size(139, 20);
			this->поступлениеТоваровToolStripMenuItem->Text = L"Поступление товаров";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 550);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	};
}
