#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPawnAllegiance()
{
    class_< UPawnAllegiance, bases< UObject >  , boost::noncopyable>("UPawnAllegiance", no_init)
        .def_readwrite("DefaultOpinion", &UPawnAllegiance::DefaultOpinion)
        .def_readwrite("SelfOpinion", &UPawnAllegiance::SelfOpinion)
        .def_readwrite("ForcedOtherOpinion", &UPawnAllegiance::ForcedOtherOpinion)
        .def_readwrite("MyOpinions", &UPawnAllegiance::MyOpinions)
        .def_readwrite("OtherOpinions", &UPawnAllegiance::OtherOpinions)
        .def_readwrite("AllegianceKilledStat", &UPawnAllegiance::AllegianceKilledStat)
        .def("StaticClass", &UPawnAllegiance::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsAllegianceChild", &UPawnAllegiance::IsAllegianceChild)
        .def("SetParent", &UPawnAllegiance::SetParent)
        .def("RemoveChildren", &UPawnAllegiance::RemoveChildren)
        .def("RemoveParent", &UPawnAllegiance::RemoveParent)
        .def("ConsidersObjectNeutral", &UPawnAllegiance::ConsidersObjectNeutral)
        .def("ConsidersObjectFriendly", &UPawnAllegiance::ConsidersObjectFriendly)
        .def("ConsidersObjectEnemy", &UPawnAllegiance::ConsidersObjectEnemy)
        .def("ConsidersNeutral", &UPawnAllegiance::ConsidersNeutral)
        .def("ConsidersFriendly", &UPawnAllegiance::ConsidersFriendly)
        .def("ConsidersEnemy", &UPawnAllegiance::ConsidersEnemy)
        .def("GetObjectOpinion", &UPawnAllegiance::GetObjectOpinion)
        .def("GetOpinion", &UPawnAllegiance::GetOpinion)
        .def("InitializeDefinitionActor", &UGBXDefinition::InitializeDefinitionActor)
        .def("GetDefinitionActorClass", &UGBXDefinition::GetDefinitionActorClass, return_value_policy< reference_existing_object >())
        .def("StaticGetFullNameForDefinition", &UGBXDefinition::StaticGetFullNameForDefinition)
        .def("GetFullDefinitionName", &UGBXDefinition::GetFullDefinitionName)
        .def("GetDefinition", &UGBXDefinition::GetDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}