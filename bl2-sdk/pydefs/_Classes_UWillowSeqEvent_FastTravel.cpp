#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_FastTravel(py::object m)
{
    py::class_< UWillowSeqEvent_FastTravel,  USequenceEvent   >(m, "UWillowSeqEvent_FastTravel")
        .def("StaticClass", &UWillowSeqEvent_FastTravel::StaticClass, py::return_value_policy::reference)
          ;
}