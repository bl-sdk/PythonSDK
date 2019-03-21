#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFlagEvalORConnector(py::object m)
{
    py::class_< FFlagEvalORConnector >(m, "FFlagEvalORConnector")
        .def_readwrite("ANDChain", &FFlagEvalORConnector::ANDChain)
  ;
}