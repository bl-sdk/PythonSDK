#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBaseHitRegionDefinition(py::module &m)
{
    py::class_< UBaseHitRegionDefinition,  UGBXDefinition   >(m, "UBaseHitRegionDefinition")
          ;
}