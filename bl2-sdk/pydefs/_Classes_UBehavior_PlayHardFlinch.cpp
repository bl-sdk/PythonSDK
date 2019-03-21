#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PlayHardFlinch()
{
    class_< UBehavior_PlayHardFlinch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PlayHardFlinch", no_init)
        .def_readwrite("HitLocation", &UBehavior_PlayHardFlinch::HitLocation)
        .def_readwrite("InstigatedBy", &UBehavior_PlayHardFlinch::InstigatedBy)
        .def("StaticClass", &UBehavior_PlayHardFlinch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PlayHardFlinch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}