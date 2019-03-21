#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnDemandPackageMarker()
{
    py::class_< UWillowOnDemandPackageMarker,  UObject   >("UWillowOnDemandPackageMarker")
        .def("StaticClass", &UWillowOnDemandPackageMarker::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}