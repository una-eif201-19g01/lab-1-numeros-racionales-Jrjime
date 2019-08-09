/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
 *
 *    Description:  Numeros Racionales
 *
 *        Created:  2019-08-08
 *
 *         Author:  Rafael Jiménez Arce jrjimearce@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "Racional.h"
#include <iostream>


int main() {
	
	Racional fraccionA(20, 8);
	Racional fraccionB(10, 4);
	Racional fraccionAux;

	std::cout << "\nTutorial -Números Racionales-\n" << std::endl;

	std::cout << "SIMPLIFICACIÓN de Fracción A: " << fraccionA.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionA);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << std::endl;

	std::cout << "SIMPLIFICACIÓN de Fracción B: " << fraccionB.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionB.obtenerString() << std::endl;

	std::cout << "\nSUMAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.sumFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;
	
	std::cout << "\nRESTAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.resFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " - " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nMULTIPLICAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.multFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " * " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;


	std::cout << "\nDIVIDIR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.diviFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " / " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;


	std::cout << "\nELEVAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.elevFraccion();
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " ^2 " <<std::endl;

	




	return 0;
}