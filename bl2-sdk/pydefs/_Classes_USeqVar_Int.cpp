#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Int(py::module &m)
{
    py::class_< USeqVar_Int,  USequenceVariable   >(m, "USeqVar_Int")
        .def_readwrite("IntValue", &USeqVar_Int::IntValue)
        .def("StaticClass", &USeqVar_Int::StaticClass, py::return_value_policy::reference)
          ;
}