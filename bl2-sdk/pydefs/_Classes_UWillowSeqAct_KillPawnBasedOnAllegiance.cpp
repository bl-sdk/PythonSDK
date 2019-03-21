#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_KillPawnBasedOnAllegiance()
{
    class_< UWillowSeqAct_KillPawnBasedOnAllegiance, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_KillPawnBasedOnAllegiance", no_init)
        .def_readwrite("AllegianceToBaseKillsOn", &UWillowSeqAct_KillPawnBasedOnAllegiance::AllegianceToBaseKillsOn)
        .def_readwrite("AllegianceKillRelationship", &UWillowSeqAct_KillPawnBasedOnAllegiance::AllegianceKillRelationship)
        .def_readwrite("DamageSource", &UWillowSeqAct_KillPawnBasedOnAllegiance::DamageSource)
        .def_readwrite("DamageType", &UWillowSeqAct_KillPawnBasedOnAllegiance::DamageType)
        .def("StaticClass", &UWillowSeqAct_KillPawnBasedOnAllegiance::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetKillInstigatorFromVariableLink", &UWillowSeqAct_KillPawnBasedOnAllegiance::GetKillInstigatorFromVariableLink, return_value_policy< reference_existing_object >())
        .def("GetAllegianceFromVariableLink", &UWillowSeqAct_KillPawnBasedOnAllegiance::GetAllegianceFromVariableLink, return_value_policy< reference_existing_object >())
        .def("KillBasedOnThisAllegiance", &UWillowSeqAct_KillPawnBasedOnAllegiance::KillBasedOnThisAllegiance)
        .def("eventActivated", &UWillowSeqAct_KillPawnBasedOnAllegiance::eventActivated)
        .staticmethod("StaticClass")
  ;
}