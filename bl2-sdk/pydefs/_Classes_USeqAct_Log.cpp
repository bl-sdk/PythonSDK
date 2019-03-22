#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Log(py::module &m)
{
    py::class_< USeqAct_Log,  USequenceAction   >(m, "USeqAct_Log")
        .def_readwrite("TargetDuration", &USeqAct_Log::TargetDuration)
        .def_readwrite("TargetOffset", &USeqAct_Log::TargetOffset)
        .def_readwrite("LogMessage", &USeqAct_Log::LogMessage)
        .def("StaticClass", &USeqAct_Log::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_Log::eventGetObjClassVersion)
          ;
}