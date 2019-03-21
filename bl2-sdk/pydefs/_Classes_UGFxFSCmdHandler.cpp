#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxFSCmdHandler()
{
    py::class_< UGFxFSCmdHandler,  UObject   >("UGFxFSCmdHandler")
        .def("StaticClass", &UGFxFSCmdHandler::StaticClass, py::return_value_policy::reference)
        .def("eventFSCommand", &UGFxFSCmdHandler::eventFSCommand)
        .staticmethod("StaticClass")
  ;
}