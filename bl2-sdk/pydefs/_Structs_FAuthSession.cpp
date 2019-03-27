#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAuthSession(py::module &m)
{
    py::class_< FAuthSession >(m, "FAuthSession")
        .def_readwrite("AuthStatus", &FAuthSession::AuthStatus)
        .def_readwrite("AuthBlobUID", &FAuthSession::AuthBlobUID)
        .def_readwrite("EndPointIP", &FBaseAuthSession::EndPointIP)
        .def_readwrite("EndPointPort", &FBaseAuthSession::EndPointPort)
        .def_readwrite("EndPointUID", &FBaseAuthSession::EndPointUID)
  ;
}