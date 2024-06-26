/* ****************************************************************** **
**    OpenSees - Open System for Earthquake Engineering Simulation    **
**          Pacific Earthquake Engineering Research Center            **
**                                                                    **
**                                                                    **
** (C) Copyright 1999, The Regents of the University of California    **
** All Rights Reserved.                                               **
**                                                                    **
** Commercial use of this program without express permission of the   **
** University of California, Berkeley, is strictly prohibited.  See   **
** file 'COPYRIGHT'  in main directory for information on usage and   **
** redistribution,  and for a DISCLAIMER OF ALL WARRANTIES.           **
**                                                                    **
** Developed by:                                                      **
**   Frank McKenna (fmckenna@ce.berkeley.edu)                         **
**   Gregory L. Fenves (fenves@ce.berkeley.edu)                       **
**   Filip C. Filippou (filippou@ce.berkeley.edu)                     **
**                                                                    **
** ****************************************************************** */
                                                                        
// $Revision: 1.0 $
// $Date: 2010/1/8 21:00:00 $
// $Source: /usr/local/cvs/OpenSees/SRC/material/uniaxial/limitState/WrapperLimitCurve.cpp,v $

// Written: MRL                                                                         
                                                                        
#ifndef WrapperLimitCurveMaterial_h
#define WrapperLimitCurveMaterial_h

#include <LimitCurve.h>
#include <Matrix.h>

#include <elementAPI.h>
#include <LimitCurveAPI.h>

class WrapperLimitCurve : public LimitCurve
{
 public:
	// constructors  
	WrapperLimitCurve(const char *functName, limCrvObject *theLimCrv);
	WrapperLimitCurve();

	// destructor
	~WrapperLimitCurve();

	LimitCurve *getCopy (void);

	int checkElementState(double springForce);

	double getDegSlope(void);
	double getResForce(void);
	double getUnbalanceForce(void);
	double findLimit(double input);

	int sendSelf(int commitTag, Channel &theChannel);  
	int recvSelf(int commitTag, Channel &theChannel, 
		FEM_ObjectBroker &theBroker);    
    
	void Print(OPS_Stream &s, int flag =0);

	int revertToStart(void);        
	       
 protected:
  
 private:
	char *funcName;
	limCrvObject *theLimCrv;

	double springForce;
	double Kdeg;
	double Fres;
	double DR;
};

#endif




