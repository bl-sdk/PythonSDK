#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxFSCmdHandler(py::module &m)
{
    py::class_< UGFxFSCmdHandler,  UObject   >(m, "UGFxFSCmdHandler")
        .def("eventFSCommand", &UGFxFSCmdHandler::eventFSCommand)
          ;
}