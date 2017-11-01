/** Insert an item at the front of the list
 @param item The item to be inserted
 */
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
	Node* new_item = new Node(item, head);
	head = new_item;
	num_items++;

	// If the tail does not exist then set it to the same as head
	if (tail == NULL) {
		tail = head;
	}

}

/** Insert an item at the end of the list
 @param item The item to be inserted
 */
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item) {
	Node* new_item = new Node(item);

	// If list is empty does this
	if (tail == NULL) {
		head = new_item;
		tail = head;
	} else {
		tail->next = new_item;
		tail = new_item;
	}
	num_items++;
}

/** Remove the front item of the list */
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
	Node* temp = head;
	if (head != NULL) {
		head = head->next;
		if (head == NULL) {
			tail = NULL;
		}
		delete temp;
		num_items--;
	}
}

/** Remove the last item of the list */
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {

	if (head != NULL) {
		Node* temp = head;

		if (temp == tail) {
			head = tail = NULL;
			delete temp;
			num_items--;
		} else {
			while (temp->next != tail) {
				temp = temp->next;
			}
			Node* last_item = temp->next;
			temp->next = NULL;
			tail = temp;

			delete last_item;

			num_items--;
		}
	}
}

/** Return a reference to the front item of the list
 @return A reference to the fron item of the list
 */
template <typename Item_Type>
Item_Type& Single_Linked_List<Item_Type>::front() {
	if (head == NULL ) {
		throw std::out_of_range("list does not exist");
	}
	return head->data;
}

/** Return a const reference to the front item of the list
 @return A const reference to the front item of the list
 */
template <typename Item_Type>
const Item_Type& Single_Linked_List<Item_Type>::front() const {
	if (head == NULL ) {
		throw std::out_of_range("list does not exist");
	}
	return head->data;
}

/** Return a reference to the back item of the list
 @return A reference to the back item of the list
 */
template <typename Item_Type>
Item_Type& Single_Linked_List<Item_Type>::back() {
	if (tail == NULL ) {
		throw std::out_of_range("list does not exist");
	}
	return tail->data;
}

/** Return a const reference to the back item of the list
 @return A const reference to the back item of the list
 */
template <typename Item_Type>
const Item_Type& Single_Linked_List<Item_Type>::back() const {
	if (tail == NULL ) {
		throw std::out_of_range("list does not exist");
	}
	return tail->data;
}


/** Insert item at position index (starting at 0).  Insert
 at the end of index is beyond the end of the list.
 @param index The poisition to insert the item
 @param item The item to be inserted
 */
template <typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {

	Node* iter = head;
	Node* new_item = new Node(item);

	if(head == NULL || index == 0){
		push_front(item);
	}else{
		if(index >= num_items){
			push_back(item);
		}else{
			for(int i = 0; i < index-1; i++){
				iter = iter->next;
			}
			new_item->next = iter->next;
			iter->next = new_item;
			num_items++;
		}
	}
}

/** Return a reference to the item at position index
 @param index The index of the item
 @return A reference to the item at index
 */
template <typename Item_Type>
Item_Type& Single_Linked_List<Item_Type>::get(size_t index) {

	if(index >= num_items) {
		throw std::out_of_range("index out of range error");
	}
	Node* iter = head;
	for(int i = 0; i < index; i++){
		iter = iter->next;
	}
	return iter->data;
}

/** Return a const reference to the item at position index
 @param index The index of the item
 @return A const reference to the item at index
 */
template <typename Item_Type>
const Item_Type& Single_Linked_List<Item_Type>::get(size_t index) const {

	if(index >= num_items) {
		throw std::out_of_range("index out of range error");
	}
	Node* iter = head;
	for(int i = 0; i < index; i++){
		iter = iter->next;
	}
	return iter->data;
}

/** Remove the item at position index.
 @return true if the removal is sucessful; false if index is
 beyond the end of the list
 */
template <typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
	Node* iter = head;

		if(head == NULL){
			return false;
		}else{
			if(index >= num_items){
				return false;
			}else{
				for(int i = 0; i < index-1; i++){
					iter = iter->next;
				}
				Node* temp = iter->next;
				iter->next = iter->next->next;
				delete temp;
				num_items--;
				return true;
			}
		}
}

/** Return the position of the first occurence of item.
 @return The position of the first occurence of the item. Return
 the size of the list if it is not found
 */
template <typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) {

	Node* iter = head;
	size_t count = 0;
	while(iter != NULL) {

		if(iter->data == item){
			break;
		}
		iter = iter->next;
		count++;
	}
	return count;
}

