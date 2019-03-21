#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_HeadLookHold()
{
    py::class_< UBehavior_HeadLookHold,  UBehaviorBase   >("UBehavior_HeadLookHold")
        .def_readwrite("Reason", &UBehavior_HeadLookHold::Reason)
        .def_readwrite("Action", &UBehavior_HeadLookHold::Action)
        .def("StaticClass", &UBehavior_HeadLookHold::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_HeadLookHold::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}