#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FChunkedList_Mirror(py::module &m)
{
    py::class_< FChunkedList_Mirror >(m, "FChunkedList_Mirror")
        .def_readwrite("Members", &FChunkedList_Mirror::Members)
  ;
}