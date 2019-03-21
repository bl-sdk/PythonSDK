#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArtifactPartDefinition()
{
    py::class_< UArtifactPartDefinition,  UEquipableItemPartDefinition   >("UArtifactPartDefinition")
        .def("StaticClass", &UArtifactPartDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}