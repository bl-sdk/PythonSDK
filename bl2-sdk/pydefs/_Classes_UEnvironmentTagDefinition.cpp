#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEnvironmentTagDefinition(py::module &m)
{
    py::class_< UEnvironmentTagDefinition,  UGBXDefinition   >(m, "UEnvironmentTagDefinition")
		.def_static("StaticClass", &UEnvironmentTagDefinition::StaticClass, py::return_value_policy::reference)
          ;
}