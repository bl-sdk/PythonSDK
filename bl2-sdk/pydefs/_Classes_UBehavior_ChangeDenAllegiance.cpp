#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeDenAllegiance()
{
    py::class_< UBehavior_ChangeDenAllegiance,  UBehaviorBase   >("UBehavior_ChangeDenAllegiance")
        .def_readwrite("Allegiance", &UBehavior_ChangeDenAllegiance::Allegiance)
        .def("StaticClass", &UBehavior_ChangeDenAllegiance::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeDenAllegiance::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}