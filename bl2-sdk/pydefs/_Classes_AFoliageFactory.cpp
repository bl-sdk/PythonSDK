#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFoliageFactory(py::module &m)
{
    py::class_< AFoliageFactory,  AVolume   >(m, "AFoliageFactory")
		.def_static("StaticClass", &AFoliageFactory::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Meshes", &AFoliageFactory::Meshes)
        .def_readwrite("VolumeFalloffRadius", &AFoliageFactory::VolumeFalloffRadius)
        .def_readwrite("VolumeFalloffExponent", &AFoliageFactory::VolumeFalloffExponent)
        .def_readwrite("SurfaceDensityUpFacing", &AFoliageFactory::SurfaceDensityUpFacing)
        .def_readwrite("SurfaceDensityDownFacing", &AFoliageFactory::SurfaceDensityDownFacing)
        .def_readwrite("SurfaceDensitySideFacing", &AFoliageFactory::SurfaceDensitySideFacing)
        .def_readwrite("FacingFalloffExponent", &AFoliageFactory::FacingFalloffExponent)
        .def_readwrite("MaxInstanceCount", &AFoliageFactory::MaxInstanceCount)
          ;
}