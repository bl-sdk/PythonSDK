#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBaseHitRegionDefinition(py::module &m)
{
    py::class_< UBaseHitRegionDefinition,  UGBXDefinition   >(m, "UBaseHitRegionDefinition")
		.def_static("StaticClass", &UBaseHitRegionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}