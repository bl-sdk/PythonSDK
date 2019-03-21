#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_VehicleRanOver()
{
    py::class_< UWillowDmgSource_VehicleRanOver,  UWillowDamageSource   >("UWillowDmgSource_VehicleRanOver")
        .def("StaticClass", &UWillowDmgSource_VehicleRanOver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}