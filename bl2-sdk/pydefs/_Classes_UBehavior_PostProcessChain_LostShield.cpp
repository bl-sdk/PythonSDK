#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PostProcessChain_LostShield()
{
    class_< UBehavior_PostProcessChain_LostShield, bases< UBehavior_PostProcessChain >  , boost::noncopyable>("UBehavior_PostProcessChain_LostShield", no_init)
        .def_readwrite("HealthParamName", &UBehavior_PostProcessChain_LostShield::HealthParamName)
        .def_readwrite("MaterialEffectName", &UBehavior_PostProcessChain_LostShield::MaterialEffectName)
        .def_readwrite("UpdateRate", &UBehavior_PostProcessChain_LostShield::UpdateRate)
        .def("StaticClass", &UBehavior_PostProcessChain_LostShield::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PostProcessChain_LostShield::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}