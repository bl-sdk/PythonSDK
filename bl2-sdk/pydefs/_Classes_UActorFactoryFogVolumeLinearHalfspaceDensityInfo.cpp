#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeLinearHalfspaceDensityInfo()
{
    class_< UActorFactoryFogVolumeLinearHalfspaceDensityInfo, bases< UActorFactoryFogVolumeConstantDensityInfo >  , boost::noncopyable>("UActorFactoryFogVolumeLinearHalfspaceDensityInfo", no_init)
        .def("StaticClass", &UActorFactoryFogVolumeLinearHalfspaceDensityInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}