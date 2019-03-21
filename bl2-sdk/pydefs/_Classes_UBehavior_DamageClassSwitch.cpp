#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DamageClassSwitch()
{
    py::class_< UBehavior_DamageClassSwitch,  UBehaviorBase   >("UBehavior_DamageClassSwitch")
        .def_readwrite("HitObject", &UBehavior_DamageClassSwitch::HitObject)
        .def("StaticClass", &UBehavior_DamageClassSwitch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DamageClassSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}