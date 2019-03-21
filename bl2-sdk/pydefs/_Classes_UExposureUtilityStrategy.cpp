#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExposureUtilityStrategy()
{
    class_< UExposureUtilityStrategy, bases< UObject >  , boost::noncopyable>("UExposureUtilityStrategy", no_init)
        .def("StaticClass", &UExposureUtilityStrategy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}