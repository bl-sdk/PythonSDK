#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleNPCAlly(py::module &m)
{
    py::class_< UBehavior_ToggleNPCAlly,  UBehaviorBase   >(m, "UBehavior_ToggleNPCAlly")
        .def("ApplyBehaviorToContext", &UBehavior_ToggleNPCAlly::ApplyBehaviorToContext)
          ;
}