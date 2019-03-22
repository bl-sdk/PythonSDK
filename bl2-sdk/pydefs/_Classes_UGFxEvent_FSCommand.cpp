#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxEvent_FSCommand(py::module &m)
{
    py::class_< UGFxEvent_FSCommand,  USequenceEvent   >(m, "UGFxEvent_FSCommand")
        .def_readwrite("Movie", &UGFxEvent_FSCommand::Movie)
        .def_readwrite("FSCommand", &UGFxEvent_FSCommand::FSCommand)
        .def_readwrite("Handler", &UGFxEvent_FSCommand::Handler)
          ;
}