#pragma once

namespace Lab5MelissaMansilla1061719 {

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
	public:
		MyForm(void)
		{
			InitializeComponent();
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
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  TBCant;
	protected:

	private: System::Windows::Forms::Button^  btnGenerarArreglo;
	private: System::Windows::Forms::Button^  btnBuscar;
	private: System::Windows::Forms::TextBox^  TBvalorB;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TBCant = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerarArreglo = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->TBvalorB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese Cantidad de Numeros:";
			// 
			// TBCant
			// 
			this->TBCant->Location = System::Drawing::Point(243, 30);
			this->TBCant->Name = L"TBCant";
			this->TBCant->Size = System::Drawing::Size(196, 26);
			this->TBCant->TabIndex = 1;
			// 
			// btnGenerarArreglo
			// 
			this->btnGenerarArreglo->Location = System::Drawing::Point(477, 13);
			this->btnGenerarArreglo->Name = L"btnGenerarArreglo";
			this->btnGenerarArreglo->Size = System::Drawing::Size(107, 61);
			this->btnGenerarArreglo->TabIndex = 2;
			this->btnGenerarArreglo->Text = L"Generar";
			this->btnGenerarArreglo->UseVisualStyleBackColor = true;
			this->btnGenerarArreglo->Click += gcnew System::EventHandler(this, &MyForm::btnGenerarArreglo_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(346, 86);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(107, 37);
			this->btnBuscar->TabIndex = 5;
			this->btnBuscar->Text = L"Secuencial";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &MyForm::btnBuscar_Click);
			// 
			// TBvalorB
			// 
			this->TBvalorB->Location = System::Drawing::Point(135, 134);
			this->TBvalorB->Name = L"TBvalorB";
			this->TBvalorB->Size = System::Drawing::Size(196, 26);
			this->TBvalorB->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Valor a Buscar:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(346, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 37);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Hashing";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(346, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 37);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Binario";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 237);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->TBvalorB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnGenerarArreglo);
			this->Controls->Add(this->TBCant);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Arreglo de numeros
	private: ArrayList ^ Arreglo = gcnew ArrayList();
	//Arreglo tabla hash 
	private: Hashtable^ TablaHash = gcnew Hashtable();
	
	private: System::Void btnGenerarArreglo_Click(System::Object^  sender, System::EventArgs^  e) {
		int cantidad = System::Convert::ToInt16(TBCant->Text);
		generarNumerosAleatorios(cantidad);
		mostrarNumerosAleatorios();
	}
			 //Llenar el arreglo con numeros aleatorios.
	private: System::Void generarNumerosAleatorios(int size) {
		Arreglo = gcnew ArrayList(size);
		Random^ random = gcnew Random();
		for (int i = 0; i < size; i++)
		{
			Arreglo->Add(random->Next(0, 100));

		}
	}
	private: System::Void mostrarNumerosAleatorios() {
		String^ valores = "";
		for each (int num in Arreglo)
		{
			valores = valores + num + ", ";
		}
		System::Windows::Forms::MessageBox::Show(valores);
	}
	private: System::Void LLenarTablaHash(int size) {
		TablaHash = gcnew Hashtable(size*2);
		int llave = 0;

		for each (int num in Arreglo)
		{
			llave = num % (size * 2);
			while (TablaHash[llave] != nullptr)
			{
				llave++;
			}
			TablaHash->Add(llave, num);
		}
	}
	private: System::Void btnBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
		int valorBuscar = System::Convert::ToInt16(TBvalorB->Text);
	}
	private: System::Int16 PosicionEnHash(int valorBuscar, int size) {
		int posicion = valorBuscar % (size * 2);
		if (TablaHash[posicion] == valorBuscar)
		{
			return posicion;
		}
		else 
		{
			while (TablaHash[posicion] != valorBuscar)
			{
				posicion++;
			}
			return posicion;
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
