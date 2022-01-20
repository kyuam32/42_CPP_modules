
#ifndef INC_11_CPP_MODULE_KAREN_H
#define INC_11_CPP_MODULE_KAREN_H

#include <iostream>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Karen();
	~Karen();
	void complain( std::string level );

};

typedef struct	s_jumptable
{
	std::string status;
	void (Karen::*ptr)(void);
}				t_jumptable;

#endif //INC_11_CPP_MODULE_KAREN_H
