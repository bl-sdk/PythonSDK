#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArtifactPartDefinition(py::object m)
{
    py::class_< UArtifactPartDefinition,  UEquipableItemPartDefinition   >(m, "UArtifactPartDefinition")
        .def("StaticClass", &UArtifactPartDefinition::StaticClass, py::return_value_policy::reference)
          ;
}