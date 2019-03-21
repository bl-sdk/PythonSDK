#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ACullDistanceVolume()
{
    class_< ACullDistanceVolume, bases< AVolume >  , boost::noncopyable>("ACullDistanceVolume", no_init)
        .def_readwrite("CullDistances", &ACullDistanceVolume::CullDistances)
        .def("StaticClass", &ACullDistanceVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}