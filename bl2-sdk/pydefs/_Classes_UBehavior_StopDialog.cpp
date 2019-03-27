#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StopDialog(py::module &m)
{
    py::class_< UBehavior_StopDialog,  UBehaviorBase   >(m, "UBehavior_StopDialog")
		.def_static("StaticClass", &UBehavior_StopDialog::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventTag", &UBehavior_StopDialog::EventTag)
        .def("ApplyBehaviorToContext", &UBehavior_StopDialog::ApplyBehaviorToContext)
          ;
}