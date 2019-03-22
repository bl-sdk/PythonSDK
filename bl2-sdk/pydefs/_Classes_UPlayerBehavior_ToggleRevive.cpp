#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ToggleRevive(py::module &m)
{
    py::class_< UPlayerBehavior_ToggleRevive,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_ToggleRevive")
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ToggleRevive::ApplyBehaviorToContext)
          ;
}