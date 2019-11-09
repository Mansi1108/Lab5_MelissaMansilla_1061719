#pragma once

namespace Lab5MelissaMansilla1061719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

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
	private: System::Windows::Forms::Button^  btnSecuencial;

	private: System::Windows::Forms::TextBox^  TBvalorB;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnHashing;

	private: System::Windows::Forms::Button^  btnBinario;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  tiempolbl;
	private: System::Windows::Forms::Label^  lblpos;
	private: System::Windows::Forms::Label^  label5;


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
			this->btnSecuencial = (gcnew System::Windows::Forms::Button());
			this->TBvalorB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnHashing = (gcnew System::Windows::Forms::Button());
			this->btnBinario = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tiempolbl = (gcnew System::Windows::Forms::Label());
			this->lblpos = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			// btnSecuencial
			// 
			this->btnSecuencial->Location = System::Drawing::Point(346, 86);
			this->btnSecuencial->Name = L"btnSecuencial";
			this->btnSecuencial->Size = System::Drawing::Size(107, 37);
			this->btnSecuencial->TabIndex = 5;
			this->btnSecuencial->Text = L"Secuencial";
			this->btnSecuencial->UseVisualStyleBackColor = true;
			this->btnSecuencial->Click += gcnew System::EventHandler(this, &MyForm::btnBuscar_Click);
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
			// btnHashing
			// 
			this->btnHashing->Location = System::Drawing::Point(346, 129);
			this->btnHashing->Name = L"btnHashing";
			this->btnHashing->Size = System::Drawing::Size(107, 37);
			this->btnHashing->TabIndex = 6;
			this->btnHashing->Text = L"Hashing";
			this->btnHashing->UseVisualStyleBackColor = true;
			this->btnHashing->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnBinario
			// 
			this->btnBinario->Location = System::Drawing::Point(346, 172);
			this->btnBinario->Name = L"btnBinario";
			this->btnBinario->Size = System::Drawing::Size(107, 37);
			this->btnBinario->TabIndex = 7;
			this->btnBinario->Text = L"Binario";
			this->btnBinario->UseVisualStyleBackColor = true;
			this->btnBinario->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Tiempo de Ejecucion:";
			// 
			// tiempolbl
			// 
			this->tiempolbl->AutoSize = true;
			this->tiempolbl->Location = System::Drawing::Point(191, 198);
			this->tiempolbl->Name = L"tiempolbl";
			this->tiempolbl->Size = System::Drawing::Size(18, 20);
			this->tiempolbl->TabIndex = 9;
			this->tiempolbl->Text = L"0";
			// 
			// lblpos
			// 
			this->lblpos->AutoSize = true;
			this->lblpos->Location = System::Drawing::Point(665, 94);
			this->lblpos->Name = L"lblpos";
			this->lblpos->Size = System::Drawing::Size(18, 20);
			this->lblpos->TabIndex = 11;
			this->lblpos->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(506, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Se encuentra en:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 237);
			this->Controls->Add(this->lblpos);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tiempolbl);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnBinario);
			this->Controls->Add(this->btnHashing);
			this->Controls->Add(this->btnSecuencial);
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
	private: int size;
	private: System::Void btnGenerarArreglo_Click(System::Object^  sender, System::EventArgs^  e) {
		int cantidad = System::Convert::ToInt16(TBCant->Text);
		generarNumerosAleatorios(cantidad);
		mostrarNumerosAleatorios();
		LLenarTablaHash(cantidad);
		size = cantidad;
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
	
private: System::Void btnBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
		
		int valorBuscar = System::Convert::ToInt16(TBvalorB->Text);
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int x = busquedaSecuencial(Arreglo, valorBuscar, size);
		lblpos->Text = System::Convert::ToString(x);
		Timer->Stop();
		tiempolbl->Text = System::Convert::ToString(Timer->Elapsed);
	}
	private: System::Int16 busquedaSecuencial(ArrayList^ Arreglo, int valorBuscar, int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (valorBuscar == System::Convert::ToInt16(Arreglo[i]))
			{
				return i + 1;
			}
		}
	}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int valorBuscar = System::Convert::ToInt16(TBvalorB->Text);
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	int x = busquedaHashing(valorBuscar, size);
	lblpos->Text = System::Convert::ToString(x);
	Timer->Stop();
	tiempolbl->Text = System::Convert::ToString(Timer->Elapsed);
}
private: System::Int16 busquedaHashing(int valorBuscar, int size)
{
	int posicion = valorBuscar % size;
	if (System::Convert::ToInt16(TablaHash[posicion]) == valorBuscar)
		return posicion;
	while (System::Convert::ToInt16(TablaHash[posicion]) != valorBuscar)
	{
		posicion++;
	}
	return posicion;
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int valorBuscar = System::Convert::ToInt16(TBvalorB->Text);
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	int x = busquedaBinaria(Arreglo, valorBuscar, size);
	lblpos->Text = System::Convert::ToString(x);
	Timer->Stop();
	tiempolbl->Text = System::Convert::ToString(Timer->Elapsed);
}
private: System::Int16 busquedaBinaria(ArrayList^ Arreglo, int valorBuscar, int size)
{
	//los metodos de busqueda fueron brindados en la clase teorica, en la presentacion de busquedas.
	int inicio = 0;
	int enmedio;
	int final = size - 1;
	while (inicio <= final)
	{
		enmedio = (inicio + final) / 2;

		if (valorBuscar == System::Convert::ToInt16(Arreglo[enmedio]))
		{
			return enmedio + 1;
		}
		else {
			if (System::Convert::ToInt16(Arreglo[enmedio]) > valorBuscar)
			{
				final = enmedio - 1;
			}
			else {
				inicio = enmedio + 1;
			}
		}
	}
	return -1;
}
};
}
