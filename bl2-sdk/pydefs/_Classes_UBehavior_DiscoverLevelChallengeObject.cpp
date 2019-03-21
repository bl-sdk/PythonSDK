#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DiscoverLevelChallengeObject(py::object m)
{
    py::class_< UBehavior_DiscoverLevelChallengeObject,  UBehaviorBase   >(m, "UBehavior_DiscoverLevelChallengeObject")
        .def_readwrite("UnlockForPlayer", &UBehavior_DiscoverLevelChallengeObject::UnlockForPlayer)
        .def("StaticClass", &UBehavior_DiscoverLevelChallengeObject::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DiscoverLevelChallengeObject::ApplyBehaviorToContext)
          ;
}