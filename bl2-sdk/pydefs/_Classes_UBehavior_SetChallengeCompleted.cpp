#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetChallengeCompleted()
{
    class_< UBehavior_SetChallengeCompleted, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetChallengeCompleted", no_init)
        .def_readwrite("UnlockForPlayer", &UBehavior_SetChallengeCompleted::UnlockForPlayer)
        .def_readwrite("ChallengeDef", &UBehavior_SetChallengeCompleted::ChallengeDef)
        .def("StaticClass", &UBehavior_SetChallengeCompleted::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetChallengeCompleted::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}