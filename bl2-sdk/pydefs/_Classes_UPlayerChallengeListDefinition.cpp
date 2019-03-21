#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerChallengeListDefinition()
{
    class_< UPlayerChallengeListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPlayerChallengeListDefinition", no_init)
        .def_readwrite("PlayerChallenges", &UPlayerChallengeListDefinition::PlayerChallenges)
        .def("StaticClass", &UPlayerChallengeListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}