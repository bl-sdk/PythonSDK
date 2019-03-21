#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetDualWieldBlendState()
{
    class_< UBehavior_SetDualWieldBlendState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetDualWieldBlendState", no_init)
        .def_readwrite("BlendTime", &UBehavior_SetDualWieldBlendState::BlendTime)
        .def("StaticClass", &UBehavior_SetDualWieldBlendState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetDualWieldBlendState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}