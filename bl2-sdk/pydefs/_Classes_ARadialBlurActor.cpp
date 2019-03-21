#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARadialBlurActor()
{
    class_< ARadialBlurActor, bases< AActor >  , boost::noncopyable>("ARadialBlurActor", no_init)
        .def_readwrite("RadialBlur", &ARadialBlurActor::RadialBlur)
        .def("StaticClass", &ARadialBlurActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}