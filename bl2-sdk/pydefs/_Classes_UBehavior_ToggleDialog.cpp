#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleDialog(py::module &m)
{
    py::class_< UBehavior_ToggleDialog,  UBehaviorBase   >(m, "UBehavior_ToggleDialog")
		.def_static("StaticClass", &UBehavior_ToggleDialog::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Option", &UBehavior_ToggleDialog::Option)
        .def("ApplyBehaviorToContext", &UBehavior_ToggleDialog::ApplyBehaviorToContext)
          ;
}