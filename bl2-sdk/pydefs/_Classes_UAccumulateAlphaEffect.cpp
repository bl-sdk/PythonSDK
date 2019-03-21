#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAccumulateAlphaEffect()
{
    class_< UAccumulateAlphaEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UAccumulateAlphaEffect", no_init)
        .def("StaticClass", &UAccumulateAlphaEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}