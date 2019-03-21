#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableVehicleDefinition()
{
    py::class_< UDownloadableVehicleDefinition,  UDownloadableContentDefinition   >("UDownloadableVehicleDefinition")
        .def("StaticClass", &UDownloadableVehicleDefinition::StaticClass, py::return_value_policy::reference)
        .def("CanDrive", &UDownloadableVehicleDefinition::CanDrive)
        .staticmethod("StaticClass")
  ;
}