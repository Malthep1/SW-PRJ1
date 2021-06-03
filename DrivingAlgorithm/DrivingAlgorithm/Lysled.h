
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
	bool offbothL_;
	
	};



//#endif 
