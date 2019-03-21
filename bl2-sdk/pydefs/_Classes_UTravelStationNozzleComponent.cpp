#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTravelStationNozzleComponent()
{
    py::class_< UTravelStationNozzleComponent,  UPrimitiveComponent   >("UTravelStationNozzleComponent")
        .def("StaticClass", &UTravelStationNozzleComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}