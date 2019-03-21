#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_VehicleRanInto()
{
    py::class_< UWillowDmgSource_VehicleRanInto,  UWillowDamageSource   >("UWillowDmgSource_VehicleRanInto")
        .def("StaticClass", &UWillowDmgSource_VehicleRanInto::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}