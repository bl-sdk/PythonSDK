#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldPartDefinition()
{
    py::class_< UShieldPartDefinition,  UEquipableItemPartDefinition   >("UShieldPartDefinition")
        .def("StaticClass", &UShieldPartDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}