#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxFSCmdHandler_Kismet(py::module &m)
{
    py::class_< UGFxFSCmdHandler_Kismet,  UGFxFSCmdHandler   >(m, "UGFxFSCmdHandler_Kismet")
        .def("StaticClass", &UGFxFSCmdHandler_Kismet::StaticClass, py::return_value_policy::reference)
        .def("eventFSCommand", &UGFxFSCmdHandler_Kismet::eventFSCommand)
          ;
}