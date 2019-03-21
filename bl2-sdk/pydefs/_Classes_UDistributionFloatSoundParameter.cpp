#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloatSoundParameter()
{
    class_< UDistributionFloatSoundParameter, bases< UDistributionFloatParameterBase >  , boost::noncopyable>("UDistributionFloatSoundParameter", no_init)
        .def("StaticClass", &UDistributionFloatSoundParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}