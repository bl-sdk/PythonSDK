#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleDialog()
{
    py::class_< UBehavior_ToggleDialog,  UBehaviorBase   >("UBehavior_ToggleDialog")
        .def_readwrite("Option", &UBehavior_ToggleDialog::Option)
        .def("StaticClass", &UBehavior_ToggleDialog::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ToggleDialog::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}