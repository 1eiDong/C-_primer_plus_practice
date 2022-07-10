#include<iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

int main()
{
	void box_show(box box1);
	void box_volume(box * box_ptr);


	box littlebox = { "Dongfeng", 5,4,3 };
	box* lb_ptr = &littlebox;
	box_volume(lb_ptr);
	box_show(littlebox);
	return 0;
}

void box_show(box box1)
{
	cout << "Box maker: " << box1.maker << endl;
	cout << "Height: " << box1.height << endl;
	cout << "Width: " << box1.width << endl;
	cout << "Length: " << box1.length << endl;
	cout << "Volume: " << box1.volume << endl;
}

void box_volume(box* box_ptr)
{
	box_ptr->volume = box_ptr->height * box_ptr->length * box_ptr->width;
}