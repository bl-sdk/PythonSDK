#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineGameSearch()
{
    class_< UOnlineGameSearch, bases< USettings >  , boost::noncopyable>("UOnlineGameSearch", no_init)
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
        .def("StaticClass", &UOnlineGameSearch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSortSearchResults", &UOnlineGameSearch::eventSortSearchResults)
        .def("SetSkillOverride", &UOnlineGameSearch::SetSkillOverride)
        .staticmethod("StaticClass")
  ;
}