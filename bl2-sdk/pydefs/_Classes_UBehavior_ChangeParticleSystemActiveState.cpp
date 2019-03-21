#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeParticleSystemActiveState()
{
    class_< UBehavior_ChangeParticleSystemActiveState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeParticleSystemActiveState", no_init)
        .def_readwrite("Status", &UBehavior_ChangeParticleSystemActiveState::Status)
        .def("StaticClass", &UBehavior_ChangeParticleSystemActiveState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeParticleSystemActiveState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}