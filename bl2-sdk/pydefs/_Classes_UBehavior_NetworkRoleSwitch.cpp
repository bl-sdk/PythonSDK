#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_NetworkRoleSwitch(py::module &m)
{
    py::class_< UBehavior_NetworkRoleSwitch,  UBehaviorBase   >(m, "UBehavior_NetworkRoleSwitch")
		.def_static("StaticClass", &UBehavior_NetworkRoleSwitch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_NetworkRoleSwitch::ApplyBehaviorToContext)
          ;
}