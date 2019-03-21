#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DiscoverLevelChallengeObject()
{
    class_< UBehavior_DiscoverLevelChallengeObject, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DiscoverLevelChallengeObject", no_init)
        .def_readwrite("UnlockForPlayer", &UBehavior_DiscoverLevelChallengeObject::UnlockForPlayer)
        .def("StaticClass", &UBehavior_DiscoverLevelChallengeObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DiscoverLevelChallengeObject::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}