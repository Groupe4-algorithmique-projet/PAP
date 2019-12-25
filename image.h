#ifndef image_h
#define image_h

#include "point.h"
#include <png++/png.hpp>


/**
 * \class image
 * \brief Ce fichier décrit la classe image,manipulation et création des images.
 */

class image{
	private:
		int width;/*!< largeur de l'image .*/
		int height;/*!< longueur de l'image .*/
		png::image<png::rgb_pixel> *Letter; /* l'image de la lettre .*/
	
	public:	
		/**
		 * \brief   Construit une image colorée en blanc de taille w,h
	 	 * \param   w largeur de l'image .
	 	 * \param   h longueur de l'image .
		 * \details On aura w*h pixels .
		 */
		image(int w,int h);

		/**
		 * \brief Destructeur de la classe image
	 	 */
		virtual ~image();

		/**
		 * \brief Assigner une couleur à un pixel .
	 	 * \param i la coordonnée Ox du pixel à modifier.
	 	 * \param j la coordonnée Oy du pixel à modifier .
		 * \param color la nouvelle couleur . 	
		 */
		
		void set_color(int i,int j,int color);

		/**
		 * \brief  Renvoie l'attribut width
		 * \return La valeur de width
		 */
		int get_width() const{
			return width;
		}

		/**
		 * \brief  Renvoie l'attribut height
		 * \return La valeur de height
		 */
		int get_height() const{
			return height;
		}

		/**
		 * \brief  Renvoie l'attribut Letter
		 * \return L'image Letter sous forme d'une matrice 
		 */
		png::image<png::rgb_pixel> * get_Letter() const{
			return Letter;
		}
		
		
		/**
		 * \brief   Créer une lettre
		 * \details Colorer les pixels en partant d'un qui est déjà colorer 			 *          jusqu’à la rencontre d'une autre coloré.
		 * \param   x L'abscisse du point de départ
		 * \param   y L'ordonnée du point de départ
		 */
		void black_fill(int x,int y);

		/**
		 * \brief   Créer un contour rouge autour d'une lettre.
		 * \details Pour chaque pixel noire, on colorie en rouge les deux 			 *          blancs pixels a coté de lui.
		 */
		void red_perimter();

};

#endif
