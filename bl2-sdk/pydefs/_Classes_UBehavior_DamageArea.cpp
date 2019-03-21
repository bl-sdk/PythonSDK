#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DamageArea()
{
    class_< UBehavior_DamageArea, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DamageArea", no_init)
        .def_readwrite("Action", &UBehavior_DamageArea::Action)
        .def("StaticClass", &UBehavior_DamageArea::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DamageArea::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}