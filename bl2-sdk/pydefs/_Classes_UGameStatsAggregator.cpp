#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameStatsAggregator()
{
    class_< UGameStatsAggregator, bases< UGameplayEventsHandler >  , boost::noncopyable>("UGameStatsAggregator", no_init)
        .def_readwrite("GameState", &UGameStatsAggregator::GameState)
        .def_readwrite("AggregatesList", &UGameStatsAggregator::AggregatesList)
        .def_readwrite("AggregateEventsMapping", &UGameStatsAggregator::AggregateEventsMapping)
        .def_readwrite("AggregateEvents", &UGameStatsAggregator::AggregateEvents)
        .def_readwrite("AggregatesFound", &UGameStatsAggregator::AggregatesFound)
        .def_readwrite("AllGameEvents", &UGameStatsAggregator::AllGameEvents)
        .def_readwrite("AllTeamEvents", &UGameStatsAggregator::AllTeamEvents)
        .def_readwrite("AllPlayerEvents", &UGameStatsAggregator::AllPlayerEvents)
        .def_readwrite("AllWeaponEvents", &UGameStatsAggregator::AllWeaponEvents)
        .def_readwrite("AllProjectileEvents", &UGameStatsAggregator::AllProjectileEvents)
        .def_readwrite("AllPawnEvents", &UGameStatsAggregator::AllPawnEvents)
        .def_readwrite("AllDamageEvents", &UGameStatsAggregator::AllDamageEvents)
        .def("StaticClass", &UGameStatsAggregator::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAggregateMappingIDs", &UGameStatsAggregator::GetAggregateMappingIDs)
        .def("Reset", &UGameStatsAggregator::Reset)
        .def("eventPostProcessStream", &UGameStatsAggregator::eventPostProcessStream)
        .def("eventPreProcessStream", &UGameStatsAggregator::eventPreProcessStream)
        .staticmethod("StaticClass")
  ;
}