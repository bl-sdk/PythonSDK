#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArtifactDefinition()
{
    py::class_< UArtifactDefinition,  UEquipableItemDefinition   >("UArtifactDefinition")
        .def("StaticClass", &UArtifactDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetEquipmentLocation", &UArtifactDefinition::GetEquipmentLocation)
        .staticmethod("StaticClass")
  ;
}