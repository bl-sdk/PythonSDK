#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedDeath()
{
    class_< UWillowSeqAct_AIScriptedDeath, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_AIScriptedDeath", no_init)
        .def_readwrite("DamageType", &UWillowSeqAct_AIScriptedDeath::DamageType)
        .def_readwrite("DeathType", &UWillowSeqAct_AIScriptedDeath::DeathType)
        .def_readwrite("Anim", &UWillowSeqAct_AIScriptedDeath::Anim)
        .def_readwrite("EditInlineAnim", &UWillowSeqAct_AIScriptedDeath::EditInlineAnim)
        .def_readwrite("Killer", &UWillowSeqAct_AIScriptedDeath::Killer)
        .def("StaticClass", &UWillowSeqAct_AIScriptedDeath::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}