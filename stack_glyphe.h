
#ifndef stack_glyphe_h_
#define stack_glyphe_h_

#include "glyphe.h"
#include <png++/png.hpp>


/**
 * \class Stack_Glyphe
 *
 * \brief définir une pile des glyphes .
 */


class Stack_Glyphe{
	private:
		int top; /*!< la position du sommet */
		Glyphe *Stack; /*!< tableau des glyphes à dessiner*/
	public:
	
	/**
	 * \brief Constructeur d'une Stack à un élément
	 */
	Stack_Glyphe(int size);

	/**
	 * \brief Renvoie l'attribut top
	 *
	 * \return La position du sommet .
	 */
	Glyphe get_top() const{
		return top;
	}

	/**
	 * \brief Renvoie l'attribut *Stack
	 *
	 * \return Le pointeur vers le premier élément de la pile .
	 */
	Glyphe* get_stack() const{
		return Stack;
	}

	/**
	 * \brief Destructeur de la classe Stack_Glyphe
	 */
	virtual ~Stack_Glyphe();
	
	/**
	 * \brief Ajouter un glyphe au sommet de la pile
	 * \param g Le glyphe à rajouter .
	 */
	void push(Glyphe g);
	
	/**
	 * \brief  Retire le sommet de la pile et le renvoie.
	 * \return Le glyphe au sommet de la pile
	 */
	Glyphe pop();

	/**
	 * \brief   Dessine les glyphes dans une image (matrice)
	 * \details Retire tous les glyphes un à un pour 
	 *	    les projeter sur l'image (matrice)
	 */
	void draw(png::image<png::rgb_pixel> *im);

	/**
	 * \brief Dessine un glyphe dans une image (matrice)
	 * \param g Le glyphe à dessiner
	 * \param m La matrice dans laquelle dessiner
	 */
	void casteljau( Glyphe g , png::image<png::rgb_pixel> *im) const;



};


#endif
