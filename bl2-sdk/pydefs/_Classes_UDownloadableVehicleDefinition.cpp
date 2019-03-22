#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableVehicleDefinition(py::module &m)
{
    py::class_< UDownloadableVehicleDefinition,  UDownloadableContentDefinition   >(m, "UDownloadableVehicleDefinition")
        .def("StaticClass", &UDownloadableVehicleDefinition::StaticClass, py::return_value_policy::reference)
        .def("CanDrive", &UDownloadableVehicleDefinition::CanDrive)
          ;
}