#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAuthSession()
{
    class_< FAuthSession >("FAuthSession", no_init)
        .def_readwrite("AuthStatus", &FAuthSession::AuthStatus)
        .def_readwrite("AuthBlobUID", &FAuthSession::AuthBlobUID)
        .def_readwrite("EndPointIP", &FBaseAuthSession::EndPointIP)
        .def_readwrite("EndPointPort", &FBaseAuthSession::EndPointPort)
        .def_readwrite("EndPointUID", &FBaseAuthSession::EndPointUID)
  ;
}