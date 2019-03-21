#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_Reload()
{
    class_< UPlayerBehavior_Reload, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_Reload", no_init)
        .def("StaticClass", &UPlayerBehavior_Reload::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_Reload::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}