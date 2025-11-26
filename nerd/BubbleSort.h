#pragma once
#include <vector>
#include <list>
#include <map>
#include <SFML/Graphics.hpp>
#include <type_traits>
#include <concepts>
#include <functional>
namespace MySolution
{	template<std::derived_from<sf::Shape> C>
	class BubbleSort
	{
	public:
		
		void addObjects(std::vector<C*>obj);
		void addObjects(std::list<C*> obj);
		void remove(std::size_t);
		void removeMany(std::initializer_list<std::size_t>);

		~BubbleSort<C>() = default;
		BubbleSort<C>() = default;
	    
		C operator+(const C& other);
		

		
	private:
		std::vector<const C*> algorithmResult;
		void sort();
		

	};
}


enum class AlgorithmState
{
	NOT_SWAPPED = -1,
	DEFAULT_STATE = 0,
	SWAPPED = 1,
};