#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_NetworkRoleSwitch()
{
    py::class_< UBehavior_NetworkRoleSwitch,  UBehaviorBase   >("UBehavior_NetworkRoleSwitch")
        .def("StaticClass", &UBehavior_NetworkRoleSwitch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_NetworkRoleSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}