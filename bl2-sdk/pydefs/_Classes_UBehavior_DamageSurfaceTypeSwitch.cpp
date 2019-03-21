#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DamageSurfaceTypeSwitch(py::object m)
{
    py::class_< UBehavior_DamageSurfaceTypeSwitch,  UBehaviorBase   >(m, "UBehavior_DamageSurfaceTypeSwitch")
        .def_readwrite("DamageSurfaceType", &UBehavior_DamageSurfaceTypeSwitch::DamageSurfaceType)
        .def("StaticClass", &UBehavior_DamageSurfaceTypeSwitch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DamageSurfaceTypeSwitch::ApplyBehaviorToContext)
          ;
}