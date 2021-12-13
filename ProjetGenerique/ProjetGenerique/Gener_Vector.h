#pragma once


	template <class T>
	class Gener_Vector
	{
	private:
		T vect[3];
	public:
		Gener_Vector(T x = 0.0, T y = 0.0, T z = 0.0);
		Gener_Vector(const Gener_Vector&) = delete;
		// operateur d'afectation
		Gener_Vector & operator= (const Gener_Vector<T>&) = delete;
		void print() const;
	   T at(unsigned int ) const;//la valeur de chaque indice
	   bool operator==(const Gener_Vector<T> v) const;
	   bool operator!=(const Gener_Vector<T>& v) const;
	  T& operator[](unsigned int);


	};

	template<class T>
       Gener_Vector<T>::Gener_Vector(T x, T y, T z)
	{
		this->vect[0] = x;
		this->vect[1] = y;
		this->vect[2] = z;

	}

	   template<class T>
	   inline void Gener_Vector<T>::print() const
	   {
		   for (T i = 0; i < 3; i++)

		   {
			   cout << "vecteur[" << i << "]=" << this->at(i) << endl;
		   }

	   }

	   template<class T>
	   T Gener_Vector<T>::at(unsigned int i ) const
	   {
		   assert(i >= 0 && i < 3); //debug

		   try { //releas
			   if (i < 0 || i >= 3) throw "rang erre";
			   return this->vect[i];
		   }
		   catch (char* e)
		   {
			   cout << e << endl;
		   }

		   return;
	   }

	   template<class T>
	   bool Gener_Vector<T>::operator==(const Gener_Vector<T> v) const
	   {
		   bool res = true;
		   for (T i = 0; i < 3; i++)
		   {
			   res = res && (this->at(i) == v.at(i));//impossible d'appeler une methode const a interieur d'une autre non const
		   }

		   return false;
	   }

	   template<class T>
	   inline bool Gener_Vector<T>::operator!=(const Gener_Vector<T>& v) const
	   {
		   bool res = !(*this == v);//retourner inverse de resultat de ==

		   return false;
	   }

	   template<class T>
	   inline T& Gener_Vector<T>::operator[](unsigned int)
	   {
		   assert(i >= 0 && i < 3); //debug

		   try { //releas
			   if (i < 0 || i >= 3) throw "rang erre";
			   return this->vect[i];
		   }
		   catch (char* e)
		   {
			   cout << e << endl;
		   }

		   //return ;

	   }

