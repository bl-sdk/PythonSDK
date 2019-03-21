#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAkEnvironmentalEffectProvider()
{
    class_< UIAkEnvironmentalEffectProvider, bases< UInterface >  , boost::noncopyable>("UIAkEnvironmentalEffectProvider", no_init)
        .def("StaticClass", &UIAkEnvironmentalEffectProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetEnvironmentalEffectsForLocation", &UIAkEnvironmentalEffectProvider::GetEnvironmentalEffectsForLocation)
        .staticmethod("StaticClass")
  ;
}