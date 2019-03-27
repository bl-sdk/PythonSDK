#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeSphericalDensityInfo(py::module &m)
{
    py::class_< UActorFactoryFogVolumeSphericalDensityInfo,  UActorFactoryFogVolumeConstantDensityInfo   >(m, "UActorFactoryFogVolumeSphericalDensityInfo")
		.def_static("StaticClass", &UActorFactoryFogVolumeSphericalDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}