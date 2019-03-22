#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_Provoked(py::module &m)
{
    py::class_< UWillowSeqEvent_Provoked,  USequenceEvent   >(m, "UWillowSeqEvent_Provoked")
        .def("StaticClass", &UWillowSeqEvent_Provoked::StaticClass, py::return_value_policy::reference)
          ;
}