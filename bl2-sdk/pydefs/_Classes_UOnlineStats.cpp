#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineStats()
{
    class_< UOnlineStats, bases< UObject >  , boost::noncopyable>("UOnlineStats", no_init)
        .def_readwrite("ViewIdMappings", &UOnlineStats::ViewIdMappings)
        .def("StaticClass", &UOnlineStats::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetViewName", &UOnlineStats::GetViewName)
        .def("GetViewId", &UOnlineStats::GetViewId)
        .staticmethod("StaticClass")
  ;
}