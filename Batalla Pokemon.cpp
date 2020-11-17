#include <iostream>
using namespace std;

class Pokemon{
  protected:

    string tipo = " ";
    string nombre = " ";
    string apellido;
    int HP = 100;
    string estado = "Saludable";

  public:

    //constructor
  Pokemon(string tipo_, string nombre_, string apellido_, string estado_){
    tipo = tipo_;
    nombre = nombre_;
    apellido = apellido_;
    estado = estado_;
  }
  Pokemon(){};
    //getters
  string getTipo(){return tipo;}
  string getNombre(){return nombre;}
  string getApellido(){return apellido;}
  int getHP(){return HP;}
  string getEstado(){return estado;}

    //setters
  void setTipo(string tipo_){tipo = tipo_;}
  void setNombre(string nombre_){nombre = nombre_;}
  void setApellido(string apellido_){apellido = apellido_;}
  void setHP(int HP_){HP = HP_;}
  void setEstado(string estado_){estado = estado_;}

    //Metodos
  //PENDIENTE HACERDANO;
  void HacerDano(Pokemon x, int dano){  //El pokemon x del argumento es el pokemon atacante, el argumento int es el daño recivido como base, determinado por el ataque.
  	if(tipo == "Fuego"){
  		if(x.getTipo() == "Agua"){
  			HP = HP - dano * 2;
  			cout<<"El ataque fue super efectivo !"<<endl;
		  }
		else{
			HP = HP - dano;
		  }
		}
	else if(tipo == "Agua"){
		if(x.getTipo() == "Planta"){
			HP = HP - dano * 2;
			cout<<"El ataque fue super efectivo !"<<endl;
		}
		else{
			HP = HP - dano;
		}
	}
	else if(tipo == "Planta"){
		if(x.getTipo() == "Fuego"){
			HP = HP - dano * 2;
			cout<<"El ataque fue super efectivo !"<<endl;
		}
		else{
			HP = HP - dano;
		}
	}
	if(HP <= 0){
		estado = "Fuera de combate";
		HP = 0;
	}
	return;
	}
};

class PokemonFuego : public Pokemon{
  protected:
    string debil = "Agua";
  public:
  	PokemonFuego(){}
};

class PokemonAgua : public Pokemon{
	protected:
		string debil = "Planta";
	public:
		PokemonAgua(){}
};

class PokemonPlanta : public Pokemon{
	protected:
		string debil = "Fuego";
	public:
		PokemonPlanta(){}
};

class Charmander : public PokemonFuego{
	protected:
		string ataque1 = "Lanza llamas";
		string ataque2 = "Golpe Fuego";
	public:
		Charmander(string nombre_, string apellido_, string tipo_){
			nombre = nombre_;
			apellido = apellido_;
			tipo = tipo_;
		}
		int Ataque_1(Pokemon x){
			if(x.getTipo() == "Agua"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 15;
			}
			else{
				return 30;
			}
		}
		int Ataque_2(Pokemon x){
			if(x.getTipo() == "Agua"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 20;
			}
			else{
				return 30;
			}
		}
		string getAtaque1(){return ataque1;}
		string getAtaque2(){return ataque2;}
};

class Cyndaquil : public PokemonFuego{
	protected:
		string ataque1 = "Fuego Sagrado";
		string ataque2 = "Anillo Igneo";
	public:
		Cyndaquil(string nombre_, string apellido_, string tipo_){
			nombre = nombre_;
			apellido = apellido_;
			tipo = tipo_;
		}
		int Ataque_1(Pokemon x){
			if(x.getTipo() == "Agua"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 15;
			}
			else{
				return 30;
			}
		}
		int Ataque_2(Pokemon x){
			if(x.getTipo() == "Agua"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 20;
			}
			else{
				return 30;
			}
		}
		string getAtaque1(){return ataque1;}
		string getAtaque2(){return ataque2;}
};

class Magikarp : public PokemonAgua{
	protected:
		string ataque1 = "Splash";
		string ataque2 = "Hidrobomba";
	public:
		Magikarp(string nombre_, string apellido_, string tipo_){
			nombre = nombre_;
			apellido = apellido_;
			tipo = tipo_;
		}
		int Ataque_1(Pokemon x){
			if(x.getTipo() == "Planta"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 15;
			}
			else{
				return 30;
			}
		}
		int Ataque_2(Pokemon x){
			if(x.getTipo() == "Planta"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 20;
			}
			else{
				return 30;
			}
		}
		string getAtaque1(){return ataque1;}
		string getAtaque2(){return ataque2;}
};

