#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ViewShake()
{
    class_< UPlayerBehavior_ViewShake, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_ViewShake", no_init)
        .def_readwrite("ShakeInfo", &UPlayerBehavior_ViewShake::ShakeInfo)
        .def("StaticClass", &UPlayerBehavior_ViewShake::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ViewShake::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}