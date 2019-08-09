/*
 * =====================================================================================
 *
 *       Filename:  Racional.h
 *
 *    Description:  Encabezado para definir la plantilla de los n�meros racionales.
 *
 *        Created:  2019-08-08
 *
 *         Author:  Rafael Jim�nez Arce jrjimearce@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef NUMEROSRACIONALES_RACIONAL_H
#define NUMEROSRACIONALES_RACIONAL_H
#include <sstream>


class Racional {

private:
	// Variables
	int numerador, denominador;
	// M�todos
	static int calcularMCD(int num, int den);

public:
	// Constructores
	Racional();
	Racional(int numerador, int denominator);

	// M�todos
	static void simplificarFraccion(Racional& fraccion);
	Racional sumFraccion(Racional fraccion);
	Racional resFraccion(Racional fraccion);
	Racional multFraccion(Racional fraccion);
	Racional diviFraccion(Racional fraccion);
	Racional elevFraccion();
	std::string obtenerString();

	int getNumerador() const;

	void setNumerador(int numerador);

	int getDenominador() const;

	void setDenominador(int denominador);
};


#endif //NUMEROSRACIONALES_RACIONAL_H