class Piplup : public PokemonAgua{
	protected:
		string ataque1 = "Surf";
		string ataque2 = "Hidropulso";
	public:
		Piplup(string nombre_, string apellido_, string tipo_){
			nombre = nombre_;
			apellido = apellido_;
			tipo = tipo_;
		}
		int Ataque_1(Pokemon x){
			if(x.getTipo() == "Planta"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 15;
			}
			else{
				return 30;
			}
		}
		int Ataque_2(Pokemon x){
			if(x.getTipo() == "Planta"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 20;
			}
			else{
				return 30;
			}
		}
		string getAtaque1(){return ataque1;}
		string getAtaque2(){return ataque2;}
};

class Bulbasaur : public PokemonPlanta{
	protected:
		string ataque1 = "Hoja Afilada";
		string ataque2 = "Ciclon de Hojas";
	public:
		Bulbasaur(string nombre_, string apellido_, string tipo_){
			nombre = nombre_;
			apellido = apellido_;
			tipo = tipo_;
		}
		int Ataque_1(Pokemon x){
			if(x.getTipo() == "Fuego"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 15;
			}
			else{
				return 30;
			}
		}
		int Ataque_2(Pokemon x){
			if(x.getTipo() == "Fuego"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 20;
			}
			else{
				return 30;
			}
		}
		string getAtaque1(){return ataque1;}
		string getAtaque2(){return ataque2;}
};

class Turtwig : public PokemonPlanta{
	protected:
		string ataque1 = "Lluevehojas";
		string ataque2 = "Planta Feroz";
	public:
		Turtwig(string nombre_, string apellido_, string tipo_){
			nombre = nombre_;
			apellido = apellido_;
			tipo = tipo_;
		}
		int Ataque_1(Pokemon x){
			if(x.getTipo() == "Fuego"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 15;
			}
			else{
				return 30;
			}
		}
		int Ataque_2(Pokemon x){
			if(x.getTipo() == "Fuego"){
				cout<<"El ataque fue poco efectivo."<<endl;
				return 20;
			}
			else{
				return 30;
			}
		}
		string getAtaque1(){return ataque1;}
		string getAtaque2(){return ataque2;}
};

