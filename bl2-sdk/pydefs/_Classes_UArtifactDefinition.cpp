#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArtifactDefinition(py::object m)
{
    py::class_< UArtifactDefinition,  UEquipableItemDefinition   >(m, "UArtifactDefinition")
        .def("StaticClass", &UArtifactDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetEquipmentLocation", &UArtifactDefinition::GetEquipmentLocation)
          ;
}