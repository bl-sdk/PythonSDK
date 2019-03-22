#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeLinearHalfspaceDensityInfo(py::module &m)
{
    py::class_< UActorFactoryFogVolumeLinearHalfspaceDensityInfo,  UActorFactoryFogVolumeConstantDensityInfo   >(m, "UActorFactoryFogVolumeLinearHalfspaceDensityInfo")
          ;
}