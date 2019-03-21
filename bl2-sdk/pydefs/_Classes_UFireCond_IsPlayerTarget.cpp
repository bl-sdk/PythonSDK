#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFireCond_IsPlayerTarget()
{
    py::class_< UFireCond_IsPlayerTarget,  UFiringCondition   >("UFireCond_IsPlayerTarget")
        .def("StaticClass", &UFireCond_IsPlayerTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}