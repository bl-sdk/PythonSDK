#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeLinearHalfspaceDensityInfo(py::object m)
{
    py::class_< UActorFactoryFogVolumeLinearHalfspaceDensityInfo,  UActorFactoryFogVolumeConstantDensityInfo   >(m, "UActorFactoryFogVolumeLinearHalfspaceDensityInfo")
        .def("StaticClass", &UActorFactoryFogVolumeLinearHalfspaceDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}