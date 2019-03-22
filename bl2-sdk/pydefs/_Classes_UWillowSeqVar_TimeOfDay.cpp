#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqVar_TimeOfDay(py::module &m)
{
    py::class_< UWillowSeqVar_TimeOfDay,  USeqVar_Float   >(m, "UWillowSeqVar_TimeOfDay")
        .def("StaticClass", &UWillowSeqVar_TimeOfDay::StaticClass, py::return_value_policy::reference)
          ;
}