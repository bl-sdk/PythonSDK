#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Name(py::module &m)
{
    py::class_< USeqVar_Name,  USequenceVariable   >(m, "USeqVar_Name")
        .def("StaticClass", &USeqVar_Name::StaticClass, py::return_value_policy::reference)
          ;
}