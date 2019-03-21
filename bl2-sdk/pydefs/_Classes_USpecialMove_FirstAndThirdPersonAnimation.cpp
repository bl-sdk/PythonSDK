#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstAndThirdPersonAnimation()
{
    class_< USpecialMove_FirstAndThirdPersonAnimation, bases< USpecialMove_WeaponAction >  , boost::noncopyable>("USpecialMove_FirstAndThirdPersonAnimation", no_init)
        .def_readwrite("FirstPersonSM", &USpecialMove_FirstAndThirdPersonAnimation::FirstPersonSM)
        .def("StaticClass", &USpecialMove_FirstAndThirdPersonAnimation::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventClientStarted", &USpecialMove_FirstAndThirdPersonAnimation::eventClientStarted)
        .staticmethod("StaticClass")
  ;
}