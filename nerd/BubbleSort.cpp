#include "BubbleSort.h"
#include <algorithm>
using namespace MySolution;



template<std::derived_from<sf::Shape> C>
void BubbleSort<C>::addObjects(std::list<C*>obj)
{
	for (auto o : obj)
		algorithmResult.push_back(o);
}

template<std::derived_from<sf::Shape> C>
void BubbleSort<C>::addObjects(std::vector<C*>obj)
{
	algorithmResult += obj;
}

template<std::derived_from<sf::Shape> C>
void BubbleSort<C>::sort()
{
	if (!this->algorithmResult.empty())
	{		
		AlgorithmState state = AlgorithmState::DEFAULT_STATE;

		using itr = std::vector<const C*>::const_iterator;
		itr item, next;
		
		auto end = algorithmResult.end();

		while (state != AlgorithmState::SWAPPED)
		{
			state = AlgorithmState::DEFAULT_STATE;
			item = algorithmResult.begin();
			next = std::next(item);
			while (next != end)
			{
				
				if (**item > **next)
				{
					std::swap(*item, *next);
					state = AlgorithmState::NOT_SWAPPED;
				}
				
				item = next;
				next = std::next(item);
				

			}

			if (state != AlgorithmState::NOT_SWAPPED)
				state = AlgorithmState::SWAPPED;

			--end;
		}
	}
}
template<std::derived_from<sf::Shape> C>
C BubbleSort<C>::operator+(const C& other)
{
	algorithmResult.push_back(&other);
}

template<std::derived_from<sf::Shape> C>
void BubbleSort<C>::remove(std::size_t index)
{
	if (auto search = this->algorithmResult.find(index); search != this->algorithmResult.end())
		this->algorithmResult.erase(search);
}

template<std::derived_from<sf::Shape> C>
void BubbleSort<C>::removeMany(std::initializer_list<std::size_t> indices)
{
	for (auto i : indices)
	{
		if (auto search = this->algorithmResult.find(i); search != this->algorithmResult.end())
			this->algorithmResult.erase(search);
	}
}



