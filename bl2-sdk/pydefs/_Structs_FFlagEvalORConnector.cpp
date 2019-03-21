#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFlagEvalORConnector()
{
    py::class_< FFlagEvalORConnector >("FFlagEvalORConnector")
        .def_readwrite("ANDChain", &FFlagEvalORConnector::ANDChain)
  ;
}