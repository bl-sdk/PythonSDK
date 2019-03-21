#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FollowAllegiance()
{
    py::class_< UBehavior_FollowAllegiance,  UBehaviorBase   >("UBehavior_FollowAllegiance")
        .def_readwrite("Action", &UBehavior_FollowAllegiance::Action)
        .def_readwrite("AllegianceParent", &UBehavior_FollowAllegiance::AllegianceParent)
        .def("StaticClass", &UBehavior_FollowAllegiance::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_FollowAllegiance::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}