#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBlurEffect()
{
    class_< UBlurEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UBlurEffect", no_init)
        .def_readwrite("BlurKernelSize", &UBlurEffect::BlurKernelSize)
        .def("StaticClass", &UBlurEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}