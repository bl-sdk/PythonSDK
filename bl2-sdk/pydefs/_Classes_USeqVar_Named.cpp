#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Named(py::module &m)
{
    py::class_< USeqVar_Named,  USequenceVariable   >(m, "USeqVar_Named")
        .def_readwrite("ExpectedType", &USeqVar_Named::ExpectedType)
        .def_readwrite("FindVarName", &USeqVar_Named::FindVarName)
        .def("StaticClass", &USeqVar_Named::StaticClass, py::return_value_policy::reference)
          ;
}