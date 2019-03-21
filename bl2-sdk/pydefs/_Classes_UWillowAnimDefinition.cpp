#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimDefinition()
{
    class_< UWillowAnimDefinition, bases< UGearboxAnimDefinition >  , boost::noncopyable>("UWillowAnimDefinition", no_init)
        .def_readwrite("InstanceDataName", &UWillowAnimDefinition::InstanceDataName)
        .def("StaticClass", &UWillowAnimDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSMNode", &UWillowAnimDefinition::GetSMNode, return_value_policy< reference_existing_object >())
        .def("eventClientFinished", &UWillowAnimDefinition::eventClientFinished)
        .def("eventClientStarted", &UWillowAnimDefinition::eventClientStarted)
        .def("eventServerFinished", &UWillowAnimDefinition::eventServerFinished)
        .def("eventServerStarted", &UWillowAnimDefinition::eventServerStarted)
        .def("eventAuthorityCanPlay", &UWillowAnimDefinition::eventAuthorityCanPlay)
        .staticmethod("StaticClass")
  ;
}