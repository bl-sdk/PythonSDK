#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_PlayerLeft(py::module &m)
{
    py::class_< UWillowSeqEvent_PlayerLeft,  USequenceEvent   >(m, "UWillowSeqEvent_PlayerLeft")
        .def("StaticClass", &UWillowSeqEvent_PlayerLeft::StaticClass, py::return_value_policy::reference)
          ;
}