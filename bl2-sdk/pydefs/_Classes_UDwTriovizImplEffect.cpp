#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDwTriovizImplEffect()
{
    class_< UDwTriovizImplEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UDwTriovizImplEffect", no_init)
        .def("StaticClass", &UDwTriovizImplEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}