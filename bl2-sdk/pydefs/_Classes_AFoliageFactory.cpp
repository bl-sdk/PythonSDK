#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFoliageFactory()
{
    class_< AFoliageFactory, bases< AVolume >  , boost::noncopyable>("AFoliageFactory", no_init)
        .def_readwrite("Meshes", &AFoliageFactory::Meshes)
        .def_readwrite("VolumeFalloffRadius", &AFoliageFactory::VolumeFalloffRadius)
        .def_readwrite("VolumeFalloffExponent", &AFoliageFactory::VolumeFalloffExponent)
        .def_readwrite("SurfaceDensityUpFacing", &AFoliageFactory::SurfaceDensityUpFacing)
        .def_readwrite("SurfaceDensityDownFacing", &AFoliageFactory::SurfaceDensityDownFacing)
        .def_readwrite("SurfaceDensitySideFacing", &AFoliageFactory::SurfaceDensitySideFacing)
        .def_readwrite("FacingFalloffExponent", &AFoliageFactory::FacingFalloffExponent)
        .def_readwrite("MaxInstanceCount", &AFoliageFactory::MaxInstanceCount)
        .def("StaticClass", &AFoliageFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}