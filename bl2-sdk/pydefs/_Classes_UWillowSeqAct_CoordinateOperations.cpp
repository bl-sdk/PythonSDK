#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CoordinateOperations(py::module &m)
{
    py::class_< UWillowSeqAct_CoordinateOperations,  USequenceAction   >(m, "UWillowSeqAct_CoordinateOperations")
        .def_readwrite("AllOperations", &UWillowSeqAct_CoordinateOperations::AllOperations)
        .def_readwrite("OperationsRemaining", &UWillowSeqAct_CoordinateOperations::OperationsRemaining)
          ;
}