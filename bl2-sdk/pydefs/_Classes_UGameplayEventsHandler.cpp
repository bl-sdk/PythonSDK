#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameplayEventsHandler()
{
    py::class_< UGameplayEventsHandler,  UObject   >("UGameplayEventsHandler")
        .def_readwrite("EventIDFilter", &UGameplayEventsHandler::EventIDFilter)
        .def_readwrite("GroupFilter", &UGameplayEventsHandler::GroupFilter)
        .def_readwrite("Reader", &UGameplayEventsHandler::Reader)
        .def("StaticClass", &UGameplayEventsHandler::StaticClass, py::return_value_policy::reference)
        .def("RemoveFilter", &UGameplayEventsHandler::RemoveFilter)
        .def("AddFilter", &UGameplayEventsHandler::AddFilter)
        .def("eventResolveGroupFilters", &UGameplayEventsHandler::eventResolveGroupFilters)
        .def("eventPostProcessStream", &UGameplayEventsHandler::eventPostProcessStream)
        .def("eventPreProcessStream", &UGameplayEventsHandler::eventPreProcessStream)
        .def("SetReader", &UGameplayEventsHandler::SetReader)
        .staticmethod("StaticClass")
  ;
}