#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeLinearHalfspaceDensityInfo()
{
    py::class_< UActorFactoryFogVolumeLinearHalfspaceDensityInfo,  UActorFactoryFogVolumeConstantDensityInfo   >("UActorFactoryFogVolumeLinearHalfspaceDensityInfo")
        .def("StaticClass", &UActorFactoryFogVolumeLinearHalfspaceDensityInfo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}