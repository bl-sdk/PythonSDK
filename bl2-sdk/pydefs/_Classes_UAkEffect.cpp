#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkEffect()
{
    class_< UAkEffect, bases< UAkObject >  , boost::noncopyable>("UAkEffect", no_init)
        .def_readwrite("EffectName", &UAkEffect::EffectName)
        .def("StaticClass", &UAkEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}