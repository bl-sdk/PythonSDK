#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UILevelChallengeObject()
{
    class_< UILevelChallengeObject, bases< UInterface >  , boost::noncopyable>("UILevelChallengeObject", no_init)
        .def("StaticClass", &UILevelChallengeObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetOverrideProgressNumber", &UILevelChallengeObject::SetOverrideProgressNumber)
        .def("SetOverrideAssociatedChallenge", &UILevelChallengeObject::SetOverrideAssociatedChallenge)
        .def("GetProgressNumber", &UILevelChallengeObject::GetProgressNumber)
        .def("GetAssociatedChallenge", &UILevelChallengeObject::GetAssociatedChallenge, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}