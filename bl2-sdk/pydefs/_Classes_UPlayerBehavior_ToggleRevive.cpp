#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ToggleRevive(py::module &m)
{
    py::class_< UPlayerBehavior_ToggleRevive,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_ToggleRevive")
		.def_static("StaticClass", &UPlayerBehavior_ToggleRevive::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ToggleRevive::ApplyBehaviorToContext)
          ;
}