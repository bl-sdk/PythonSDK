#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetAIFlag(py::module &m)
{
    py::class_< UBehavior_SetAIFlag,  UBehaviorBase   >(m, "UBehavior_SetAIFlag")
		.def_static("StaticClass", &UBehavior_SetAIFlag::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FlagDef", &UBehavior_SetAIFlag::FlagDef)
        .def("ApplyBehaviorToContext", &UBehavior_SetAIFlag::ApplyBehaviorToContext)
          ;
}