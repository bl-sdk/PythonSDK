#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeAllegiance()
{
    py::class_< UBehavior_ChangeAllegiance,  UBehaviorBase   >("UBehavior_ChangeAllegiance")
        .def_readwrite("Allegiance", &UBehavior_ChangeAllegiance::Allegiance)
        .def("StaticClass", &UBehavior_ChangeAllegiance::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeAllegiance::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}