#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_TimedMessage(py::module &m)
{
    py::class_< USeqAct_TimedMessage,  USeqAct_Log   >(m, "USeqAct_TimedMessage")
        .def_readwrite("MessageTime", &USeqAct_TimedMessage::MessageTime)
        .def("StaticClass", &USeqAct_TimedMessage::StaticClass, py::return_value_policy::reference)
          ;
}