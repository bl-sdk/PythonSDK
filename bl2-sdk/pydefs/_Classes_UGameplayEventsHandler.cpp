#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameplayEventsHandler(py::module &m)
{
    py::class_< UGameplayEventsHandler,  UObject   >(m, "UGameplayEventsHandler")
        .def_readwrite("EventIDFilter", &UGameplayEventsHandler::EventIDFilter)
        .def_readwrite("GroupFilter", &UGameplayEventsHandler::GroupFilter)
        .def_readwrite("Reader", &UGameplayEventsHandler::Reader)
        .def("RemoveFilter", &UGameplayEventsHandler::RemoveFilter)
        .def("AddFilter", &UGameplayEventsHandler::AddFilter)
        .def("eventResolveGroupFilters", &UGameplayEventsHandler::eventResolveGroupFilters)
        .def("eventPostProcessStream", &UGameplayEventsHandler::eventPostProcessStream)
        .def("eventPreProcessStream", &UGameplayEventsHandler::eventPreProcessStream)
        .def("SetReader", &UGameplayEventsHandler::SetReader)
          ;
}