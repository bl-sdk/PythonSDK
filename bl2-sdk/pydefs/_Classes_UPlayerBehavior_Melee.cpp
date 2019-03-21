#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_Melee()
{
    class_< UPlayerBehavior_Melee, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_Melee", no_init)
        .def("StaticClass", &UPlayerBehavior_Melee::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_Melee::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}