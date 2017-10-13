/*
 * vector
 *
 *  Created on: Oct 7, 2017
 *      Author: TomWR
 */

#include<cstdlib>
#include<algorithm>
#include<stdexcept>

#ifndef VECTOR_H_
#define VECTOR_H_

namespace KW {
template<typename Item_Type>
class vector {
private:
	static const std::size_t INITIAL_CAPACITY = 10;
	std::size_t current_capacity;
	std::size_t num_items;

	Item_Type* the_data;

public:
	vector<Item_Type>() :
			current_capacity(INITIAL_CAPACITY), num_items(0), the_data(
					new Item_Type[INITIAL_CAPACITY]) {
	}

	// copy constructor
	vector<Item_Type>(const vector<Item_Type>& other) :
			current_capacity(other.current_capacity),
			num_items(
			other.num_items), the_data(
			new Item_Type[other.current_capacity])
			{
				for(size_t i=0; i < num_items; i++)
				{
						the_data[i] = other.the_data[i];
				}
			}

	// destructor
	~vector<Item_Type>()
	{
		delete[] the_data;
	}

	// v2 = v1;
	// v2.=(v1)
	vector<Item_Type> & operator=(const vector<Item_Type>& other)
	{
		vector<Item_Type> the_copy(other);
		swap(the_copy);
		return *this;
	}

	void swap(vector<Item_Type>& other)
	{
		swap(num_items, other.num_items);
		swap(current_capacity, other.current_capacity);
		swap(the_data, other.the_data);
	}

	// vector<Person> v1
	// v1[i] = P;
	// v2[i] = v1[i];
	// v2.[](i) = v1;

	Item_Type& operator[](size_t index) {
		if(index >= num_items)
		{
			throw std::out_of_range("index out of range error");
		}
		return *(the_data + index);
	}


	// v2 = v1.[](i);
	// v2.[](i) = v1.[](i);
	const Item_Type& operator[](size_t index) const
	{
		if(index >= num_items)
		{
			throw std::out_of_range("index out of range error");
		}
		return *(the_data + index);
	}

	void push_back(const Item_Type& the_value)
	{
		if(num_items == current_capacity){
			reserve(2*current_capacity);
		}
		the_data[num_items] = the_value;
		num_items++;
	}

	void reserve(size_t new_capacity)
	{
		if(new_capacity > current_capacity)
		{
			current_capacity = new_capacity;
		}
		Item_Type* new_data = new Item_Type[current_capacity];
		for (int i = i; i < num_items; i++)
		{
			new_data[i] = the_data[i];
			the_data = new_data;
		}
	}

void insert(size_t index, const Item_Type& the_value)
{
	if (num_items == current_capacity)
	{
		reserve(2 * current_capacity);
	}
	for (int i=num_items; i>index; i--)
	{
		the_data[i] = the_data[i-1];
	}
	the_data[index] = the_value;
	num_items++;
}

// CREATE A ERASE FUNCTION - EXISTS BUT GOOD PRACTICE

	};

template<typename Item_Type>
inline void swap(vector<Item_Type>& x, vector<Item_Type>& y)
{
	x.swap(y);
}

}


#endif /* VECTOR_H_ */
