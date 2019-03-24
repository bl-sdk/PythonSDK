#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILevelChallengeObject(py::module &m)
{
    py::class_< UILevelChallengeObject,  UInterface   >(m, "UILevelChallengeObject")
		.def_static("StaticClass", &UILevelChallengeObject::StaticClass, py::return_value_policy::reference)
        .def("SetOverrideProgressNumber", &UILevelChallengeObject::SetOverrideProgressNumber)
        .def("SetOverrideAssociatedChallenge", &UILevelChallengeObject::SetOverrideAssociatedChallenge)
        .def("GetProgressNumber", &UILevelChallengeObject::GetProgressNumber)
        .def("GetAssociatedChallenge", &UILevelChallengeObject::GetAssociatedChallenge, py::return_value_policy::reference)
          ;
}