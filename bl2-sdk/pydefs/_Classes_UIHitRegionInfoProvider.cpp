#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIHitRegionInfoProvider()
{
    class_< UIHitRegionInfoProvider, bases< UInterface >  , boost::noncopyable>("UIHitRegionInfoProvider", no_init)
        .def("StaticClass", &UIHitRegionInfoProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetHitRegions", &UIHitRegionInfoProvider::GetHitRegions)
        .staticmethod("StaticClass")
  ;
}