#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeSphericalDensityInfo()
{
    class_< UActorFactoryFogVolumeSphericalDensityInfo, bases< UActorFactoryFogVolumeConstantDensityInfo >  , boost::noncopyable>("UActorFactoryFogVolumeSphericalDensityInfo", no_init)
        .def("StaticClass", &UActorFactoryFogVolumeSphericalDensityInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}