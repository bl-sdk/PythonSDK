#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_VehicleRanOver(py::module &m)
{
    py::class_< UWillowDmgSource_VehicleRanOver,  UWillowDamageSource   >(m, "UWillowDmgSource_VehicleRanOver")
        .def("StaticClass", &UWillowDmgSource_VehicleRanOver::StaticClass, py::return_value_policy::reference)
          ;
}