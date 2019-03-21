#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInstanceDataSet()
{
    py::class_< FInstanceDataSet >("FInstanceDataSet")
        .def_readwrite("Data", &FInstanceDataSet::Data)
  ;
}