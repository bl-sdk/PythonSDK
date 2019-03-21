#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Charm()
{
    py::class_< UBehavior_Charm,  UBehaviorBase   >("UBehavior_Charm")
        .def_readwrite("Action", &UBehavior_Charm::Action)
        .def_readwrite("CharmOwner", &UBehavior_Charm::CharmOwner)
        .def("StaticClass", &UBehavior_Charm::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_Charm::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}