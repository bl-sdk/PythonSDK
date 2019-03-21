#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEventFilter_OnTakeDamage()
{
    class_< UEventFilter_OnTakeDamage, bases< UBehaviorEventFilterBase >  , boost::noncopyable>("UEventFilter_OnTakeDamage", no_init)
        .def_readwrite("DamageThreshold", &UEventFilter_OnTakeDamage::DamageThreshold)
        .def("StaticClass", &UEventFilter_OnTakeDamage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}