#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DamageSurfaceTypeSwitch(py::module &m)
{
    py::class_< UBehavior_DamageSurfaceTypeSwitch,  UBehaviorBase   >(m, "UBehavior_DamageSurfaceTypeSwitch")
		.def_static("StaticClass", &UBehavior_DamageSurfaceTypeSwitch::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DamageSurfaceType", &UBehavior_DamageSurfaceTypeSwitch::DamageSurfaceType)
        .def("ApplyBehaviorToContext", &UBehavior_DamageSurfaceTypeSwitch::ApplyBehaviorToContext)
          ;
}