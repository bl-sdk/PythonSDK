#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFogVolumeLinearHalfspaceDensityInfo()
{
    class_< AFogVolumeLinearHalfspaceDensityInfo, bases< AFogVolumeDensityInfo >  , boost::noncopyable>("AFogVolumeLinearHalfspaceDensityInfo", no_init)
        .def("StaticClass", &AFogVolumeLinearHalfspaceDensityInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}