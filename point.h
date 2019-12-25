#ifndef point_h
#define point_h

#include <iostream>

/**
 * \class Point
 * \brief Représente un point de coordonnées réelles, et ces méthodes associées.
 */
class Point{

	private:
	double x; /*!< Coordonnée x du point*/
	double y; /*!< Coordonnée y du point*/


	public:
	/**
	 * \brief Constructeur de base classe Point
	 */
	Point();

	/**
	 * \brief Constructeur valué de la classe Point
	 *
	 * \param x Le paramètre x du point créé
	 * \param y Le paramètre y du point créé
	 */
	Point(double ax,double ay);

	/**
	 * \brief Envoie de l'attribut x
	 *
	 * \return La valeur de la coordonnée x
	 */
	double get_x() const;


	/**
	 * \brief Envoie de l'attribut y
	 *
	 * \return La valeur de la coordonnée y
	 */
	double get_y() const;

	/**
	 * \brief Destructeur de la classe Point
	 */
	virtual ~Point();

};

/**
* \brief Calcule la distance avec un autre point
*
* \param a Un point
*
* \return Distance entre le point en argument et le point courant
*/
double distance(Point & A,Point & B);


#endif
