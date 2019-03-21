#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFogVolumeSphericalDensityInfo()
{
    class_< AFogVolumeSphericalDensityInfo, bases< AFogVolumeDensityInfo >  , boost::noncopyable>("AFogVolumeSphericalDensityInfo", no_init)
        .def("StaticClass", &AFogVolumeSphericalDensityInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}