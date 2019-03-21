#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_OpinionSwitch()
{
    py::class_< UBehavior_OpinionSwitch,  UBehaviorBase   >("UBehavior_OpinionSwitch")
        .def_readwrite("Other", &UBehavior_OpinionSwitch::Other)
        .def("StaticClass", &UBehavior_OpinionSwitch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_OpinionSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}