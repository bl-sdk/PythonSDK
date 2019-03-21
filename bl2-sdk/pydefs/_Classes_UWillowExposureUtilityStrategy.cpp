#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowExposureUtilityStrategy()
{
    class_< UWillowExposureUtilityStrategy, bases< UExposureUtilityStrategy >  , boost::noncopyable>("UWillowExposureUtilityStrategy", no_init)
        .def("StaticClass", &UWillowExposureUtilityStrategy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}