int main() {
string jugador1 = " ";
string jugador2 = " ";
string apellidoPokemon = " ";
int op;
int contador = 1;
Pokemon PokemonJugador1[1];
Pokemon PokemonJugador2[1];
int ataque = 0;

Charmander Char1("Charmander", " ", "Fuego");
Cyndaquil Cynd1("Cyndaquil", " ", "Fuego");
Magikarp Magi1("Magikarp", " ", "Agua");
Piplup Pipl1("Piplup", " ", "Agua");
Bulbasaur Bulb1("Bulbasaur", " ", "Planta");
Turtwig Turt1("Turtwig", " ", "Planta");

Charmander Char2("Charmander", " ", "Fuego");
Cyndaquil Cynd2("Cyndaquil", " ", "Fuego");
Magikarp Magi2("Magikarp", " ", "Agua");
Piplup Pipl2("Piplup", " ", "Agua");
Bulbasaur Bulb2("Bulbasaur", " ", "Planta");
Turtwig Turt2("Turtwig", " ", "Planta");

cout<<"Bienvenido al MUNDO POKEMON!"<<endl;
cout<<"Jugador 1, ingrese su nombre:  "<<endl;
cin>>jugador1;
cout<<"Jugador 2, ingrese su nombre:  "<<endl;
cin>>jugador2;

for(int i = 0; i < 2; i++, contador++){
	
	if(contador % 2 == 0){
		cout<<"Jugador 2, ingresa un apellido para tu pokemon."<<endl;
		cin>>apellidoPokemon;
	}
	else{
		cout<<"Jugador 1, ingresa un apellido para tu pokemon."<<endl;
		cin>>apellidoPokemon;
	}
	
	cout<<"Ahora ingresa el pokemon que quieras utilizar para la batalla. (Cada jugador solo puede seleccionar un Pokemon)"<<endl;
	cout<<"Para seleccionar un pokemon ingrese el numero de opcion del mismo."<<endl;
	cout<<endl;
	cout<<"1. Charmander"<<endl;
	cout<<endl;
	cout<<"2. Cyndaquil"<<endl;
	cout<<endl;
	cout<<"3. Magikarp"<<endl;
	cout<<endl;
	cout<<"4. Piplup"<<endl;
	cout<<endl;
	cout<<"5. Bulbasaur"<<endl;
	cout<<endl;
	cout<<"6. Turtwig"<<endl;
	cout<<endl;
	cin>>op;
	
	switch(op){
	case 1:
		if(contador%2 == 0){
			Char2.setApellido(apellidoPokemon);
			PokemonJugador2[0].setNombre(Char2.getNombre());
			PokemonJugador2[0].setApellido(Char2.getApellido());
			PokemonJugador2[0].setTipo(Char2.getTipo());
		}
		else{
			Char1.setApellido(apellidoPokemon);
			PokemonJugador1[0].setNombre(Char1.getNombre());
			PokemonJugador1[0].setApellido(Char1.getApellido());
			PokemonJugador1[0].setTipo(Char1.getTipo());
		}
		cout<<endl;
		cout<<"Pokemon a sido seleccionado correctamente."<<endl;
		break;
	case 2:
		if(contador%2 == 0){
			Cynd2.setApellido(apellidoPokemon);
			PokemonJugador2[0].setNombre(Cynd2.getNombre());
			PokemonJugador2[0].setApellido(Cynd2.getApellido());
			PokemonJugador2[0].setTipo(Cynd2.getTipo());
		}
		else{
			Cynd1.setApellido(apellidoPokemon);
			PokemonJugador1[0].setNombre(Cynd1.getNombre());
			PokemonJugador1[0].setApellido(Cynd1.getApellido());
			PokemonJugador1[0].setTipo(Cynd1.getTipo());
		}
		cout<<endl;
		cout<<"Pokemon a sido seleccionado correctamente."<<endl;
		break;
	case 3:
		if(contador%2 == 0){
			Magi2.setApellido(apellidoPokemon);
			PokemonJugador2[0].setNombre(Magi2.getNombre());
			PokemonJugador2[0].setApellido(Magi2.getApellido());
			PokemonJugador2[0].setTipo(Magi2.getTipo());
		}
		else{
			Magi1.setApellido(apellidoPokemon);
			PokemonJugador1[0].setNombre(Magi1.getNombre());
			PokemonJugador1[0].setApellido(Magi1.getApellido());
			PokemonJugador1[0].setTipo(Magi1.getTipo());
		}
		cout<<endl;
		cout<<"Pokemon a sido seleccionado correctamente."<<endl;
		break;
	case 4:
		if(contador%2 == 0){
			Pipl2.setApellido(apellidoPokemon);
			PokemonJugador2[0].setNombre(Pipl2.getNombre());
			PokemonJugador2[0].setApellido(Pipl2.getApellido());
			PokemonJugador2[0].setTipo(Pipl2.getTipo());
		}
		else{
			Pipl1.setApellido(apellidoPokemon);
			PokemonJugador1[0].setNombre(Pipl1.getNombre());
			PokemonJugador1[0].setApellido(Pipl1.getApellido());
			PokemonJugador1[0].setTipo(Pipl1.getTipo());
		}
		cout<<endl;
		cout<<"Pokemon a sido seleccionado correctamente."<<endl;
		break;
	case 5:
		if(contador%2 == 0){
			Bulb2.setApellido(apellidoPokemon);
			PokemonJugador2[0].setNombre(Bulb2.getNombre());
			PokemonJugador2[0].setApellido(Bulb2.getApellido());
			PokemonJugador2[0].setTipo(Bulb2.getTipo());
		}
		else{
			Bulb1.setApellido(apellidoPokemon);
			PokemonJugador1[0].setNombre(Bulb1.getNombre());
			PokemonJugador1[0].setApellido(Bulb1.getApellido());
			PokemonJugador1[0].setTipo(Bulb1.getTipo());
		}
		cout<<endl;
		cout<<"Pokemon a sido seleccionado correctamente."<<endl;
		break;
	case 6:
		if(contador%2 == 0){
			Turt2.setApellido(apellidoPokemon);
			PokemonJugador2[0].setNombre(Turt2.getNombre());
			PokemonJugador2[0].setApellido(Turt2.getApellido());
			PokemonJugador2[0].setTipo(Turt2.getTipo());
		}
		else{
			Turt1.setApellido(apellidoPokemon);
			PokemonJugador1[0].setNombre(Turt1.getNombre());
			PokemonJugador1[0].setApellido(Turt1.getApellido());
			PokemonJugador1[0].setTipo(Turt1.getTipo());
		}
		cout<<endl;
		cout<<"Pokemon a sido seleccionado correctamente."<<endl;
		break;
}
}
contador = 0;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"EMPIEZA LA BATALLA!"<<endl;
cout<<endl;
cout<<endl;
cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " VS " <<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<<endl;
cout<<endl;
cout<<endl;
while(true){
	cout<<"El HP de "<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " actual es: "<<PokemonJugador1[0].getHP()<< " ."<<endl;
	cout<<"El HP de "<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " actual es: "<<PokemonJugador2[0].getHP()<< " ."<<endl;
	if(contador % 2 == 0){
		cout<<jugador1<<" selecciona un ataque: "<<endl;
		cout<<endl;
		if(PokemonJugador1[0].getNombre() == "Charmander"){
			
			cout<<"1."<<Char1.getAtaque1()<<endl;
			cout<<"2."<<Char1.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Char1.getAtaque1()<< "."<<endl;
			PokemonJugador2[0].HacerDano(PokemonJugador1[0], Char1.Ataque_1(PokemonJugador2[0]));
			}
			else{
				cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Char1.getAtaque2()<< "."<<endl;
				PokemonJugador2[0].HacerDano(PokemonJugador1[0], Char1.Ataque_2(PokemonJugador2[0]));
			}
		}
		else if(PokemonJugador1[0].getNombre() == "Cyndaquil"){
			
			cout<<"1."<<Cynd1.getAtaque1()<<endl;
			cout<<"2."<<Cynd1.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Cynd1.getAtaque1()<< "."<<endl;
			PokemonJugador2[0].HacerDano(PokemonJugador1[0], Cynd1.Ataque_1(PokemonJugador2[0]));
			}
			else{
				cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Cynd1.getAtaque2()<< "."<<endl;
				PokemonJugador2[0].HacerDano(PokemonJugador1[0], Cynd1.Ataque_2(PokemonJugador2[0]));
			}
		}
		else if(PokemonJugador1[0].getNombre() == "Magikarp"){
			
			cout<<"1."<<Magi1.getAtaque1()<<endl;
			cout<<"2."<<Magi1.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Magi1.getAtaque1()<< "."<<endl;
			PokemonJugador2[0].HacerDano(PokemonJugador1[0], Magi1.Ataque_1(PokemonJugador2[0]));
			}
			else{
				cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Magi1.getAtaque2()<< "."<<endl;
				PokemonJugador2[0].HacerDano(PokemonJugador1[0], Magi1.Ataque_2(PokemonJugador2[0]));
			}
		}
		else if(PokemonJugador1[0].getNombre() == "Piplup"){
			
			cout<<"1."<<Pipl1.getAtaque1()<<endl;
			cout<<"2."<<Pipl1.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Pipl1.getAtaque1()<< "."<<endl;
			PokemonJugador2[0].HacerDano(PokemonJugador1[0], Pipl1.Ataque_1(PokemonJugador2[0]));
			}
			else{
				cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Pipl1.getAtaque2()<< "."<<endl;
				PokemonJugador2[0].HacerDano(PokemonJugador1[0], Pipl1.Ataque_2(PokemonJugador2[0]));
			}
		}
		else if(PokemonJugador1[0].getNombre() == "Bulbasaur"){
			
			cout<<"1."<<Bulb1.getAtaque1()<<endl;
			cout<<"2."<<Bulb1.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Bulb1.getAtaque1()<< "."<<endl;
			PokemonJugador2[0].HacerDano(PokemonJugador1[0], Bulb1.Ataque_1(PokemonJugador2[0]));
			}
			else{
				cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Bulb1.getAtaque2()<< "."<<endl;
				PokemonJugador2[0].HacerDano(PokemonJugador1[0], Bulb1.Ataque_2(PokemonJugador2[0]));
			}
		}
		else if(PokemonJugador1[0].getNombre() == "Turtwig"){
			
			cout<<"1."<<Turt1.getAtaque1()<<endl;
			cout<<"2."<<Turt1.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Turt1.getAtaque1()<< "."<<endl;
			PokemonJugador2[0].HacerDano(PokemonJugador1[0], Turt1.Ataque_1(PokemonJugador2[0]));
			}
			else{
				cout<<PokemonJugador1[0].getNombre()<< " " <<PokemonJugador1[0].getApellido()<< " uso "<<Turt1.getAtaque2()<< "."<<endl;
				PokemonJugador2[0].HacerDano(PokemonJugador1[0], Turt1.Ataque_2(PokemonJugador2[0]));
			}
		}
	}
	else{
		cout<<jugador2<<" selecciona un ataque."<<endl;
		cout<<endl;
		
		if(PokemonJugador2[0].getNombre() == "Charmander"){
			
			cout<<"1."<<Char2.getAtaque1()<<endl;
			cout<<"2."<<Char2.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Char2.getAtaque1()<< "."<<endl;
			PokemonJugador1[0].HacerDano(PokemonJugador2[0], Char2.Ataque_1(PokemonJugador1[0]));
			}
			else{
				cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Char2.getAtaque2()<< "."<<endl;
				PokemonJugador1[0].HacerDano(PokemonJugador2[0], Char2.Ataque_2(PokemonJugador1[0]));
			}
		}
		else if(PokemonJugador2[0].getNombre() == "Cyndaquil"){
			
			cout<<"1."<<Cynd2.getAtaque1()<<endl;
			cout<<"2."<<Cynd2.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Cynd2.getAtaque1()<< "."<<endl;
			PokemonJugador1[0].HacerDano(PokemonJugador2[0], Cynd2.Ataque_1(PokemonJugador1[0]));
			}
			else{
				cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Cynd2.getAtaque2()<< "."<<endl;
				PokemonJugador1[0].HacerDano(PokemonJugador2[0], Cynd2.Ataque_2(PokemonJugador1[0]));
			}
		}
		else if(PokemonJugador2[0].getNombre() == "Magikarp"){
			
			cout<<"1."<<Magi2.getAtaque1()<<endl;
			cout<<"2."<<Magi2.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Magi2.getAtaque1()<< "."<<endl;
			PokemonJugador1[0].HacerDano(PokemonJugador2[0], Magi2.Ataque_1(PokemonJugador1[0]));
			}
			else{
				cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Magi2.getAtaque2()<< "."<<endl;
				PokemonJugador1[0].HacerDano(PokemonJugador2[0], Magi2.Ataque_2(PokemonJugador1[0]));
			}
		}
		else if(PokemonJugador2[0].getNombre() == "Piplup"){
			
			cout<<"1."<<Pipl2.getAtaque1()<<endl;
			cout<<"2."<<Pipl2.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Pipl2.getAtaque1()<< "."<<endl;
			PokemonJugador1[0].HacerDano(PokemonJugador2[0], Pipl2.Ataque_1(PokemonJugador1[0]));
			}
			else{
				cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Pipl2.getAtaque2()<< "."<<endl;
				PokemonJugador1[0].HacerDano(PokemonJugador2[0], Pipl2.Ataque_2(PokemonJugador1[0]));
			}
		}
		else if(PokemonJugador2[0].getNombre() == "Bulbasaur"){
			
			cout<<"1."<<Bulb2.getAtaque1()<<endl;
			cout<<"2."<<Bulb2.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Bulb2.getAtaque1()<< "."<<endl;
			PokemonJugador1[0].HacerDano(PokemonJugador2[0], Bulb2.Ataque_1(PokemonJugador1[0]));
			}
			else{
				cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Bulb2.getAtaque2()<< "."<<endl;
				PokemonJugador1[0].HacerDano(PokemonJugador2[0], Bulb2.Ataque_2(PokemonJugador1[0]));
			}
		}
		else if(PokemonJugador2[0].getNombre() == "Turtwig"){
			
			cout<<"1."<<Turt2.getAtaque1()<<endl;
			cout<<"2."<<Turt2.getAtaque2()<<endl;
			cin>>ataque;
			
			if(ataque == 1){
			cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Turt2.getAtaque1()<< "."<<endl;
			PokemonJugador1[0].HacerDano(PokemonJugador2[0], Turt2.Ataque_1(PokemonJugador1[0]));
			}
			else{
				cout<<PokemonJugador2[0].getNombre()<< " " <<PokemonJugador2[0].getApellido()<< " uso "<<Turt2.getAtaque2()<< "."<<endl;
				PokemonJugador1[0].HacerDano(PokemonJugador2[0], Turt2.Ataque_2(PokemonJugador1[0]));
			}
		}
	}
	contador++;
	if (PokemonJugador1[0].getEstado() == "Fuera de combate"|| PokemonJugador2[0].getEstado() == "Fuera de combate"){
		break;
	}
	cout<<endl;
}
if (PokemonJugador1[0].getEstado() == "Fuera de combate"){
	cout<<"Fin del combate"<<endl;
	cout<<endl;
	cout<<"El ganador es "<<jugador2<<" !!"<<endl;
}
else{
	cout<<"Fin del combate"<<endl;
	cout<<"El ganador es "<<jugador1<<" !!"<<endl;
}
}
