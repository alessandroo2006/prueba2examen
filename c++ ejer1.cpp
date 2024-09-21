#include <iostream>
using namespace std;
	enum Categoria { ALTA, MEDIA, BAJA };
	enum class Grade { A, B, C, D, F	};
	
	//Constante para los rangos de calificaciones
	const int GRADE_A_MIN=60;
	const int GRADE_B_MIN=60;
	const int GRADE_C_MIN=60;
	const int GRADE_D_MIN=80;
	const int GRADE_F_MIN=75;
	
	int main(){
		int numericGrande;
		Grade LetterGrade;
		
		//solicitar al usuario que ingrese una cantidad numerica 
		cout<< "ingresar la cantidad numerica del (0 a 100):" ;
		cin>> numericGrande;
	
		
		//convertir la calificacion numerica y mostrar la calificacion  en letras
		if (numericGrade >=_A_MIN){
		LetterGrade =Grade ::A;
		} 	else if (numericGrade >=_B_MIN){
		LetterGrade = Grade::B;
		}	 else if (numericGrade  >=_C_MIN){
		LetterGrade = Grade ::C;
		}	else if (numericGrade  >=_D_MIN){
		LetterGrade =Grade ::D;
    	}	else if (numericGrade  >=_F_MIN){
		LetterGrade =Grade ::F;
		
		//mostrar la calificacion en letras
		<<"la calificacion es:";
		switch (LetterGrade){
			case Grade::A:
				cout <<"A"<<endl;
				break;
				case Grade ::B:
				cout <<"B"<<endl;
				break;
				case Grade ::C:
					cout<<"C"<<endl;
					break;
					case Grade ::D:
						cout <<"D"<<endl;
						case Grade ::F:
							cout <<"F"<<endl;
							break
							
						
					
		}
		
		return 0;
	}
	
	
	
	
	
