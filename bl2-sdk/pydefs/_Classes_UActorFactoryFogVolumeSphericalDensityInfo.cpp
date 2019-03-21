#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeSphericalDensityInfo(py::object m)
{
    py::class_< UActorFactoryFogVolumeSphericalDensityInfo,  UActorFactoryFogVolumeConstantDensityInfo   >(m, "UActorFactoryFogVolumeSphericalDensityInfo")
        .def("StaticClass", &UActorFactoryFogVolumeSphericalDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}