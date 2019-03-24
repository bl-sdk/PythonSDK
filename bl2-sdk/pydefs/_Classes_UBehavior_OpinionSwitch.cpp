#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_OpinionSwitch(py::module &m)
{
    py::class_< UBehavior_OpinionSwitch,  UBehaviorBase   >(m, "UBehavior_OpinionSwitch")
		.def_static("StaticClass", &UBehavior_OpinionSwitch::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Other", &UBehavior_OpinionSwitch::Other)
        .def("ApplyBehaviorToContext", &UBehavior_OpinionSwitch::ApplyBehaviorToContext)
          ;
}