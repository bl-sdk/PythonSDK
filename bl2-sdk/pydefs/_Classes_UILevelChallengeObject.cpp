#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILevelChallengeObject()
{
    py::class_< UILevelChallengeObject,  UInterface   >("UILevelChallengeObject")
        .def("StaticClass", &UILevelChallengeObject::StaticClass, py::return_value_policy::reference)
        .def("SetOverrideProgressNumber", &UILevelChallengeObject::SetOverrideProgressNumber)
        .def("SetOverrideAssociatedChallenge", &UILevelChallengeObject::SetOverrideAssociatedChallenge)
        .def("GetProgressNumber", &UILevelChallengeObject::GetProgressNumber)
        .def("GetAssociatedChallenge", &UILevelChallengeObject::GetAssociatedChallenge, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}