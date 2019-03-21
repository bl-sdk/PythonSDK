#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassModPartDefinition()
{
    py::class_< UClassModPartDefinition,  UEquipableItemPartDefinition   >("UClassModPartDefinition")
        .def("StaticClass", &UClassModPartDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}