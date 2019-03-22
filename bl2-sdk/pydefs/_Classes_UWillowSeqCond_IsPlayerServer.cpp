#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_IsPlayerServer(py::module &m)
{
    py::class_< UWillowSeqCond_IsPlayerServer,  USequenceCondition   >(m, "UWillowSeqCond_IsPlayerServer")
        .def("StaticClass", &UWillowSeqCond_IsPlayerServer::StaticClass, py::return_value_policy::reference)
          ;
}