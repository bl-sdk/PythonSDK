#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DiscoverLevelChallengeObject(py::module &m)
{
    py::class_< UBehavior_DiscoverLevelChallengeObject,  UBehaviorBase   >(m, "UBehavior_DiscoverLevelChallengeObject")
		.def_static("StaticClass", &UBehavior_DiscoverLevelChallengeObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("UnlockForPlayer", &UBehavior_DiscoverLevelChallengeObject::UnlockForPlayer)
        .def("ApplyBehaviorToContext", &UBehavior_DiscoverLevelChallengeObject::ApplyBehaviorToContext)
          ;
}