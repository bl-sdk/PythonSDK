#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFireCond_IsPlayerTarget(py::module &m)
{
    py::class_< UFireCond_IsPlayerTarget,  UFiringCondition   >(m, "UFireCond_IsPlayerTarget")
		.def_static("StaticClass", &UFireCond_IsPlayerTarget::StaticClass, py::return_value_policy::reference)
          ;
}