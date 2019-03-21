#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponsRestriction()
{
    class_< UBehavior_WeaponsRestriction, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_WeaponsRestriction", no_init)
        .def("StaticClass", &UBehavior_WeaponsRestriction::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_WeaponsRestriction::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}