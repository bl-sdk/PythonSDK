#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameStatsAggregator(py::module &m)
{
    py::class_< UGameStatsAggregator,  UGameplayEventsHandler   >(m, "UGameStatsAggregator")
		.def_static("StaticClass", &UGameStatsAggregator::StaticClass, py::return_value_policy::reference)
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
        .def("GetAggregateMappingIDs", &UGameStatsAggregator::GetAggregateMappingIDs)
        .def("Reset", &UGameStatsAggregator::Reset)
        .def("eventPostProcessStream", &UGameStatsAggregator::eventPostProcessStream)
        .def("eventPreProcessStream", &UGameStatsAggregator::eventPreProcessStream)
          ;
}