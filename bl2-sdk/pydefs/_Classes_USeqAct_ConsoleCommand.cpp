#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ConsoleCommand(py::module &m)
{
    py::class_< USeqAct_ConsoleCommand,  USequenceAction   >(m, "USeqAct_ConsoleCommand")
        .def_readwrite("Command", &USeqAct_ConsoleCommand::Command)
        .def_readwrite("Commands", &USeqAct_ConsoleCommand::Commands)
        .def("StaticClass", &USeqAct_ConsoleCommand::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ConsoleCommand::eventGetObjClassVersion)
        .def("VersionUpdated", &USeqAct_ConsoleCommand::VersionUpdated)
          ;
}