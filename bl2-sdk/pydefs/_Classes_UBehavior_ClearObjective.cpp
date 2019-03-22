#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ClearObjective(py::module &m)
{
    py::class_< UBehavior_ClearObjective,  UBehaviorBase   >(m, "UBehavior_ClearObjective")
        .def_readwrite("ObjectiveToClear", &UBehavior_ClearObjective::ObjectiveToClear)
        .def("ApplyBehaviorToContext", &UBehavior_ClearObjective::ApplyBehaviorToContext)
          ;
}