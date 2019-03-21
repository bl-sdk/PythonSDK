#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AColorScaleVolume()
{
    class_< AColorScaleVolume, bases< AVolume >  , boost::noncopyable>("AColorScaleVolume", no_init)
        .def_readwrite("ColorScale", &AColorScaleVolume::ColorScale)
        .def_readwrite("InterpTime", &AColorScaleVolume::InterpTime)
        .def("StaticClass", &AColorScaleVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventUnTouch", &AColorScaleVolume::eventUnTouch)
        .def("eventTouch", &AColorScaleVolume::eventTouch)
        .staticmethod("StaticClass")
  ;
}