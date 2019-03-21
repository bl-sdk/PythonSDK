#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ThrowGrenade()
{
    class_< UPlayerBehavior_ThrowGrenade, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_ThrowGrenade", no_init)
        .def("StaticClass", &UPlayerBehavior_ThrowGrenade::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ThrowGrenade::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}