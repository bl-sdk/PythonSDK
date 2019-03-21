#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APlaceableDynamicSMActor()
{
    class_< APlaceableDynamicSMActor, bases< ADynamicSMActor >  , boost::noncopyable>("APlaceableDynamicSMActor", no_init)
        .def("StaticClass", &APlaceableDynamicSMActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}