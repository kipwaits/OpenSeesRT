/* ****************************************************************** **
**    Opensees - Open System for Earthquake Engineering Simulation    **
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


// Description: This file contains the class definition for TclBuilder.
// A TclBuilder adds the commands to create the model for the standard
// models that can be generated using the elements released with the g3
// framework. currently these elements include:
//
// What: "@(#) TclBuilder.h, revA"

#ifndef TclBuilder_h
#define TclBuilder_h

#include <ModelBuilder.h>
#include <string>
#include <tcl.h>
#include <g3_api.h>

class SectionForceDeformation;
class SectionRepres;
class NDMaterial;
class CrdTrasnf;
class TaggedObjectStorage;
/*
class YieldSurface_BC;
class YS_Evolution;
class PlasticHardeningMaterial;
class CyclicModel; //!!
class DamageModel;
class FrictionModel;
*/

class TclBuilder : public ModelBuilder {
public:
  TclBuilder(Domain &theDomain, int ndm, int ndf);
  ~TclBuilder();

  // eventually make private
  int currentSectionTag = -1;

  int buildFE_Model(void);
  int getNDM(void) const;
  int getNDF(void) const;

  // Section models
  virtual int addSection(SectionForceDeformation &theSection)=0;
  virtual SectionForceDeformation *getSection(int tag)=0;
  virtual int addSectionRepres(SectionRepres &theSectionRepres)=0;
  virtual SectionRepres *getSectionRepres(int tag)=0;

//  virtual int         addCrdTransf(CrdTransf &);
//  virtual int         addCrdTransf(const std::string&, CrdTransf &);
//  virtual CrdTransf *getCrdTransf(int tag);
//  virtual CrdTransf *getCrdTransf(const std::string &);

/*
  virtual int addYieldSurface_BC(YieldSurface_BC &theYS)=0
  virtual YieldSurface_BC *getYieldSurface_BC(int tag)=0;
  virtual int addYS_EvolutionModel(YS_Evolution &theModel)=0;
  virtual YS_Evolution *getYS_EvolutionModel(int tag)=0;
  virtual int addPlasticMaterial(PlasticHardeningMaterial &theMaterial)=0;
  virtual PlasticHardeningMaterial *getPlasticMaterial(int tag)=0;
  virtual int addCyclicModel(CyclicModel &theModel); //!!
  virtual CyclicModel *getCyclicModel(int tag);      //!!
  // Damage models
  virtual int addDamageModel(DamageModel &theModel); //!!
  virtual DamageModel *getDamageModel(int tag);      //!!
  // Friction models
  virtual int            addFrictionModel(FrictionModel &theFrnMdl);
  virtual FrictionModel *getFrictionModel(int tag);
*/
private:
  int ndm; // space dimension of the mesh
  int ndf; // number of degrees of freedom per node

protected:
  Tcl_Interp *theInterp;
};

#endif

