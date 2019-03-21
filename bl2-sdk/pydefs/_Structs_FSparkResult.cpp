#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSparkResult(py::object m)
{
    py::class_< FSparkResult >(m, "FSparkResult")
        .def_readwrite("ErrorCode", &FSparkResult::ErrorCode)
        .def_readwrite("HttpStatusCode", &FSparkResult::HttpStatusCode)
        .def_readwrite("ResponseBody", &FSparkResult::ResponseBody)
  ;
}