#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFXAAEffect()
{
    class_< UFXAAEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UFXAAEffect", no_init)
        .def("StaticClass", &UFXAAEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}