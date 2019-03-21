#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAttributeEffectBehavior()
{
    class_< UIAttributeEffectBehavior, bases< UInterface >  , boost::noncopyable>("UIAttributeEffectBehavior", no_init)
        .def("StaticClass", &UIAttributeEffectBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}