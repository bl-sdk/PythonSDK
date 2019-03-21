#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetChallengeCompleted()
{
    class_< USeqAct_SetChallengeCompleted, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetChallengeCompleted", no_init)
        .def_readwrite("ChallengeDef", &USeqAct_SetChallengeCompleted::ChallengeDef)
        .def("StaticClass", &USeqAct_SetChallengeCompleted::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}