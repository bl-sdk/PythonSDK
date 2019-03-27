#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineGameSearch(py::module &m)
{
    py::class_< UOnlineGameSearch,  USettings   >(m, "UOnlineGameSearch")
		.def_static("StaticClass", &UOnlineGameSearch::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxSearchResults", &UOnlineGameSearch::MaxSearchResults)
        .def_readwrite("Query", &UOnlineGameSearch::Query)
        .def_readwrite("GameSettingsClass", &UOnlineGameSearch::GameSettingsClass)
        .def_readwrite("Results", &UOnlineGameSearch::Results)
        .def_readwrite("ManualSkillOverride", &UOnlineGameSearch::ManualSkillOverride)
        .def_readwrite("NamedProperties", &UOnlineGameSearch::NamedProperties)
        .def_readwrite("FilterQuery", &UOnlineGameSearch::FilterQuery)
        .def_readwrite("AdditionalSearchCriteria", &UOnlineGameSearch::AdditionalSearchCriteria)
        .def_readwrite("PingBucketSize", &UOnlineGameSearch::PingBucketSize)
        .def_readwrite("NumPingProbes", &UOnlineGameSearch::NumPingProbes)
        .def_readwrite("MaxPingBytes", &UOnlineGameSearch::MaxPingBytes)
        .def_readwrite("NumSearchUsers", &UOnlineGameSearch::NumSearchUsers)
        .def("eventSortSearchResults", &UOnlineGameSearch::eventSortSearchResults)
        .def("SetSkillOverride", &UOnlineGameSearch::SetSkillOverride)
          ;
}