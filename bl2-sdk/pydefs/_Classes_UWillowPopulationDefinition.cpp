#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPopulationDefinition()
{
    class_< UWillowPopulationDefinition, bases< UPopulationDefinition >  , boost::noncopyable>("UWillowPopulationDefinition", no_init)
        .def_readwrite("AIDef", &UWillowPopulationDefinition::AIDef)
        .def_readwrite("ClanDefinition", &UWillowPopulationDefinition::ClanDefinition)
        .def("StaticClass", &UWillowPopulationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}