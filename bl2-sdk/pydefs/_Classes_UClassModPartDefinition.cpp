#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassModPartDefinition(py::module &m)
{
    py::class_< UClassModPartDefinition,  UEquipableItemPartDefinition   >(m, "UClassModPartDefinition")
		.def_static("StaticClass", &UClassModPartDefinition::StaticClass, py::return_value_policy::reference)
          ;
}