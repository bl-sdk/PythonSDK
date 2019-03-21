#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ClientFlagGet(py::object m)
{
    py::class_< UWillowSeqAct_ClientFlagGet,  USequenceAction   >(m, "UWillowSeqAct_ClientFlagGet")
        .def_readwrite("ClientFlagName", &UWillowSeqAct_ClientFlagGet::ClientFlagName)
        .def("StaticClass", &UWillowSeqAct_ClientFlagGet::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ClientFlagGet::eventActivated)
          ;
}