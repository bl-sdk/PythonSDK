#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Float(py::module &m)
{
    py::class_< USeqVar_Float,  USequenceVariable   >(m, "USeqVar_Float")
        .def_readwrite("FloatValue", &USeqVar_Float::FloatValue)
        .def("StaticClass", &USeqVar_Float::StaticClass, py::return_value_policy::reference)
          ;
}