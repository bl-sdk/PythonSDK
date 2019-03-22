#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_VehicleRanInto(py::module &m)
{
    py::class_< UWillowDmgSource_VehicleRanInto,  UWillowDamageSource   >(m, "UWillowDmgSource_VehicleRanInto")
          ;
}