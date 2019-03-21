#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxEvent_FSCommand()
{
    py::class_< UGFxEvent_FSCommand,  USequenceEvent   >("UGFxEvent_FSCommand")
        .def_readwrite("Movie", &UGFxEvent_FSCommand::Movie)
        .def_readwrite("FSCommand", &UGFxEvent_FSCommand::FSCommand)
        .def_readwrite("Handler", &UGFxEvent_FSCommand::Handler)
        .def("StaticClass", &UGFxEvent_FSCommand::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}