#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxFSCmdHandler(py::module &m)
{
    py::class_< UGFxFSCmdHandler,  UObject   >(m, "UGFxFSCmdHandler")
        .def("StaticClass", &UGFxFSCmdHandler::StaticClass, py::return_value_policy::reference)
        .def("eventFSCommand", &UGFxFSCmdHandler::eventFSCommand)
          ;
}