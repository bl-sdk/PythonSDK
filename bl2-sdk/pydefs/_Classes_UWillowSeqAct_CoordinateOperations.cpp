#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CoordinateOperations(py::object m)
{
    py::class_< UWillowSeqAct_CoordinateOperations,  USequenceAction   >(m, "UWillowSeqAct_CoordinateOperations")
        .def_readwrite("AllOperations", &UWillowSeqAct_CoordinateOperations::AllOperations)
        .def_readwrite("OperationsRemaining", &UWillowSeqAct_CoordinateOperations::OperationsRemaining)
        .def("StaticClass", &UWillowSeqAct_CoordinateOperations::StaticClass, py::return_value_policy::reference)
          ;
}