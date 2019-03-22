#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableVehicleDefinition(py::module &m)
{
    py::class_< UDownloadableVehicleDefinition,  UDownloadableContentDefinition   >(m, "UDownloadableVehicleDefinition")
        .def("CanDrive", &UDownloadableVehicleDefinition::CanDrive)
          ;
}