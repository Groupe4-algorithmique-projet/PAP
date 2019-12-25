#ifndef GLYPHE_H_
#define GLYPHE_H_

#include "point.h"



/**
 * \class Glyphe
 * \brief Représente un glyphe et les opérations pour le manipuler
 */
class Glyphe {
private:
	Point points[3]; /*!< L'ensemble de trois points définissant le glyphe */
public:
	/**
	 * \brief Constructeur de base classe Glyphe
	 */
	Glyphe();

	/**
	 * \brief         Constructeur valué de la classe Glyphe
	 * \param begin   Le point à l’extrémité de la courbe .
	 * \param control Le point de contrôle de la courbe de Bézier
	 * \param arrive  Le point à l’extrémité de la courbe .
	 */
	Glyphe(Point& begin,Point& control,Point& arrive);

	/**
	 * \brief Destructeur de la classe Glyphe
	 */
	virtual ~Glyphe();

	/**
	 * \brief Renvoie de l'attribut points
	 *
	 * \return Les trois points de contrôles
	 */
	const Point* getPoints() const{
		return points;
	}

	/**
	 * \brief Teste si le point de contrôle est une extrémité
	 * \details vérifie si les distances entres les 3 points consécutifs est petite.
	 */
	int test();

};


#endif
