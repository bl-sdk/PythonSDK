#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StopDialog()
{
    py::class_< UBehavior_StopDialog,  UBehaviorBase   >("UBehavior_StopDialog")
        .def_readwrite("EventTag", &UBehavior_StopDialog::EventTag)
        .def("StaticClass", &UBehavior_StopDialog::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StopDialog::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}