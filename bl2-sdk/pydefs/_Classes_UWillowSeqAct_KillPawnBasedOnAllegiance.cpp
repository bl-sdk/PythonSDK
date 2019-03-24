#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_KillPawnBasedOnAllegiance(py::module &m)
{
    py::class_< UWillowSeqAct_KillPawnBasedOnAllegiance,  USequenceAction   >(m, "UWillowSeqAct_KillPawnBasedOnAllegiance")
		.def_static("StaticClass", &UWillowSeqAct_KillPawnBasedOnAllegiance::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AllegianceToBaseKillsOn", &UWillowSeqAct_KillPawnBasedOnAllegiance::AllegianceToBaseKillsOn)
        .def_readwrite("AllegianceKillRelationship", &UWillowSeqAct_KillPawnBasedOnAllegiance::AllegianceKillRelationship)
        .def_readwrite("DamageSource", &UWillowSeqAct_KillPawnBasedOnAllegiance::DamageSource)
        .def_readwrite("DamageType", &UWillowSeqAct_KillPawnBasedOnAllegiance::DamageType)
        .def("GetKillInstigatorFromVariableLink", &UWillowSeqAct_KillPawnBasedOnAllegiance::GetKillInstigatorFromVariableLink, py::return_value_policy::reference)
        .def("GetAllegianceFromVariableLink", &UWillowSeqAct_KillPawnBasedOnAllegiance::GetAllegianceFromVariableLink, py::return_value_policy::reference)
        .def("KillBasedOnThisAllegiance", &UWillowSeqAct_KillPawnBasedOnAllegiance::KillBasedOnThisAllegiance)
        .def("eventActivated", &UWillowSeqAct_KillPawnBasedOnAllegiance::eventActivated)
          ;
}