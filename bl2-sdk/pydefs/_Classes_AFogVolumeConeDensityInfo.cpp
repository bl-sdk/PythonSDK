#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFogVolumeConeDensityInfo()
{
    class_< AFogVolumeConeDensityInfo, bases< AFogVolumeDensityInfo >  , boost::noncopyable>("AFogVolumeConeDensityInfo", no_init)
        .def("StaticClass", &AFogVolumeConeDensityInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}