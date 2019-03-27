#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInstanceDataSet(py::module &m)
{
    py::class_< FInstanceDataSet >(m, "FInstanceDataSet")
        .def_readwrite("Data", &FInstanceDataSet::Data)
  ;
}