#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBaseAuthSession(py::module &m)
{
    py::class_< FBaseAuthSession >(m, "FBaseAuthSession")
        .def_readwrite("EndPointIP", &FBaseAuthSession::EndPointIP)
        .def_readwrite("EndPointPort", &FBaseAuthSession::EndPointPort)
        .def_readwrite("EndPointUID", &FBaseAuthSession::EndPointUID)
  ;
}