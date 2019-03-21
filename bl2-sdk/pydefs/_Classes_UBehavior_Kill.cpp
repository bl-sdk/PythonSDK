#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Kill()
{
    py::class_< UBehavior_Kill,  UBehaviorBase   >("UBehavior_Kill")
        .def_readwrite("DeathType", &UBehavior_Kill::DeathType)
        .def_readwrite("DamageType", &UBehavior_Kill::DamageType)
        .def_readwrite("TargetContext", &UBehavior_Kill::TargetContext)
        .def("StaticClass", &UBehavior_Kill::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_Kill::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}