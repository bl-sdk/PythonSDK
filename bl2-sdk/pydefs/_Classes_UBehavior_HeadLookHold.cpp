#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_HeadLookHold(py::module &m)
{
    py::class_< UBehavior_HeadLookHold,  UBehaviorBase   >(m, "UBehavior_HeadLookHold")
		.def_static("StaticClass", &UBehavior_HeadLookHold::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Reason", &UBehavior_HeadLookHold::Reason)
        .def_readwrite("Action", &UBehavior_HeadLookHold::Action)
        .def("ApplyBehaviorToContext", &UBehavior_HeadLookHold::ApplyBehaviorToContext)
          ;
}