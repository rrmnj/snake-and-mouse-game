// Underground.cpp: implementation of the Underground class 
//////////////////////////////////////////////////////////////////////

#include "Underground.h"

//////////////////////////////////////////////////////////////////////

Hole::Hole()
{} 
 Hole::Hole(int x, int y) {
	symbol_ = HOLE;	
	x_ = x;
	y_ = y;
}
int Hole::get_x() const {
	return x_; 
}
int Hole::get_y() const {
	return y_;
}
char Hole::get_symbol() const {
	return symbol_;
}
bool Hole::is_at_position(int x, int y) {
	return (x_ == x) && (y_ == y);
}

static const int MAXHOLES(3); //number of holes in underground
const Hole h(4, 2);
const Hole h2(4, 1);
const Hole h3(4, 2);
Underground::Underground() : holes_{h,h2,h3}

{	
}
Hole Underground::get_hole_no(int no) const {
	assert (is_valid_hole_number(no));	//precondition: valid hole number
	return holes_.at(no);
}
/*void Underground::set_hole_no_at_position(int no, int x, int y) {
	assert (is_valid_hole_number(no));	//precondition: valid hole number
	Hole h(4, 2)
		switch (no) {
		case 0: holes_.at(0) = h; break;
		case 1: holes_.at(1) = h; break;
		case 2: holes_.at(2) = h; break;
		}*/

bool Underground::is_valid_hole_number(int no) const {
	return (no >= 0) && (no < holes_.size()); 
}
