#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArtifactPartDefinition(py::module &m)
{
    py::class_< UArtifactPartDefinition,  UEquipableItemPartDefinition   >(m, "UArtifactPartDefinition")
		.def_static("StaticClass", &UArtifactPartDefinition::StaticClass, py::return_value_policy::reference)
          ;
}