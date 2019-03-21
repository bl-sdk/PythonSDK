#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBaseHitRegionDefinition()
{
    py::class_< UBaseHitRegionDefinition,  UGBXDefinition   >("UBaseHitRegionDefinition")
        .def("StaticClass", &UBaseHitRegionDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}