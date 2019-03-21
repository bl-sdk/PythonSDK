#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_PlayEchoCall()
{
    class_< UPlayerBehavior_PlayEchoCall, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_PlayEchoCall", no_init)
        .def("StaticClass", &UPlayerBehavior_PlayEchoCall::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_PlayEchoCall::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}