#include "transistor.h"
#include <string>

Transistor::Transistor(string alias, string source, string drain, string gate, string bulk, string type, double diff_width, int fingers, double gate_lenght, int stack){
		Transistor::alias = alias;
		Transistor::source = source;
		Transistor::drain = drain;
		Transistor::gate = gate;
		Transistor::bulk = bulk;
		Transistor::type = type;
		Transistor::diff_width = diff_width;
		Transistor::fingers = fingers;
		Transistor::gate_lenght = gate_lenght;
		Transistor::stack = stack;

}

void Transistor::set_alias(string alias){

}

void Transistor::set_source(string source){

}

void Transistor::set_drain(string drain){

}

void Transistor::set_gate(string gate){

}

void Transistor::set_bulk(string bulk){

}

void Transistor::set_type(string type){

}

void Transistor::set_diff_width(double width){

}

void Transistor::set_fingers(int fingers){

}

void Transistor::set_gate_lenght(double gate_lenght){

}

void Transistor::set_stack(int stack){

}


string Transistor::get_alias( ){
return Transistor::alias;
}

string Transistor::get_source( ){
return Transistor::source;
}

string Transistor::get_drain( ){
return Transistor::drain;
}

string Transistor::get_gate( ){
return Transistor::gate;
}

string Transistor::get_bulk( ){

}

string Transistor::get_type( ){

}

double Transistor::get_diff_width( ){

}

int Transistor::get_fingers( ){

}

double Transistor::get_gate_lenght( ){

}

int Transistor::get_stack( ){

}
