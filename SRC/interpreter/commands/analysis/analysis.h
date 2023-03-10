/* ****************************************************************** **
**    OpenSees - Open System for Earthquake Engineering Simulation    **
**          Pacific Earthquake Engineering Research Center            **
** ****************************************************************** */
//
//
class G3_Runtime;

void *OPS_NewtonRaphsonAlgorithm(G3_Runtime*);
void *OPS_ExpressNewton(G3_Runtime*);
void *OPS_ModifiedNewton(G3_Runtime*);
void *OPS_NewtonHallM(G3_Runtime*);

void *OPS_Newmark(G3_Runtime*);
void *OPS_StagedNewmark(G3_Runtime*);
void *OPS_GimmeMCK(G3_Runtime*);
void *OPS_AlphaOS(G3_Runtime*);
void *OPS_AlphaOS_TP(G3_Runtime*);
void *OPS_AlphaOSGeneralized(G3_Runtime*);
void *OPS_AlphaOSGeneralized_TP(G3_Runtime*);
void *OPS_ExplicitDifference(G3_Runtime*);
void *OPS_CentralDifference(G3_Runtime*);
void *OPS_CentralDifferenceAlternative(G3_Runtime*);
void *OPS_CentralDifferenceNoDamping(G3_Runtime*);
void *OPS_Collocation(G3_Runtime*);
void *OPS_CollocationHSFixedNumIter(G3_Runtime*);
void *OPS_CollocationHSIncrLimit(G3_Runtime*);
void *OPS_CollocationHSIncrReduct(G3_Runtime*);
void *OPS_GeneralizedAlpha(G3_Runtime*);
void *OPS_HHT(G3_Runtime*);
void *OPS_HHT_TP(G3_Runtime*);
void *OPS_HHTExplicit(G3_Runtime*);
void *OPS_HHTExplicit_TP(G3_Runtime*);
void *OPS_HHTGeneralized(G3_Runtime*);
void *OPS_HHTGeneralized_TP(G3_Runtime*);
void *OPS_HHTGeneralizedExplicit(G3_Runtime*);
void *OPS_HHTGeneralizedExplicit_TP(G3_Runtime*);
void *OPS_HHTHSFixedNumIter(G3_Runtime*);
void *OPS_HHTHSFixedNumIter_TP(G3_Runtime*);
void *OPS_HHTHSIncrLimit(G3_Runtime*);
void *OPS_HHTHSIncrLimit_TP(G3_Runtime*);
void *OPS_HHTHSIncrReduct(G3_Runtime*);
void *OPS_HHTHSIncrReduct_TP(G3_Runtime*);
void *OPS_KRAlphaExplicit(G3_Runtime*);
void *OPS_KRAlphaExplicit_TP(G3_Runtime*);
void *OPS_NewmarkExplicit(G3_Runtime*);
void *OPS_NewmarkHSFixedNumIter(G3_Runtime*);
void *OPS_NewmarkHSIncrLimit(G3_Runtime*);
void *OPS_NewmarkHSIncrReduct(G3_Runtime*);
void *OPS_WilsonTheta(G3_Runtime*);
