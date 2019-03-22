#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Destroyed(py::module &m)
{
    py::class_< USeqEvent_Destroyed,  USequenceEvent   >(m, "USeqEvent_Destroyed")
        .def("StaticClass", &USeqEvent_Destroyed::StaticClass, py::return_value_policy::reference)
          ;
}