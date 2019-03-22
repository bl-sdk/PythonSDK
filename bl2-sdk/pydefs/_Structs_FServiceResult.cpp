#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServiceResult(py::module &m)
{
    py::class_< FServiceResult >(m, "FServiceResult")
        .def_readwrite("ServiceName", &FServiceResult::ServiceName)
        .def_readwrite("ConfigurationGroup", &FServiceResult::ConfigurationGroup)
        .def_readwrite("Parameters", &FServiceResult::Parameters)
  ;
}