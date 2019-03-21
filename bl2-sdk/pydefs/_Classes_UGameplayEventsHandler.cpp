#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameplayEventsHandler()
{
    class_< UGameplayEventsHandler, bases< UObject >  , boost::noncopyable>("UGameplayEventsHandler", no_init)
        .def_readwrite("EventIDFilter", &UGameplayEventsHandler::EventIDFilter)
        .def_readwrite("GroupFilter", &UGameplayEventsHandler::GroupFilter)
        .def_readwrite("Reader", &UGameplayEventsHandler::Reader)
        .def("StaticClass", &UGameplayEventsHandler::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveFilter", &UGameplayEventsHandler::RemoveFilter)
        .def("AddFilter", &UGameplayEventsHandler::AddFilter)
        .def("eventResolveGroupFilters", &UGameplayEventsHandler::eventResolveGroupFilters)
        .def("eventPostProcessStream", &UGameplayEventsHandler::eventPostProcessStream)
        .def("eventPreProcessStream", &UGameplayEventsHandler::eventPreProcessStream)
        .def("SetReader", &UGameplayEventsHandler::SetReader)
        .staticmethod("StaticClass")
  ;
}