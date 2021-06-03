/*
 *
 * Created: 30-05-2021 15:46:02
 *  Author: moham
 */ 
#include <avr/io.h>


class Lys{
	
public:
	
	Lys();
	
	Lys( bool break, bool offBothL);
	
	void setTurnOnBackL(bool break);
	
	void setTurnOnFrontL();
	
	void setTurnOffBothL(bool offBothL);
	
	
	
private:
 
	bool Break_;
	};



//#endif 
