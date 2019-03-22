#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqVar_DayNightCycleVariable(py::module &m)
{
    py::class_< UWillowSeqVar_DayNightCycleVariable,  USeqVar_Float   >(m, "UWillowSeqVar_DayNightCycleVariable")
        .def("StaticClass", &UWillowSeqVar_DayNightCycleVariable::StaticClass, py::return_value_policy::reference)
          ;
}